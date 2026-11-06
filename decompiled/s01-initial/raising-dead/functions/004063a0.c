/* Ghidra address: 004063a0; FUN_004063a0 */

void __stdcall FUN_004063a0(void)

{
  char cVar1;
  char *in_stack_00000010;
  
  for (; (cVar1 = *in_stack_00000010, cVar1 != '\0' && (cVar1 != '$'));
      in_stack_00000010 = in_stack_00000010 + 1) {
    if ((cVar1 != '\n') && (cVar1 != '\r')) {
      FUN_00406398();
    }
  }
  return;
}

