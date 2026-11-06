/* Ghidra address: 00421c94; FUN_00421c94 */

undefined4 FUN_00421c94(void)

{
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0xaf) & 4) != 0) {
    *(undefined2 *)(in_stack_00000004 + 0xaf) = 2;
    return CONCAT22((short)((uint)in_stack_00000004 >> 0x10),1);
  }
  return 0;
}

