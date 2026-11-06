/* Ghidra address: 00404410; FUN_00404410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00404410(void)

{
  undefined4 *in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  FUN_00403fc8();
  *in_stack_00000004 = &PTR_FUN_0043475c;
  FUN_004288be();
  DAT_00434228 = in_stack_0000000c;
  _DAT_00443c40 = in_stack_0000000c;
  DAT_0043422c = in_stack_00000010;
  DAT_004346f4 = 0;
  in_stack_00000004[0x17] = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x82) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x8e) = 0;
  in_stack_00000004[0x19] = 1;
  in_stack_00000004[0x1a] = 0;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

