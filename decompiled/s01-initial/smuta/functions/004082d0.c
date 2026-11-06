/* Ghidra address: 004082d0; FUN_004082d0 */

void FUN_004082d0(void)

{
  int in_stack_00000004;
  byte in_stack_00000008;
  
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    DAT_0043518c = 0;
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00431954();
    FUN_00409b1c();
    FUN_00409b1c();
    FUN_00409b1c();
    FUN_00427c1e();
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  return;
}

