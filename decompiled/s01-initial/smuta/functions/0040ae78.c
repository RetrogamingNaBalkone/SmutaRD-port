/* Ghidra address: 0040ae78; FUN_0040ae78 */

undefined4 * FUN_0040ae78(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = &PTR_LAB_004355f0;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  FUN_00431b68();
  *(undefined2 *)(in_stack_00000004 + 8) = 0xf;
  *(undefined2 *)(in_stack_00000004 + 4) = 0xf;
  *(undefined2 *)((int)in_stack_00000004 + 0x22) = 0;
  *(undefined2 *)(in_stack_00000004 + 6) = 0;
  *(undefined2 *)((int)in_stack_00000004 + 0x16) = 0;
  *(undefined2 *)(in_stack_00000004 + 5) = 0;
  *(undefined2 *)((int)in_stack_00000004 + 0x12) = 0;
  *(undefined2 *)((int)in_stack_00000004 + 0x1a) = 1;
  *(undefined2 *)((int)in_stack_00000004 + 0xe) = 0;
  *(undefined1 *)((int)in_stack_00000004 + 0x34a) = 1;
  *(undefined1 *)((int)in_stack_00000004 + 0x34b) = 0;
  FUN_0040af18();
  FUN_0042649c();
  DAT_0044f640 = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

