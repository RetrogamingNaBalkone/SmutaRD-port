/* Ghidra address: 00428fc4; FUN_00428fc4 */

char * FUN_00428fc4(void)

{
  char *pcVar1;
  undefined1 in_ZF;
  char *in_stack_00000004;
  char in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_0000000c != 0) {
    do {
      pcVar1 = in_stack_00000004;
      if (in_stack_0000000c == 0) break;
      in_stack_0000000c = in_stack_0000000c + -1;
      pcVar1 = in_stack_00000004 + 1;
      in_ZF = in_stack_00000008 == *in_stack_00000004;
      in_stack_00000004 = pcVar1;
    } while (!(bool)in_ZF);
    if ((bool)in_ZF) {
      return pcVar1 + -1;
    }
  }
  return (char *)0x0;
}

