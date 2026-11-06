/* Ghidra address: 00431b68; FUN_00431b68 */

int * FUN_00431b68(void)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  code *in_stack_00000014;
  
  uVar1 = *DAT_0049aa2c;
  if ((in_stack_00000004 == (int *)0x0) &&
     (in_stack_00000004 = (int *)FUN_004319bc(), in_stack_00000004 == (int *)0x0)) {
    in_stack_00000004 = (int *)0x0;
  }
  else {
    if ((in_stack_00000010 & 0x10) != 0) {
      *in_stack_00000004 = in_stack_0000000c;
      in_stack_00000004 = in_stack_00000004 + 1;
    }
    piVar3 = in_stack_00000004;
    if (in_stack_00000014 != (code *)0x0) {
      while (in_stack_0000000c != 0) {
        uVar2 = in_stack_00000010 & 7;
        if (uVar2 == 1) {
          (*in_stack_00000014)();
        }
        else if (uVar2 == 2) {
          (*in_stack_00000014)();
        }
        else if (uVar2 == 3) {
          (*in_stack_00000014)(piVar3);
        }
        else if (uVar2 == 5) {
          (*in_stack_00000014)();
        }
        else {
          FUN_00431e98();
        }
        piVar3 = (int *)((int)piVar3 + in_stack_00000008);
        in_stack_0000000c = in_stack_0000000c + -1;
      }
      if ((in_stack_00000010 & 0x200) != 0) {
        *DAT_0049aa2c = uVar1;
      }
    }
  }
  return in_stack_00000004;
}

