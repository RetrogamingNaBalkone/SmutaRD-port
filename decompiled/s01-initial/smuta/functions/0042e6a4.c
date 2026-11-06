/* Ghidra address: 0042e6a4; FUN_0042e6a4 */

uint FUN_0042e6a4(void)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int *in_stack_00000004;
  
  piVar1 = *(int **)(*in_stack_00000004 + 4);
  if ((uint)piVar1[9] <= (uint)piVar1[8]) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    if (iVar3 == -1) {
      uVar4 = 0xffffffff;
      goto LAB_0042e6d2;
    }
  }
  pbVar2 = (byte *)piVar1[8];
  piVar1[8] = piVar1[8] + 1;
  uVar4 = (uint)*pbVar2;
LAB_0042e6d2:
  if (uVar4 == 0xffffffff) {
    FUN_0042f90c();
  }
  else {
    in_stack_00000004[2] = in_stack_00000004[2] + 1;
  }
  return uVar4;
}

