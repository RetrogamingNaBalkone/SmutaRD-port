/* Ghidra address: 0042d9b4; FUN_0042d9b4 */

char * FUN_0042d9b4(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000004;
  int in_stack_00000008;
  
  pcVar3 = in_stack_00000004;
  pcVar4 = in_stack_00000004;
  while( true ) {
    pcVar1 = FUN_00428fc4();
    if (pcVar1 == (char *)0x0) {
      pcVar1 = in_stack_00000004 + in_stack_00000008;
    }
    iVar2 = (int)pcVar1 - (int)pcVar3;
    if (pcVar4 != pcVar3) {
      FUN_00428fe4();
    }
    if (in_stack_00000004 + in_stack_00000008 + -1 <= pcVar1) break;
    pcVar3 = pcVar1 + 1;
    pcVar4 = pcVar4 + iVar2;
  }
  return pcVar4 + (iVar2 - (int)in_stack_00000004);
}

