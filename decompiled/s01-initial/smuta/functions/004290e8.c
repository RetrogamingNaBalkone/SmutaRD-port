/* Ghidra address: 004290e8; FUN_004290e8 */

int FUN_004290e8(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  uVar3 = 0xffffffff;
  pcVar4 = in_stack_00000008;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    pcVar4 = in_stack_00000004;
    pcVar5 = in_stack_00000008;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = in_stack_00000008 + 1;
    pcVar4 = in_stack_00000004 + 1;
    cVar2 = *in_stack_00000008;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = pcVar4;
    in_stack_00000008 = pcVar5;
  } while (cVar1 == cVar2);
  return (uint)(byte)pcVar4[-1] - (uint)(byte)pcVar5[-1];
}

