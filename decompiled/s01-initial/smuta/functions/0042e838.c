/* Ghidra address: 0042e838; FUN_0042e838 */

int * FUN_0042e838(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int local_c;
  
  bVar2 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    uVar3 = 0;
    local_c = *(int *)(*in_stack_00000004 + 0x20);
    *(undefined4 *)(*in_stack_00000004 + 0x20) = 0;
    while (local_c = local_c + -1, local_c != 0) {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        uVar3 = (uint)*(byte *)piVar1[8];
      }
      else {
        uVar3 = (**(code **)(*piVar1 + 0xc))();
      }
      if ((((&DAT_00438815)[uVar3] & 1) != 0) || (uVar3 == 0xffffffff)) break;
      *in_stack_00000008 = (char)uVar3;
      in_stack_00000008 = in_stack_00000008 + 1;
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        piVar1[8] = piVar1[8] + 1;
      }
      else {
        (**(code **)(*piVar1 + 0xc))();
      }
    }
    if (uVar3 == 0xffffffff) {
      FUN_0042f90c();
    }
  }
  *in_stack_00000008 = 0;
  return in_stack_00000004;
}

