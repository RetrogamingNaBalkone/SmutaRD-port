/* Ghidra address: 00415cc4; FUN_00415cc4 */

void __cdecl FUN_00415cc4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_3c [6];
  int local_24;
  undefined4 local_8;
  
  local_8 = 0x800;
  piVar2 = (int *)(param_1 + 0x31);
  piVar3 = local_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_24 = -(int)*(short *)(DAT_004f1434 + 0x74e);
  iVar1 = FUN_00416644(DAT_004f1434,local_3c,1,0);
  *(undefined2 *)(param_1 + 0x93) = *(undefined2 *)(*(int *)(DAT_004f1434 + 0x754) + 0x93);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x20))();
  }
  return;
}

