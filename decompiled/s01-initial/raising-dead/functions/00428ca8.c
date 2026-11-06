/* Ghidra address: 00428ca8; FUN_00428ca8 */

void __cdecl FUN_00428ca8(undefined4 param_1,short *param_2,LPCSTR param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = thunk_FUN_004302c8(param_3,0x8101,0x80);
  sVar1 = (short)iVar2;
  if (sVar1 == -1) {
    FUN_0042df90((uint *)s_Error__0043a11e);
  }
  else {
    thunk_FUN_0042fc00((int)sVar1,(char *)param_2,(char *)((int)*param_2 * (int)param_2[1] + 4));
    thunk_FUN_004301bc((int)sVar1);
  }
  return;
}

