/* Ghidra address: 0040886c; FUN_0040886c */

char * FUN_0040886c(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  *(ushort *)(in_stack_00000004 + 0x14) = *(ushort *)(in_stack_00000004 + 0x14) | 0x22;
  uVar2 = 0xffffffff;
  do {
    pcVar4 = in_stack_00000008;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = in_stack_00000008 + 1;
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(in_stack_00000004 + 0x30);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return (char *)(in_stack_00000004 + 0x30);
}

