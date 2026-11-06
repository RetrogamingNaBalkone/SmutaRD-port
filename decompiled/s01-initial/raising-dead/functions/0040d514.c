/* Ghidra address: 0040d514; FUN_0040d514 */

undefined4 __cdecl FUN_0040d514(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (((param_1[2] == param_2[2]) && (param_1[1] == param_2[1])) && (*param_1 == *param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

