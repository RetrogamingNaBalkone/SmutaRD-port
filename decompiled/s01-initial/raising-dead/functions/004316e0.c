/* Ghidra address: 004316e0; FUN_004316e0 */

uint __cdecl FUN_004316e0(int *param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(ushort *)(param_1 + 0xc) & 3) == 1) {
    if (param_1[2] == 0) {
      (**(code **)(*param_1 + 0x30))();
    }
    if (param_1[4] == 0) {
      FUN_00431e28((int)param_1,param_1[2],param_1[3]);
    }
  }
  if (param_1[4] != 0) {
    if (((uint)param_1[6] <= (uint)param_1[5]) && ((*(ushort *)(param_1 + 0xc) & 3) == 1)) {
      puVar1 = (undefined4 *)param_1[2];
      uVar6 = param_1[3] - (int)puVar1;
      puVar5 = (undefined4 *)FUN_00435154(uVar6 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        return 0xffffffff;
      }
      FUN_00429f54(puVar5,puVar1,uVar6);
      iVar2 = param_1[5];
      iVar3 = param_1[8];
      if (iVar3 != 0) {
        local_10 = iVar3 - (int)puVar1;
        local_c = param_1[7] - (int)puVar1;
        local_14 = param_1[9] - (int)puVar1;
      }
      FUN_00431d8c((int)param_1,(uint)puVar5,(int)puVar5 + uVar6 + 4,0);
      FUN_00431e28((int)param_1,(uint)puVar5,param_1[3]);
      param_1[5] = param_1[5] + (iVar2 - (int)puVar1);
      if (iVar3 != 0) {
        FUN_00431df4((int)param_1,(int)puVar5 + local_c,local_10 + (int)puVar5,
                     local_14 + (int)puVar5);
      }
      FUN_004350fc((int)puVar1);
    }
    if ((uint)param_1[5] < (uint)param_1[6]) {
      if ((uint)param_1[6] <= (uint)param_1[5]) {
        uVar6 = (**(code **)(*param_1 + 0x18))();
        return uVar6;
      }
      pbVar4 = (byte *)param_1[5];
      param_1[5] = param_1[5] + 1;
      *pbVar4 = param_2;
      return (uint)param_2;
    }
  }
  return 0xffffffff;
}

