/* Ghidra address: 00408a28; FUN_00408a28 */

void FUN_00408a28(void)

{
  char cVar1;
  int iVar2;
  char *in_stack_00000004;
  short *in_stack_00000008;
  short *in_stack_0000000c;
  
  iVar2 = 0;
  *in_stack_00000008 = 0;
  *in_stack_0000000c = 1;
  while( true ) {
    cVar1 = *in_stack_00000004;
    if ((cVar1 == '\0') || (cVar1 == '$')) break;
    if (cVar1 == '\n') {
      if (*in_stack_00000008 < iVar2) {
        *in_stack_00000008 = (short)iVar2;
      }
      iVar2 = 0;
      *in_stack_0000000c = *in_stack_0000000c + 1;
    }
    else if (*in_stack_00000004 != '\r') {
      iVar2 = iVar2 + 1;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (*in_stack_00000008 < iVar2) {
    *in_stack_00000008 = (short)iVar2;
  }
  return;
}

