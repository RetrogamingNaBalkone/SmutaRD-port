/* Ghidra address: 00415220; FUN_00415220 */

bool __cdecl FUN_00415220(int param_1)

{
  short local_a;
  short local_8;
  short local_6;
  
  local_6 = 0;
  local_8 = 0;
  FUN_00415160(&local_a,param_1,*(int *)(DAT_004f1434 + 0x754));
  local_6 = local_a;
  FUN_0040f8c4(&local_8,local_a - *(short *)(param_1 + 0x3d));
  if (0xb4 < local_8) {
    FUN_0040f8c4(&local_8,0x168 - local_8);
  }
  if (local_8 < 0x17) {
    *(short *)(param_1 + 0x3d) = local_6;
  }
  return local_8 < 0x17;
}

