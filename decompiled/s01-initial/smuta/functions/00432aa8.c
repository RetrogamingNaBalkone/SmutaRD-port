/* Ghidra address: 00432aa8; FUN_00432aa8 */

void FUN_00432aa8(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_24;
  
  FUN_0042b4b4(0x438ec0);
  *(uint *)(in_stack_00000004 + 0xe) = *(uint *)(in_stack_00000004 + 0xe) | 1;
  iVar1 = FUN_00432ba4();
  if (DAT_00438f1c < (uint)(*(int *)(in_stack_00000004 + 10) - iVar1)) {
    puVar2 = FUN_004318bc();
    *(uint **)(in_stack_00000004 + 2) = puVar2;
    *(int *)(in_stack_00000004 + 10) = iVar1;
  }
  *in_FS_OFFSET = local_24;
  return;
}

