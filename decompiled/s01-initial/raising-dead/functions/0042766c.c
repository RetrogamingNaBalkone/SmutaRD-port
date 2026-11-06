/* Ghidra address: 0042766c; FUN_0042766c */

void __cdecl FUN_0042766c(undefined4 param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = thunk_FUN_004302c8(param_2,0x8101,0x80);
  if ((short)iVar1 == -1) {
    FUN_0042df90((uint *)s_Error__0043a117);
    return;
  }
  thunk_FUN_004301bc((int)(short)iVar1);
  return;
}

