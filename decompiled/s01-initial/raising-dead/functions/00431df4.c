/* Ghidra address: 00431df4; FUN_00431df4 */

void __cdecl FUN_00431df4(int param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_3 == 0) || (param_2 == 0)) {
    param_2 = param_3;
  }
  *(uint *)(param_1 + 0x1c) = param_2;
  *(uint *)(param_1 + 0x20) = param_3;
  if (((param_3 == 0) || (param_4 == 0)) || (param_4 < param_3)) {
    param_4 = param_3;
  }
  *(uint *)(param_1 + 0x24) = param_4;
  return;
}

