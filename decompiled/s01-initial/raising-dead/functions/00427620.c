/* Ghidra address: 00427620; FUN_00427620 */

void __cdecl FUN_00427620(undefined4 param_1,LPCSTR param_2,char *param_3)

{
  short sVar1;
  int iVar2;
  uint unaff_ESI;
  
  iVar2 = thunk_FUN_004302c8(param_2,0x8000,unaff_ESI);
  sVar1 = (short)iVar2;
  if (sVar1 == -1) {
    FUN_0042df90((uint *)s_Error__0043a110);
  }
  else {
    thunk_FUN_0042fa18((int)sVar1,param_3,(char *)0x300);
    thunk_FUN_004301bc((int)sVar1);
  }
  return;
}

