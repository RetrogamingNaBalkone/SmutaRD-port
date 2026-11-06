/* Ghidra address: 00432dce; FUN_00432dce */

uint FUN_00432dce(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if ((param_5 == 0) && ((param_2 == 0 || (param_4 == 0)))) {
    uVar2 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_4);
  }
  else {
    iVar1 = 0x40;
    uVar3 = 0;
    uVar2 = 0;
    do {
      bVar4 = param_1 < 0;
      param_1 = param_1 * 2;
      bVar5 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar4;
      bVar4 = (int)uVar2 < 0;
      uVar2 = uVar2 << 1 | (uint)bVar5;
      uVar3 = uVar3 << 1 | (uint)bVar4;
      if ((param_5 <= uVar3) && ((param_5 < uVar3 || (param_4 <= uVar2)))) {
        bVar4 = uVar2 < param_4;
        uVar2 = uVar2 - param_4;
        uVar3 = (uVar3 - param_5) - (uint)bVar4;
        param_1 = param_1 + 1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar2;
}

