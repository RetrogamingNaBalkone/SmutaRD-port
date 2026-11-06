/* Ghidra address: 0040ca2c; FUN_0040ca2c */

void __cdecl FUN_0040ca2c(undefined4 param_1,byte *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = FUN_0040c0f8(DAT_0043939c,param_2);
  iVar3 = 0;
  puVar2 = &DAT_004393cb;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + 1;
    puVar2[-1] = *pcVar1 << 2;
    pcVar4 = pcVar1 + 2;
    puVar2[-2] = pcVar1[1] << 2;
    pcVar1 = pcVar1 + 3;
    puVar2[-3] = *pcVar4 << 2;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 0x100);
  return;
}

