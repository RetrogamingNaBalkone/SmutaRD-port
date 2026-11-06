/* Ghidra address: 004279bc; FUN_004279bc */

undefined4 FUN_004279bc(void)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  while (*(int *)(**(int **)(in_stack_00000004 + 6) + 0xc) == 0) {
    piVar1 = FUN_0042ed84();
    iVar4 = *piVar1;
    if ((*(byte *)(iVar4 + 0xc) & 0x86) != 0) {
      iVar4 = 0;
    }
    if ((iVar4 == 0) || ((*in_stack_00000008 != '#' && (*in_stack_00000008 != '\0')))) break;
  }
  if (*(int *)(**(int **)(in_stack_00000004 + 6) + 0xc) == 0) {
    pcVar3 = in_stack_00000008;
    if (*in_stack_00000008 == '[') {
      while( true ) {
        pcVar3 = pcVar3 + 1;
        if (*pcVar3 == ']') break;
        *in_stack_00000008 = *pcVar3;
        in_stack_00000008 = in_stack_00000008 + 1;
      }
      *in_stack_00000008 = '\0';
      uVar2 = CONCAT22((short)((uint)pcVar3 >> 0x10),1);
    }
    else {
      uVar2 = CONCAT22((short)((uint)*(int **)(in_stack_00000004 + 6) >> 0x10),2);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

