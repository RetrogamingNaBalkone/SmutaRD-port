/* Ghidra address: 00405570; FUN_00405570 */

undefined4 * FUN_00405570(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  
  FUN_00404c88();
  *in_stack_00000004 = &PTR_FUN_00434dec;
  FUN_00409a20();
  FUN_00424b24();
  FUN_00404bb8();
  in_stack_00000004[3] = in_stack_0000000c;
  if (in_stack_0000000c != 0) {
    FUN_0040ff18();
  }
  FUN_004281c6();
  thunk_FUN_004a6160();
  FUN_00406a20();
  FUN_00409a38();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

