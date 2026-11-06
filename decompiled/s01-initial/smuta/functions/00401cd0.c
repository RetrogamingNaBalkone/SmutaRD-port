/* Ghidra address: 00401cd0; FUN_00401cd0 */

void FUN_00401cd0(void)

{
  short sVar1;
  char *pcVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  char *in_stack_00000014;
  
  pcVar2 = (char *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008);
  for (sVar1 = 0; sVar1 < in_stack_00000010; sVar1 = sVar1 + 1) {
    if (*in_stack_00000014 != -1) {
      *pcVar2 = *in_stack_00000014;
    }
    in_stack_00000014 = in_stack_00000014 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return;
}

