/* Ghidra address: 00422b40; FUN_00422b40 */

void FUN_00422b40(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x38) != 0) {
    bVar1 = FUN_0041dc34();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(undefined4 *)(in_stack_00000004 + 0x38) = 0;
      FUN_0041dd50();
      FUN_00423790();
    }
  }
  return;
}

