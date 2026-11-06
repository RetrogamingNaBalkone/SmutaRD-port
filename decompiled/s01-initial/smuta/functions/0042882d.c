/* Ghidra address: 0042882d; FUN_0042882d */

undefined4 FUN_0042882d(void)

{
  int iVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  while ((in_stack_00000008 != *(int *)(in_stack_00000004 + 0x10 + iVar1 * 0x14) ||
         ((*(byte *)(in_stack_00000004 + 0x14 + iVar1 * 0x14) & 1) != 0))) {
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      return 0;
    }
  }
  return CONCAT22((short)((uint)iVar1 >> 0x10),1);
}

