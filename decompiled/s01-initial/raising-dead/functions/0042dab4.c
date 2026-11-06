/* Ghidra address: 0042dab4; FUN_0042dab4 */

undefined4 __cdecl FUN_0042dab4(int *param_1,LONG param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  iVar1 = FUN_0042d4d4(param_1);
  if (iVar1 == 0) {
    if ((param_3 == 1) && (0 < param_1[2])) {
      iVar1 = FUN_0042da58(param_1);
      param_2 = param_2 - iVar1;
    }
    *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfe5f;
    param_1[2] = 0;
    *param_1 = param_1[1];
    DVar3 = FUN_00430250((int)*(char *)((int)param_1 + 0x16),param_2,param_3);
    if (DVar3 == 0xffffffff) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

