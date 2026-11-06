/* Ghidra address: 004288be; FUN_004288be */

int * FUN_004288be(void)

{
  undefined2 uVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x437670);
  FUN_00428db4();
  *in_stack_00000004 = (int)&PTR_FUN_004376cc;
  in_stack_00000004[1] = 0;
  uVar1 = (**(code **)(*in_stack_00000004 + 4))();
  *(undefined2 *)(in_stack_00000004 + 2) = uVar1;
  FUN_0040a6d8();
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_004283b1();
    *DAT_0049aa2c = *DAT_0049aa2c + -7;
  }
  *(uint **)((int)in_stack_00000004 + 10) = puVar2;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}

