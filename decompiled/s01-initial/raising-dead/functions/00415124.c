/* Ghidra address: 00415124; FUN_00415124 */

bool __cdecl FUN_00415124(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(DAT_004f1434 + 0x74e) + ((int)*(short *)(DAT_004f1434 + 0x74e) >> 1);
  if (*(int *)(param_1 + 0x13d) < iVar2) {
    iVar2 = *(int *)(param_1 + 0x13d);
  }
  iVar1 = FUN_004150ec(param_1);
  return iVar1 <= iVar2;
}

