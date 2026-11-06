/* Ghidra address: 00405ad8; FUN_00405ad8 */

void FUN_00405ad8(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x434aa8);
  FUN_0040107c();
  FUN_00405c48();
  if ((DAT_00434a84 == 0) || (DAT_00434a94 != 0)) {
    thunk_FUN_004a6330();
    DAT_00443d54 = 0;
    DAT_00434a80 = 0;
  }
  else {
    thunk_FUN_004a6330();
    thunk_FUN_004a6260();
  }
  if ((DAT_00443d54 == 0) || (DAT_00434a8c != 0)) {
    thunk_FUN_004a6330();
    (**(code **)(*(int *)(in_stack_00000004 + 0x6c) + 0x28))();
  }
  else {
    thunk_FUN_004a6330();
    thunk_FUN_004a6260();
  }
  if ((DAT_00434a80 == 0) || (DAT_00434a90 != 0)) {
    thunk_FUN_004a6330();
    DAT_00434e34 = 1;
  }
  else {
    thunk_FUN_004a6330();
    thunk_FUN_004a6260();
    DAT_00434e34 = 0;
  }
  FUN_00424e20();
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00405570();
    *DAT_0049aa2c = *DAT_0049aa2c + -2;
  }
  *in_FS_OFFSET = local_28;
  return;
}

