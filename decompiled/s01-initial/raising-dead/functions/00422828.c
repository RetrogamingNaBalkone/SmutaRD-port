/* Ghidra address: 00422828; FUN_00422828 */

void __cdecl FUN_00422828(int param_1,byte *param_2,ushort *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ushort local_624 [768];
  undefined1 *local_24;
  ushort *local_20;
  ushort *local_1c;
  byte *local_18;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c [3];
  ushort local_6;
  
  FUN_00435394((int *)local_624,6,0x100,1,FUN_00422de4);
  FUN_0042650c((int)local_624,(int)param_2);
  DAT_00501674 = param_1;
  sVar6 = 0;
  do {
    *(char *)(*(int *)(param_1 + 4) + (int)sVar6) = (char)sVar6;
    sVar6 = sVar6 + 1;
  } while (sVar6 < 0x100);
  uVar7 = 0;
  do {
    sVar6 = 1;
    do {
      iVar2 = sVar6 * param_4;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      local_6 = (ushort)(iVar2 >> 5);
      if (uVar7 < 0x100) {
        uVar4 = (uint)uVar7;
      }
      else {
        uVar4 = 0xff;
      }
      local_14 = local_624[uVar4 * 3];
      local_12 = local_624[uVar4 * 3 + 1];
      local_10 = local_624[uVar4 * 3 + 2];
      local_e = uVar7;
      FUN_0040d6c8(local_c,&local_14,100 - local_6,param_3,local_6);
      sVar1 = FUN_00426548(local_624,local_c);
      *(char *)(*(int *)(param_1 + 4) + sVar6 * 0x100 + (int)(short)uVar7) = (char)sVar1;
      sVar6 = sVar6 + 1;
    } while (sVar6 < 0x20);
    uVar7 = uVar7 + 1;
  } while ((short)uVar7 < 0x100);
  local_18 = param_2;
  sVar6 = 0;
  local_20 = (ushort *)(param_1 + 8);
  do {
    sVar1 = 0;
    local_1c = local_20;
    pbVar3 = param_2;
    do {
      iVar2 = (0x20 - sVar6) * (uint)*pbVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      iVar8 = (0x20 - sVar6) * (uint)pbVar3[1];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
      }
      iVar9 = (0x20 - sVar6) * (uint)pbVar3[2];
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
      }
      sVar1 = sVar1 + 1;
      pbVar3 = pbVar3 + 3;
      *local_1c = (ushort)((iVar2 >> 6) << 10) | (ushort)((iVar8 >> 6) << 5) | (ushort)(iVar9 >> 6);
      local_1c = local_1c + 1;
    } while (sVar1 < 0x100);
    sVar6 = sVar6 + 1;
    local_20 = local_20 + 0x100;
  } while (sVar6 < 0x20);
  sVar6 = 0;
  local_24 = (undefined1 *)(param_1 + 0x4008);
  do {
    sVar1 = 0;
    pbVar3 = param_2;
    puVar5 = local_24;
    do {
      iVar2 = (0x20 - sVar6) * (uint)*pbVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      *puVar5 = (char)((iVar2 >> 5) << 2);
      iVar2 = (0x20 - sVar6) * (uint)pbVar3[1];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      puVar5[1] = (char)((iVar2 >> 5) << 2);
      iVar2 = (0x20 - sVar6) * (uint)pbVar3[2];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      sVar1 = sVar1 + 1;
      pbVar3 = pbVar3 + 3;
      puVar5[2] = (char)((iVar2 >> 5) << 2);
      puVar5 = puVar5 + 3;
    } while (sVar1 < 0x100);
    sVar6 = sVar6 + 1;
    local_24 = local_24 + 0x300;
  } while (sVar6 < 0x20);
  FUN_0043526c((int)local_624,6,0x100,1,FUN_00422dfc);
  return;
}

