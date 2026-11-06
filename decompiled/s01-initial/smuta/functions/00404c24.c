/* Ghidra address: 00404c24; FUN_00404c24 */

void FUN_00404c24(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x8e) != 0) {
    FUN_00409a20();
    FUN_00409a38();
    FUN_00403f04();
    FUN_00409a8c();
    iVar1 = FUN_00409a58();
    DAT_0049a324 = iVar1 + DAT_0049a324 >> 1;
  }
  return;
}

