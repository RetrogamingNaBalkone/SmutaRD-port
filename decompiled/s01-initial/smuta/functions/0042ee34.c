/* Ghidra address: 0042ee34; FUN_0042ee34 */

int * FUN_0042ee34(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int *in_stack_00000004;
  undefined1 *in_stack_00000008;
  int in_stack_0000000c;
  char in_stack_00000010;
  
  bVar2 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    uVar3 = 0;
    while (in_stack_0000000c = in_stack_0000000c + -1, 0 < in_stack_0000000c) {
      piVar1 = *(int **)(*in_stack_00000004 + 4);
      if ((uint)piVar1[8] < (uint)piVar1[9]) {
        uVar3 = (uint)*(byte *)piVar1[8];
      }
      else {
        uVar3 = (**(code **)(*piVar1 + 0xc))();
      }
      if ((uVar3 == (int)in_stack_00000010) || (uVar3 == 0xffffffff)) break;
      *in_stack_00000008 = (char)uVar3;
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_00000004[2] = in_stack_00000004[2] + 1;
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

