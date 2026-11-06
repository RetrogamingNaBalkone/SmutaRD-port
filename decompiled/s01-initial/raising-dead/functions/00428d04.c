/* Ghidra address: 00428d04; FUN_00428d04 */

uint * __cdecl FUN_00428d04(undefined4 param_1,LPCSTR param_2)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  uint unaff_EDI;
  
  iVar2 = thunk_FUN_004302c8(param_2,0x8000,unaff_EDI);
  sVar1 = (short)iVar2;
  if (sVar1 == -1) {
    FUN_0042df90((uint *)s_Error__0043a125);
    FUN_0043665c(1);
  }
  pcVar3 = (char *)FUN_0042fd2c((int)sVar1);
  puVar4 = FUN_00435c48((uint)pcVar3);
  thunk_FUN_0042fa18((int)sVar1,(char *)puVar4,pcVar3);
  thunk_FUN_004301bc((int)sVar1);
  return puVar4;
}

