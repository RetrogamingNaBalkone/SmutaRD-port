/* Ghidra address: 00409a58; FUN_00409a58 */

undefined4 FUN_00409a58(void)

{
  DWORD DVar1;
  short *in_stack_00000004;
  
  if (*in_stack_00000004 != 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(in_stack_00000004 + 3) = DVar1 - *(int *)(in_stack_00000004 + 1);
  }
  return *(undefined4 *)(in_stack_00000004 + 3);
}

