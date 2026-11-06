/* Ghidra address: 00409a38; FUN_00409a38 */

void FUN_00409a38(void)

{
  DWORD DVar1;
  short *in_stack_00000004;
  
  if (*in_stack_00000004 == 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(in_stack_00000004 + 1) = DVar1;
    *in_stack_00000004 = 1;
  }
  return;
}

