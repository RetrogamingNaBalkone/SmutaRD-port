/* Ghidra address: 004152a4; FUN_004152a4 */

void __cdecl FUN_004152a4(int param_1,short param_2)

{
  short local_6;
  
  FUN_0040f894(&local_6,*(short *)(param_1 + 0x3d) - param_2);
  if (local_6 < *(short *)(param_1 + 0x3f)) {
    *(short *)(param_1 + 0x3d) = param_2;
  }
  else if (local_6 < 0xb5) {
    *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) | 8;
  }
  else {
    *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) | 4;
  }
  return;
}

