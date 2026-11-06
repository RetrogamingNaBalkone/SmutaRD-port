/* Ghidra address: 0042deec; FUN_0042deec */

char * __cdecl FUN_0042deec(char *param_1,char *param_2,ushort param_3)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_0053e2fa;
  }
  uVar2 = 10;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_0043b594;
  }
  pcVar1 = (char *)FUN_0042a41c(param_1,param_2);
  FUN_004335c8((uint)param_3,pcVar1,uVar2);
  FUN_0042a068(param_1,&DAT_0043b598);
  return param_1;
}

