/* Ghidra address: 00403d8c; FUN_00403d8c */

void FUN_00403d8c(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 local_400 [1024];
  
  puVar1 = local_400;
  DAT_00434140 = 0;
  iVar2 = 0;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 0x100);
  (**(code **)(*DAT_00434138 + 0x18))();
  return;
}

