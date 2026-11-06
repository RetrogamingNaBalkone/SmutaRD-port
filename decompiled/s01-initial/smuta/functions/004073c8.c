/* Ghidra address: 004073c8; FUN_004073c8 */

undefined2 * FUN_004073c8(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  ushort *in_stack_00000008;
  ushort *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x434f94);
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[1];
  uVar3 = in_stack_00000008[2];
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  if ((uint)uVar3 + (uint)in_stack_0000000c[2] < 0xffff) {
    uVar4 = (undefined2)((uint)uVar3 + (uint)in_stack_0000000c[2]);
  }
  else {
    uVar4 = 0xfffe;
  }
  if ((uint)uVar2 + (uint)in_stack_0000000c[1] < 0xffff) {
    uVar6 = (undefined2)((uint)uVar2 + (uint)in_stack_0000000c[1]);
  }
  else {
    uVar6 = 0xfffe;
  }
  if ((uint)uVar1 + (uint)*in_stack_0000000c < 0xffff) {
    uVar5 = (undefined2)((uint)uVar1 + (uint)*in_stack_0000000c);
  }
  else {
    uVar5 = 0xfffe;
  }
  *in_stack_00000004 = uVar5;
  in_stack_00000004[1] = uVar6;
  in_stack_00000004[2] = uVar4;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}

