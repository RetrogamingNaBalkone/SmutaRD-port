/* Ghidra address: 00404620; FUN_00404620 */

void __cdecl FUN_00404620(byte *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  sVar2 = *(short *)(DAT_0053d640 + 0x26);
  *param_2 = 0;
  *param_3 = (int)sVar2;
  for (; (bVar1 = *param_1, bVar1 != 0 && (bVar1 != 0x24)); param_1 = param_1 + 1) {
    if (bVar1 == 10) {
      if (*param_2 < iVar5) {
        *param_2 = iVar5;
      }
      iVar5 = 0;
      *param_3 = *param_3 + (int)sVar2;
    }
    else if (*param_1 != 0xd) {
      iVar3 = FUN_004051e0(DAT_0053d640,*param_1);
      iVar4 = FUN_004051d0();
      iVar5 = iVar5 + iVar3 + iVar4;
    }
  }
  if (*param_2 < iVar5) {
    *param_2 = iVar5;
  }
  return;
}

