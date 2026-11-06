/* Ghidra address: 00431e28; FUN_00431e28 */

void __cdecl FUN_00431e28(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x14) = param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  if (((param_2 == 0) || (param_3 == 0)) || (param_3 < param_2)) {
    param_3 = param_2;
  }
  *(uint *)(param_1 + 0x18) = param_3;
  return;
}

