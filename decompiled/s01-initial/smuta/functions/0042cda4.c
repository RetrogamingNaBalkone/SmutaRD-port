/* Ghidra address: 0042cda4; FUN_0042cda4 */

undefined4 FUN_0042cda4(void)

{
  char cVar1;
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -1) == '.') {
    in_stack_00000004 = in_stack_00000004 + -1;
  }
  cVar1 = *(char *)(in_stack_00000004 + -1);
  if ((cVar1 != '\0') && (cVar1 != '/')) {
    if (cVar1 == ':') {
      if (*(char *)(in_stack_00000004 + -3) != '\0') {
        return 0;
      }
    }
    else if (cVar1 != '\\') {
      return 0;
    }
  }
  return 1;
}

