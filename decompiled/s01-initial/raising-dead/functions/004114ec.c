/* Ghidra address: 004114ec; FUN_004114ec */

int __cdecl FUN_004114ec(int param_1,int param_2,undefined2 param_3,undefined4 *param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int local_38 [3];
  undefined2 local_2c;
  undefined4 local_20;
  
  piVar6 = (int *)(param_1 + 0x31);
  piVar8 = local_38;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  local_20 = 0xffffff9c;
  local_2c = param_3;
  sVar5 = 0;
  do {
    iVar3 = FUN_00416644(DAT_004f1434,local_38,0,0);
    if (param_1 != iVar3) {
      if (*(short *)(iVar3 + 0x18) == param_2) {
        puVar7 = (undefined4 *)(iVar3 + 0x31);
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_4 = *puVar7;
          puVar7 = puVar7 + 1;
          param_4 = param_4 + 1;
        }
        return iVar3;
      }
      sVar1 = *(short *)(param_1 + 0x35);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
      iVar3 = FUN_00416644(DAT_004f1434,local_38,1,0);
      sVar1 = *(short *)(param_1 + 0x35);
      if ((((*(ushort *)(iVar3 + 0x1b) & 0x10) == 0) ||
          (-(int)*(short *)(iVar3 + 0x1f) == (int)sVar1 ||
           -(int)sVar1 < (int)*(short *)(iVar3 + 0x1f))) ||
         (iVar4 = *(short *)(iVar3 + 0x1f) + 20000, -iVar4 != (int)sVar1 && iVar4 <= -(int)sVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) && ((*(ushort *)(iVar3 + 0x1b) & 8) == 0)) {
        return 0;
      }
    }
    sVar5 = sVar5 + 1;
    if (4999 < sVar5) {
      return 0;
    }
  } while( true );
}

