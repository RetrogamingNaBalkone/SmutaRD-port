/* Ghidra address: 0042b940; FUN_0042b940 */

void FUN_0042b940(void)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 *in_stack_00000004;
  
  puVar1 = (undefined4 *)segment(in_FS,0);
  *in_stack_00000004 = *puVar1;
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = in_stack_00000004;
  return;
}

