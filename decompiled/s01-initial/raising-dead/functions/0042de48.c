/* Ghidra address: 0042de48; thunk_FUN_00430250 */

DWORD __cdecl thunk_FUN_00430250(uint param_1,LONG param_2,int param_3)

{
  DWORD DVar1;
  
  if (param_1 < DAT_0043b4c0) {
    if (param_3 == 0) {
      DVar1 = 0;
    }
    else if (param_3 == 1) {
      DVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        DVar1 = FUN_0043000c(1);
        return DVar1;
      }
      DVar1 = 2;
    }
    (&DAT_0043b4c4)[param_1] = (&DAT_0043b4c4)[param_1] & 0xfffffdff;
    DVar1 = SetFilePointer(*(HANDLE *)(&DAT_0053e22c + param_1 * 4),param_2,(PLONG)0x0,DVar1);
    if (DVar1 == 0xffffffff) {
      FUN_00430070();
    }
  }
  else {
    DVar1 = FUN_0043000c(6);
  }
  return DVar1;
}

