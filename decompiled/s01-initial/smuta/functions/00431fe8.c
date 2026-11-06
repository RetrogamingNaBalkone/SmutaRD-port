/* Ghidra address: 00431fe8; FUN_00431fe8 */

void FUN_00431fe8(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000004 == 0) {
    while (DAT_00438ce0 != 0) {
      DAT_00438ce0 = DAT_00438ce0 + -1;
      (**(code **)(&DAT_0049ac28 + DAT_00438ce0 * 4))();
    }
    FUN_00432540();
    (*(code *)PTR_FUN_00438ce4)();
  }
  if (in_stack_00000008 == 0) {
    if (in_stack_00000004 == 0) {
      (*(code *)PTR_FUN_00438ce8)();
      (*(code *)PTR_FUN_00438cec)();
    }
    FUN_004325b8();
  }
  return;
}

