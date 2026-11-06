/* Ghidra address: 00407588; FUN_00407588 */

undefined2 * FUN_00407588(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  ushort *in_stack_00000008;
  ushort *in_stack_0000000c;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x43504c);
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[1];
  uVar3 = in_stack_00000008[2];
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  uVar4 = in_stack_0000000c[2];
  uVar5 = in_stack_0000000c[1];
  *in_stack_00000004 = (short)((uint)uVar1 * (uint)*in_stack_0000000c >> 8);
  in_stack_00000004[1] = (short)((uint)uVar2 * (uint)uVar5 >> 8);
  in_stack_00000004[2] = (short)((uint)uVar3 * (uint)uVar4 >> 8);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return in_stack_00000004;
}

