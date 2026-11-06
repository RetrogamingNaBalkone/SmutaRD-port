/* Ghidra address: 00404c88; FUN_00404c88 */

undefined4 * FUN_00404c88(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x434708);
  *in_stack_00000004 = &PTR_FUN_00434748;
  in_stack_00000004[1] = in_stack_00000008;
  puVar1 = DAT_004346f4;
  if ((DAT_004346f4 != (undefined4 *)0x0) && (DAT_004346f4 != (undefined4 *)0x0)) {
    iVar2 = FUN_0042b677();
    *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
    (**(code **)*puVar1)();
  }
  DAT_004346f4 = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_FS_OFFSET = local_28;
  return in_stack_00000004;
}

