/* Ghidra address: 004a6000; FUN_004a6000 */

/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_004a6000(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  HMODULE hModule_00;
  undefined4 uVar3;
  HANDLE hFile;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (DAT_004a7200 == (code *)0x0) {
    if (DAT_004a7204 == 0) {
      DAT_004a7204 = 1;
      hModule = GetModuleHandleA(s_kernel32_dll_004a7000);
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,s_GetModuleFileNameW_004a7010);
        if (pFVar1 != (FARPROC)0x0) {
          uVar2 = (*pFVar1)();
          if ((uVar2 != 0) && (uVar2 < 0xff0)) {
            pwVar5 = (wchar_t *)(&DAT_004a7400 + uVar2 * 2);
            do {
              pwVar6 = pwVar5;
              if (pwVar6 < (wchar_t *)0x4a7401) goto LAB_004a614d;
              pwVar5 = pwVar6 + -1;
            } while (pwVar6[-1] != L'\\');
            pwVar5 = u_smuta_music_dll_004a7054;
            DAT_004a7208 = pwVar6;
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pwVar6 = *pwVar5;
              pwVar5 = pwVar5 + (uint)bVar7 * -2 + 1;
              pwVar6 = pwVar6 + (uint)bVar7 * -2 + 1;
            }
            pFVar1 = GetProcAddress(hModule,s_LoadLibraryExW_004a7024);
            if (pFVar1 != (FARPROC)0x0) {
              hModule_00 = (HMODULE)(*pFVar1)();
              if (hModule_00 != (HMODULE)0x0) {
                DAT_004a7200 = GetProcAddress(hModule_00,s_SmutaMusicDispatch_004a7040);
                if (DAT_004a7200 != (FARPROC)0x0) goto LAB_004a60dd;
              }
            }
            pwVar5 = u_smuta_music_log_004a7074;
            pwVar6 = DAT_004a7208;
            for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pwVar6 = *pwVar5;
              pwVar5 = pwVar5 + (uint)bVar7 * -2 + 1;
              pwVar6 = pwVar6 + (uint)bVar7 * -2 + 1;
            }
            pFVar1 = GetProcAddress(hModule,s_CreateFileW_004a7034);
            if (pFVar1 != (FARPROC)0x0) {
              hFile = (HANDLE)(*pFVar1)();
              if (hFile != (HANDLE)0xffffffff) {
                WriteFile(hFile,s__music__Cannot_load_smuta_music__004a7094,0x5b,
                          (LPDWORD)&DAT_004a7210,(LPOVERLAPPED)0x0);
                CloseHandle(hFile);
              }
            }
          }
        }
      }
    }
LAB_004a614d:
    uVar3 = 0xffffffff;
  }
  else {
LAB_004a60dd:
    uVar3 = (*DAT_004a7200)();
  }
  return uVar3;
}

