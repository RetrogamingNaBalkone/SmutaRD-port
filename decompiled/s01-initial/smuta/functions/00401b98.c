/* Ghidra address: 00401b98; FUN_00401b98 */

void FUN_00401b98(void)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  byte in_stack_00000010;
  
  if (DAT_00435924 != 0) {
    *(undefined2 *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008 * 2) =
         *(undefined2 *)(DAT_00434094 + 8 + (uint)in_stack_00000010 * 2);
    return;
  }
  *(byte *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008) = in_stack_00000010;
  return;
}

