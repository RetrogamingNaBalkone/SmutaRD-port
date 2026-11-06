/* Ghidra address: 00407a68; FUN_00407a68 */

int FUN_00407a68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *in_stack_00000004;
  ushort *in_stack_00000008;
  
  iVar2 = ((int)(uint)in_stack_00000004[2] >> 2) - ((int)(uint)in_stack_00000008[2] >> 2);
  iVar3 = ((int)(uint)in_stack_00000004[1] >> 2) - ((int)(uint)in_stack_00000008[1] >> 2);
  iVar1 = ((int)(uint)*in_stack_00000004 >> 2) - ((int)(uint)*in_stack_00000008 >> 2);
  return iVar2 * iVar2 + iVar3 * iVar3 + iVar1 * iVar1;
}

