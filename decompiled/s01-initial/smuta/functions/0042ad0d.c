/* Ghidra address: 0042ad0d; FUN_0042ad0d */

void FUN_0042ad0d(void)

{
  uint uVar1;
  int in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 local_8;
  
  uVar1 = *(uint *)(*(int *)(in_stack_00000008 + 8) + 0x20);
  if (in_stack_0000000c == 0) {
    in_stack_0000000c = uVar1 * *(int *)(in_stack_00000008 + 0xc);
  }
  local_8 = in_stack_0000000c / uVar1;
  if (in_stack_0000000c != local_8 * uVar1) {
    FUN_0042ab67();
  }
  while (local_8 != 0) {
    FUN_0042ab67();
    local_8 = local_8 - 1;
  }
  return;
}

