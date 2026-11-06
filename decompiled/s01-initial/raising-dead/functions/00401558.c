/* Ghidra address: 00401558; FUN_00401558 */

void __stdcall FUN_00401558(void)

{
  FUN_0041606c(s_WAITMSG_SPR_004382af);
  FUN_004274c0((int)DAT_0053d640,0,0,*(int *)((int)DAT_0053d640 + 0x32),
               *(int *)((int)DAT_0053d640 + 0x36));
  FUN_0040bbd8();
  FUN_00433130();
  FUN_00433130();
  (**(code **)(*DAT_0053d640 + 0x40))();
  FUN_00402fe4();
  FUN_00426ff4(DAT_0053d630);
  return;
}

