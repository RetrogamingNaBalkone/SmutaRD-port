/* Ghidra address: 00407840; FUN_00407840 */

undefined1 * FUN_00407840(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 *in_stack_00000004;
  ushort *in_stack_00000008;
  undefined1 local_7;
  
  uVar1 = in_stack_00000008[1];
  uVar2 = in_stack_00000008[2];
  local_7 = (undefined1)((int)(uint)*in_stack_00000008 >> 10);
  *in_stack_00000004 = local_7;
  in_stack_00000004[1] = (char)((int)(uint)uVar1 >> 10);
  in_stack_00000004[2] = (char)((int)(uint)uVar2 >> 10);
  return in_stack_00000004;
}

