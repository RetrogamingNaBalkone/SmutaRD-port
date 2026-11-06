/* Ghidra address: 0040e200; FUN_0040e200 */

void FUN_0040e200(void)

{
  ushort *puVar1;
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    DAT_00439da8 = 0;
    puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 0x49) + 4);
    *puVar1 = *puVar1 | 8;
    (**(code **)(*DAT_0044ec08 + 0x54))();
  }
  return;
}

