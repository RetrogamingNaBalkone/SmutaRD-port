/* Ghidra address: 0040d5e4; FUN_0040d5e4 */

undefined4 __cdecl FUN_0040d5e4(ushort *param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if (((param_2[2] < param_1[2]) && (param_2[1] < param_1[1])) && (*param_2 < *param_1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

