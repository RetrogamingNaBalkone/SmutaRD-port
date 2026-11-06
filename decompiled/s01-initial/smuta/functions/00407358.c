/* Ghidra address: 00407358; FUN_00407358 */

bool FUN_00407358(undefined4 param_1,undefined4 param_2,DWORD param_3)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = thunk_FUN_0042e284();
  if ((short)iVar1 < 0) {
    FUN_00427b9f();
  }
  DVar2 = FUN_0042dce8();
  thunk_FUN_0042e20c();
  thunk_FUN_0042da20();
  thunk_FUN_0042e178();
  return DVar2 == param_3;
}

