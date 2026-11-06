/* Ghidra address: 0040d57c; FUN_0040d57c */

undefined4 __cdecl FUN_0040d57c(ushort *param_1,ushort *param_2)

{
  undefined4 uVar1;
  
  if (((param_1[2] < param_2[2]) || (param_1[1] < param_2[1])) || (*param_1 < *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

