/* Ghidra address: 004297d6; FUN_004297d6 */

undefined4 FUN_004297d6(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (in_stack_00000008 == in_stack_00000004) {
    return 1;
  }
  if (((short)in_stack_00000004[1] == (short)in_stack_00000008[1]) &&
     (*in_stack_00000004 == *in_stack_00000008)) {
    if (((*(ushort *)(in_stack_00000004 + 1) | *(ushort *)(in_stack_00000008 + 1)) & 0x80) != 0) {
      return 0;
    }
    pcVar3 = (char *)((int)in_stack_00000004 + (uint)*(ushort *)((int)in_stack_00000004 + 6));
    pcVar4 = (char *)((int)in_stack_00000008 + (uint)*(ushort *)((int)in_stack_00000008 + 6));
    do {
      cVar1 = *pcVar3;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
      if (cVar2 != cVar1) {
        return 0;
      }
    } while (cVar1 != '\0');
    return 1;
  }
  return 0;
}

