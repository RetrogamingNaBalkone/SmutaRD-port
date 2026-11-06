/* Ghidra address: 0042e7d4; FUN_0042e7d4 */

void FUN_0042e7d4(void)

{
  int *piVar1;
  uint uVar2;
  int *in_stack_00000004;
  
  while( true ) {
    piVar1 = *(int **)(*in_stack_00000004 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      uVar2 = (uint)*(byte *)piVar1[8];
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0xc))();
    }
    if (((&DAT_00438815)[uVar2] & 1) == 0) break;
    piVar1 = *(int **)(*in_stack_00000004 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      piVar1[8] = piVar1[8] + 1;
    }
    else {
      (**(code **)(*piVar1 + 0xc))();
    }
    in_stack_00000004[2] = in_stack_00000004[2] + 1;
  }
  if (uVar2 == 0xffffffff) {
    FUN_0042f90c();
  }
  return;
}

