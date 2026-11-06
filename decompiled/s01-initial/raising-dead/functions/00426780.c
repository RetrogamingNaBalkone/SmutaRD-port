/* Ghidra address: 00426780; FUN_00426780 */

short __cdecl FUN_00426780(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004333f4(param_1);
  iVar3 = FUN_004333f4(param_2);
  if (iVar3 < iVar2) {
    sVar1 = (&DAT_0053d564)[(iVar3 * 100) / iVar2];
    if ((0 < param_1) && (-1 < param_2)) {
      return sVar1;
    }
    if ((param_1 < 0) && (-1 < param_2)) {
      return 0xb4 - sVar1;
    }
    if ((0 < param_1) && (param_2 < 0)) {
      return 0x168 - sVar1;
    }
    if ((param_1 < 0) && (param_2 < 0)) {
      return sVar1 + 0xb4;
    }
  }
  else {
    if (iVar3 == 0) {
      return 0;
    }
    sVar1 = (&DAT_0053d564)[(iVar2 * 100) / iVar3];
    if ((0 < param_2) && (-1 < param_1)) {
      return 0x5a - sVar1;
    }
    if ((param_2 < 0) && (-1 < param_1)) {
      return sVar1 + 0x10e;
    }
    if ((0 < param_2) && (param_1 < 0)) {
      return sVar1 + 0x5a;
    }
    if ((param_2 < 0) && (param_1 < 0)) {
      return 0x10e - sVar1;
    }
  }
  return 0;
}

