/* Ghidra address: 0042d1dc; FUN_0042d1dc */

void FUN_0042d1dc(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = 7;
  pcVar1 = (char *)(in_stack_00000008 + 7);
  do {
    cVar3 = (char)(in_stack_00000004 & 0xf);
    if ((in_stack_00000004 & 0xf) < 10) {
      *pcVar1 = cVar3 + '0';
    }
    else {
      *pcVar1 = cVar3 + '7';
    }
    in_stack_00000004 = in_stack_00000004 >> 4;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar1 + -1;
  } while (-1 < iVar2);
  return;
}

