/* Ghidra address: 0040e220; FUN_0040e220 */

undefined4 * __cdecl FUN_0040e220(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar1 = FUN_00435154(param_2 * 0x14);
    param_1[2] = uVar1;
  }
  return param_1;
}

