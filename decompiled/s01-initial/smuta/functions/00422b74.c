/* Ghidra address: 00422b74; FUN_00422b74 */

uint FUN_00422b74(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  uint in_stack_00000004;
  undefined4 local_3c;
  
  FUN_0042b4b4(0x436500);
  FUN_0041eb44();
  *(undefined ***)(in_stack_00000004 + 0x14) = &PTR_FUN_0043686c;
  *(undefined2 *)(in_stack_00000004 + 0x92) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xfc) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xfa) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x16a) = 1;
  *(undefined4 *)(in_stack_00000004 + 0xf4) = 0;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_00436850;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x114) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_00436818;
    puVar1[0xf] = 0;
    *(undefined2 *)(puVar1 + 0x11) = 0;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x118) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367fc;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x11c) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367e0;
    puVar1[0xe] = 0;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x120) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367c4;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x124) = puVar1;
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0041dae0();
    puVar1[5] = (uint)&PTR_LAB_00436834;
    puVar1[0xd] = in_stack_00000004;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_LAB_004367a8;
    puVar1[0xe] = 1;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -4;
  }
  *(uint **)(in_stack_00000004 + 0x128) = puVar1;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = *(undefined4 *)(in_stack_00000004 + 0x114);
  *(undefined4 *)(in_stack_00000004 + 0x50) = 0xee;
  DAT_0043649e = 0;
  *(undefined1 *)(in_stack_00000004 + 0xfe) = 0;
  DAT_0043637c = 0;
  DAT_00436378 = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_3c;
  return in_stack_00000004;
}

