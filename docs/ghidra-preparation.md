# S01: подготовка декомпиляций

Первый шаг выполнен: обе основные программы импортированы, автоматически
проанализированы и декомпилированы в Ghidra 12.1.2 PUBLIC под Windows x64,
JDK Temurin 21.0.12.1+1. Компактная машинная сводка —
[analysis/ghidra-preparation.json](../analysis/ghidra-preparation.json).
Это подготовка материалов исследования; остальные результаты S01 ещё впереди.

## Образцы и параметры

Пути заданы от корня репозитория, полные комплекты описаны в
[originals](originals.md), контрольные суммы — в
[manifest](../analysis/originals-manifest.json).

| Образец | SHA-256 |
| --- | --- |
| `originals/smuta_modern_20261013/smuta_modern/SMUTA.EXE` | `1b7f8e5d010e225139f3a03f3721aff39d5e0b8c1c4ef42106c14002ea6405bb` |
| `originals/Raising-Dead_modern_20261013/Raising-Dead_modern/Rd.EXE` | `caca5b11ae8abedf526412fdf6e4a790aa33ea91bc3b3c0f649fe64989a00f91` |

| Параметр | «Смута» | Raising Dead |
| --- | --- | --- |
| Loader / формат | Portable Executable (PE) | Portable Executable (PE) |
| Language | `x86:LE:32:default` | `x86:LE:32:default` |
| Compiler spec, выбранный loader | `borlanddelphi` | `borlandcpp` |
| Image base Ghidra | `0x00400000` | `0x00400000` |
| PE AddressOfEntryPoint, RVA | `0x00001000` | `0x00001000` |
| Точка входа в адресах Ghidra | `0x00401000` | `0x00401000` |
| Обнаружено внутренних функций, включая thunks | 1016 | 1260 |
| Успешных попыток декомпиляции | 1016 | 1260 |
| Неуспешных попыток | 0 | 0 |
| Распознанных инструкций в экспорте | 61120 | 64891 |

Параметры подтверждены `program.txt` и журналами загрузки обеих программ.
RVA точки входа дополнительно прочитан как little-endian uint32 по файловому
смещению `e_lfanew + 0x28` заголовка PE; адрес Ghidra здесь равен image base + RVA.
Перечень `entry=` в `program.txt` содержит также экспортируемые точки входа,
а не только старт программы. Compiler spec — выбор загрузчика, не заключение
о языке всего кода и не проверка соглашений вызова каждой функции.
Runtime-адреса не измерялись; файловые смещения нельзя получать простым
вычитанием image base без учёта секций PE.

Анализ стандартный, максимум два CPU, таймаут декомпиляции — 60 секунд
на функцию. Полный список сохранённых настроек — `program.txt` каждой игры.
Ручных переименований, исправлений типов и границ функций нет.

## Локальные материалы

Общий проект с двумя независимыми программами:
`research/ghidra/s01-initial/SmutaRD.gpr`. Его можно открыть в GUI Ghidra.

Экспорты: `decompiled/s01-initial/smuta/` и
`decompiled/s01-initial/raising-dead/`. В каждом есть `all-functions.c`,
отдельные `functions/*.c`, индекс с диагностикой `functions.tsv`,
`disassembly.tsv`, `symbols.tsv`, `program.txt`, `summary.properties`.
Псевдокод сопровождается адресами Ghidra; дизассемблирование — байтами
инструкций, видами потока управления и прямыми переходами.

Доказательства: `research/evidence/decompilation/s01-initial/`:
`*-arguments.json`, `*-console.log`, `*-application.log`, `*-script.log`,
`originals-before.json`, `originals-after.json`, `run.json`,
`reopen-arguments.json`, `reopen-console.log`, `*-reopened.txt`.
Полные материалы локальные и исключены из Git; в репозитории остаются
инструменты и эта сводка по [протоколу](research.md).

## Воспроизведение и проверки

Инструменты и инструкция — [tools/ghidra](../tools/ghidra/README.md).
Выполненная команда из корня репозитория:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File tools/ghidra/prepare.ps1 -GhidraHome C:/Users/dspev/AppData/Local/Programs/Ghidra/ghidra_12.1.2_PUBLIC -JavaHome C:/Users/dspev/AppData/Local/Programs/Ghidra/java/jdk-21.0.12.1+1 -RunId s01-initial
powershell -NoProfile -ExecutionPolicy Bypass -File tools/ghidra/check.ps1 -RunId s01-initial
```

- `Get-FileHash -Algorithm SHA256`: все 14 образцов совпали с исходным
  manifest; размеры и SHA-256 всех 84 файлов `originals/` совпали до и после.
- Два процесса Ghidra завершились с кодом 0. Журналы подтвердили успешные
  analysis, post-analysis, save и import; маркеры `SMUTARD_EXPORT_COMPLETE`
  и `summary.properties` согласованы с индексами функций.
- Проект повторно открыт через `-process '*.EXE' -noanalysis -readOnly`
  с `CheckResearch.java`; код процесса 0. Проверены SHA-256 программ и наличие
  непустого экспорта каждой из 1016 и 1260 сохранённых внутренних функций.
  Два маркера `SMUTARD_REOPEN_CHECK_PASSED` и `*-reopened.txt` подтверждают успех.
- Первая вспомогательная команда повторного открытия неверно развернула
  массив аргументов PowerShell и завершилась до открытия проекта; её журнал
  сохранён как `reopen-attempt1-console.log`. Исправленный запуск указан выше.
- Финальная сверка `Get-FileHash` после повторного открытия: 84 файла без
  изменений. Parser PowerShell: оба `.ps1` без синтаксических ошибок;
  проверка относительных Markdown-ссылок через `Test-Path`: 42 корректны;
  `git diff --check`: без замечаний. `git check-ignore` подтвердил исключение
  образца EXE, проекта, доказательств и полного псевдокода.

## Ограничения и следующий шаг

Нулевое число ошибок декомпиляции относится к обнаруженным функциям.
Полнота обнаружения кода, косвенные вызовы, типы, знаковость, соглашения
вызова и игровое поведение не проверены. Предупреждения внутри псевдокода
сохранены. Автоматические экспорты не являются собираемым исходным кодом.

В журналах есть предупреждения о no-return именах и разборе экспортов/WEVT
ресурсов системных DLL. Стандартный loader читал DLL из текущей Windows и
соседнюю `waveopen.dll`, не сохраняя их отдельными программами в проекте.
Это зависимость разрешения импортов от среды: для точного повторения смотреть
пути в журналах. Подготовка не включает декомпиляцию установщиков, DLL патчей
или дополнительного `Rd.EXE.before-input-patch`.

Следующая работа в S01 — от `0x00401000` каждой программы проверить стартовый
путь по дизассемблированию, найти игровой цикл и обращения к игровым архивам,
после чего составить доказательную карту подсистем, форматов и текстов.
Чтение DAT, минимальный набор ресурсов, сохранения и выбор музыки пока
не исследованы. Сборочных и игровых проверок нет: реализации порта ещё нет.
