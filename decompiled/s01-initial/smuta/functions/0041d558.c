/* Ghidra address: 0041d558; FUN_0041d558 */

void FUN_0041d558(void)

{
  int *piVar1;
  int in_stack_00000004;
  
  *(undefined2 *)(in_stack_00000004 + 0x4b72) = 0;
  piVar1 = DAT_0044ec08;
  *(undefined2 *)(DAT_0044ec08 + 4) = 0;
  (**(code **)(*piVar1 + 0x3c))();
  FUN_00406c00();
  return;
}

