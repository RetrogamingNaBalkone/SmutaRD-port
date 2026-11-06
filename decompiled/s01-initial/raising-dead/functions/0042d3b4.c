/* Ghidra address: 0042d3b4; thunk_FUN_00430180 */

undefined4 __cdecl thunk_FUN_00430180(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00430070();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    DAT_0043c8b4 = 5;
    return 0xffffffff;
  }
  return 0;
}

