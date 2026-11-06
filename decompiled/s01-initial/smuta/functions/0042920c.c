/* Ghidra address: 0042920c; FUN_0042920c */

int FUN_0042920c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *in_stack_00000004;
  int in_stack_0000000c;
  
  while( true ) {
    uVar1 = FUN_0042f944();
    uVar2 = FUN_0042f944();
    if (((uVar1 != uVar2) || (*in_stack_00000004 == '\0')) || (in_stack_0000000c == 0)) break;
    in_stack_0000000c = in_stack_0000000c + -1;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (in_stack_0000000c == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_0042f944();
    uVar2 = FUN_0042f944();
    iVar3 = uVar1 - uVar2;
  }
  return iVar3;
}

