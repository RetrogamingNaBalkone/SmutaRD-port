/* Ghidra address: 0041133c; FUN_0041133c */

int FUN_0041133c(void)

{
  int *piVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = 0;
  piVar1 = (int *)(in_stack_00000004 + 0x30e);
  while( true ) {
    if (*piVar1 == 0) {
      *(short *)(in_stack_00000004 + 0x752) = *(short *)(in_stack_00000004 + 0x752) + 1;
      return iVar2;
    }
    if ((*(byte *)(*piVar1 + 0x1c) & 4) != 0) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (0xff < (short)iVar2) {
      return -1;
    }
  }
  FUN_00411394();
  *(short *)(in_stack_00000004 + 0x752) = *(short *)(in_stack_00000004 + 0x752) + 1;
  return iVar2;
}

