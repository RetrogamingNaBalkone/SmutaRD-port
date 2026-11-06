/* Ghidra address: 004150ec; FUN_004150ec */

int __cdecl FUN_004150ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(DAT_004f1434 + 0x754) + 0x31) - *(int *)(param_1 + 0x31);
  iVar1 = *(int *)(*(int *)(DAT_004f1434 + 0x754) + 0x39) - *(int *)(param_1 + 0x39);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

