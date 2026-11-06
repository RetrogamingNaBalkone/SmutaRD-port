/* Ghidra address: 00422540; FUN_00422540 */

void __cdecl FUN_00422540(int param_1,short param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439f3c);
  if (*(short *)(param_1 + 0x4b72) == 0) {
    if (param_2 == 0) {
      FUN_004274c0(DAT_0053d704,DAT_0053d6d0,DAT_0053d6d4,DAT_0053d6d8,DAT_0053d6dc + 1);
      *(undefined2 *)(DAT_0053d704 + 0x10) = 0;
      FUN_004201c8();
    }
  }
  else if (DAT_004f4e94 == 0) {
    FUN_0041a7ec();
  }
  else {
    FUN_0041d2ac();
  }
  FUN_0041fe20();
  FUN_004299e0(*(int *)(param_1 + 0x712),3);
  *in_FS_OFFSET = local_28;
  return;
}

