/* Ghidra address: 0042fd94; FUN_0042fd94 */

int FUN_0042fd94(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  char *in_stack_00000004;
  
  iVar2 = 0;
  do {
    pcVar3 = in_stack_00000004;
    cVar1 = *pcVar3;
    in_stack_00000004 = pcVar3 + 1;
  } while (((&DAT_00438815)[cVar1] & 1) != 0);
  if ((cVar1 == '+') || (cVar1 == '-')) {
    bVar4 = cVar1 == '-';
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = pcVar3 + 2;
  }
  else {
    bVar4 = false;
  }
  while (('/' < cVar1 && (cVar1 < ':'))) {
    iVar2 = iVar2 * 10 + (int)cVar1 + -0x30;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (bVar4) {
    iVar2 = -iVar2;
  }
  return iVar2;
}

