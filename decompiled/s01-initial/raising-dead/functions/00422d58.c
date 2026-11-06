/* Ghidra address: 00422d58; FUN_00422d58 */

void __cdecl FUN_00422d58(int param_1,undefined4 *param_2)

{
  DAT_00501674 = param_1;
  FUN_00429f54(*(undefined4 **)(param_1 + 4),param_2,0x2000);
  FUN_00429f54((undefined4 *)(param_1 + 8),param_2 + 0x800,0x4000);
  FUN_00429f54((undefined4 *)(param_1 + 0xa008),param_2 + 0x1800,0x10000);
  return;
}

