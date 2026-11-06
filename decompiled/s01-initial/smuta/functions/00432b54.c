/* Ghidra address: 00432b54; FUN_00432b54 */

void FUN_00432b54(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438ee0);
  *(undefined4 *)(in_stack_00000004 + 10) = in_stack_00000008;
  puVar1 = FUN_004318bc();
  *(uint **)(in_stack_00000004 + 2) = puVar1;
  if (puVar1 == (uint *)0x0) {
    FUN_004292ec();
  }
  *in_FS_OFFSET = local_24;
  return;
}

