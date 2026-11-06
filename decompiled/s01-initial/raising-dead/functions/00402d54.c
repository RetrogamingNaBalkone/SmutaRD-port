/* Ghidra address: 00402d54; FUN_00402d54 */

undefined4 __cdecl FUN_00402d54(LPCSTR param_1)

{
  undefined4 uVar1;
  undefined **local_10;
  short local_c;
  
  FUN_00401350();
  FUN_0042ed78(param_1,(byte *)s__s_SAV_004382ee);
  FUN_0040cef4(&local_10);
  uVar1 = FUN_0040cf40(&local_10,param_1);
  if ((short)uVar1 == 0) {
    uVar1 = 0;
    local_10 = &PTR_FUN_004382f8;
    if (local_c != 0) {
      (*(code *)PTR_FUN_00438300)();
    }
  }
  else {
    uVar1 = 1;
    local_10 = &PTR_FUN_004382f8;
    if (local_c != 0) {
      (*(code *)PTR_FUN_00438300)();
    }
  }
  return uVar1;
}

