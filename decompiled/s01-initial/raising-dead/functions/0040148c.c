/* Ghidra address: 0040148c; FUN_0040148c */

void __stdcall FUN_0040148c(void)

{
  byte *pbVar1;
  
  FUN_004274c0(DAT_0053d640,0,0,*(int *)(DAT_0053d640 + 0x32),*(int *)(DAT_0053d640 + 0x36));
  pbVar1 = FUN_00416034(s_GAMEP1_00438274);
  FUN_00429f54((undefined4 *)&DAT_0043d608,(undefined4 *)pbVar1,0x300);
  FUN_00422ab8(DAT_0043da10,&DAT_0043d608);
  DAT_0043da48 = FUN_0041606c(&DAT_0043827b);
  FUN_00401468();
  return;
}

