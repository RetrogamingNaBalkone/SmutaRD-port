/* Ghidra address: 0041e5f0; FUN_0041e5f0 */

void FUN_0041e5f0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  int iVar1;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x2c);
  (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))();
  *(int *)(in_stack_00000004 + 0x2c) = in_stack_00000008;
  (**(code **)(*(int *)(in_stack_00000008 + 0x14) + 8))
            (in_stack_00000008,*(int *)(in_stack_00000008 + 0x14),iVar1,in_stack_00000008);
  return;
}

