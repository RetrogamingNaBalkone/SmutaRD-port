/* Ghidra address: 0042926c; FUN_0042926c */

char * FUN_0042926c(void)

{
  int iVar1;
  char *pcVar2;
  char *in_stack_00000004;
  char in_stack_00000008;
  
  iVar1 = FUN_00429114();
  pcVar2 = in_stack_00000004 + iVar1;
  while( true ) {
    if (in_stack_00000008 == *pcVar2) {
      return pcVar2;
    }
    if (in_stack_00000004 == pcVar2) break;
    pcVar2 = pcVar2 + -1;
  }
  return (char *)0x0;
}

