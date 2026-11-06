/* Ghidra address: 00402c40; FUN_00402c40 */

void __stdcall FUN_00402c40(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x438256);
  FUN_004227dc(DAT_0043da10,3);
  FUN_0042704c(DAT_0053d630,3);
  if (DAT_0053d640 != (int *)0x0) {
    (**(code **)(*DAT_0053d640 + 0x24))();
  }
  *in_FS_OFFSET = local_28;
  return;
}

