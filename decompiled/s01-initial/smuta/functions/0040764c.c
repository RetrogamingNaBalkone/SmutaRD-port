/* Ghidra address: 0040764c; FUN_0040764c */

undefined2 * FUN_0040764c(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  ushort *in_stack_00000008;
  ushort *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x4350a8);
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[1];
  uVar3 = in_stack_00000008[2];
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  if (in_stack_0000000c[2] == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)in_stack_0000000c[2];
  }
  if (in_stack_0000000c[1] == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (uint)in_stack_0000000c[1];
  }
  if (*in_stack_0000000c == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = (uint)*in_stack_0000000c;
  }
  *in_stack_00000004 = (short)(((ulonglong)uVar1 << 8) / (ulonglong)uVar6);
  in_stack_00000004[1] = (short)(((ulonglong)uVar2 << 8) / (ulonglong)uVar5);
  in_stack_00000004[2] = (short)(((ulonglong)uVar3 << 8) / (ulonglong)uVar4);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}

