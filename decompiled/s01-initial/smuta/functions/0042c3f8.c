/* Ghidra address: 0042c3f8; FUN_0042c3f8 */

void FUN_0042c3f8(void)

{
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  int in_stack_00000010;
  char *in_stack_00000014;
  
  if ((in_stack_00000008 != (char *)0x0) && (*in_stack_00000008 != '\0')) {
    *in_stack_00000004 = *in_stack_00000008;
    in_stack_00000004[1] = ':';
    in_stack_00000004 = in_stack_00000004 + 2;
  }
  if ((in_stack_0000000c != (char *)0x0) && (*in_stack_0000000c != '\0')) {
    in_stack_00000004 = (char *)FUN_00429298();
    if ((in_stack_00000004[-1] != '\\') && (in_stack_00000004[-1] != '/')) {
      *in_stack_00000004 = '\\';
      in_stack_00000004 = in_stack_00000004 + 1;
    }
  }
  if (in_stack_00000010 != 0) {
    in_stack_00000004 = (char *)FUN_00429298();
  }
  if ((in_stack_00000014 != (char *)0x0) && (*in_stack_00000014 != '\0')) {
    if (*in_stack_00000014 != '.') {
      *in_stack_00000004 = '.';
    }
    in_stack_00000004 = (char *)FUN_00429298();
  }
  *in_stack_00000004 = '\0';
  return;
}

