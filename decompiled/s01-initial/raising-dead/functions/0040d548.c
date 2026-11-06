/* Ghidra address: 0040d548; FUN_0040d548 */

undefined4 __cdecl FUN_0040d548(short *param_1,short *param_2)

{
  undefined4 uVar1;
  
  if (((param_1[2] == param_2[2]) && (param_1[1] == param_2[1])) && (*param_1 == *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

