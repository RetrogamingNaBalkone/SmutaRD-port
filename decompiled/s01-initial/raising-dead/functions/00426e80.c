/* Ghidra address: 00426e80; FUN_00426e80 */

undefined4 __cdecl FUN_00426e80(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + param_1[1] * 4);
  if ((uint)param_1[1] < 0x10000) {
    param_1[1] = param_1[1] + 1;
  }
  return uVar1;
}

