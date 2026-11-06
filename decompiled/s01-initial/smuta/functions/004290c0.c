/* Ghidra address: 004290c0; FUN_004290c0 */

char * FUN_004290c0(void)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  char *in_stack_00000004;
  char in_stack_00000008;
  
  uVar2 = 0xffffffff;
  bVar3 = true;
  pcVar1 = in_stack_00000004;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar3 = *pcVar1 == '\0';
    pcVar1 = pcVar1 + 1;
  } while (!bVar3);
  uVar2 = ~uVar2;
  do {
    pcVar1 = in_stack_00000004;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = in_stack_00000004 + 1;
    bVar3 = in_stack_00000008 == *in_stack_00000004;
    in_stack_00000004 = pcVar1;
  } while (!bVar3);
  if (bVar3) {
    pcVar1 = pcVar1 + -1;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

