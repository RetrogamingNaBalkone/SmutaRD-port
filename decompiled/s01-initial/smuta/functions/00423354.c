/* Ghidra address: 00423354; FUN_00423354 */

void FUN_00423354(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined2 param_5)

{
  undefined2 local_6;
  
  FUN_0041da64();
  local_6 = (short)((uint)param_3 >> 0x10);
  if (local_6 < *(short *)(param_4 + 0x3e)) {
    *(undefined2 *)(param_4 + 0x3c) = param_5;
  }
  else if (local_6 < 0xb5) {
    *(uint *)(param_4 + 0x22) = *(uint *)(param_4 + 0x22) | 8;
  }
  else {
    *(uint *)(param_4 + 0x22) = *(uint *)(param_4 + 0x22) | 4;
  }
  return;
}

