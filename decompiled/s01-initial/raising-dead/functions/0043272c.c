/* Ghidra address: 0043272c; FUN_0043272c */

undefined4 __cdecl FUN_0043272c(byte *param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != (byte *)0x0) && (*param_1 != 0)) && (param_2 != 0)) {
    if (((&DAT_0053e30d)[*param_1] & 4) == 0) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043c270,9,(LPCSTR)param_1,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      return 1;
    }
    if (1 < param_2) {
      iVar1 = MultiByteToWideChar(*(UINT *)PTR_DAT_0043c270,9,(LPCSTR)param_1,2,(LPWSTR)0x0,0);
      if (iVar1 != 0) {
        return 2;
      }
    }
    return 0xffffffff;
  }
  return 0;
}

