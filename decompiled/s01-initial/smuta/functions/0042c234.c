/* Ghidra address: 0042c234; FUN_0042c234 */

uint FUN_0042c234(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *in_stack_00000004;
  
  if (in_stack_00000004 == (int *)0x0) {
    return 0xffffffff;
  }
  if (0 < in_stack_00000004[2]) {
    in_stack_00000004[2] = in_stack_00000004[2] + -1;
    pbVar1 = (byte *)*in_stack_00000004;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    return (uint)*pbVar1;
  }
  if (((in_stack_00000004[2] < 0) || ((*(ushort *)((int)in_stack_00000004 + 0x12) & 0x110) != 0)) ||
     ((*(byte *)((int)in_stack_00000004 + 0x12) & 1) == 0)) {
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
    return 0xffffffff;
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x80;
  if (in_stack_00000004[3] != 0) {
    iVar2 = FUN_0042c1bc();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    in_stack_00000004[2] = in_stack_00000004[2] + -1;
    pbVar1 = (byte *)*in_stack_00000004;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    return (uint)*pbVar1;
  }
  if ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0) {
    FUN_0042c188();
  }
  pcVar3 = FUN_0042da20();
  if (pcVar3 == (char *)0x0) {
    uVar4 = FUN_0042d92c();
    if (uVar4 == 1) {
      *(ushort *)((int)in_stack_00000004 + 0x12) =
           *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe7f | 0x20;
    }
    else {
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10
      ;
    }
    return 0xffffffff;
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xffdf;
  return (uint)DAT_0049abe4;
}

