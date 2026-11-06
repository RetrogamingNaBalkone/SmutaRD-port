/* Ghidra address: 0042b104; FUN_0042b104 */

void __cdecl
FUN_0042b104(uint *param_1,undefined4 *param_2,uint param_3,undefined *param_4,uint param_5,
            uint param_6,uint param_7,uint param_8,undefined4 param_9,int param_10)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined2 in_FS;
  ULONG_PTR local_44;
  undefined4 local_40;
  uint *local_3c;
  undefined4 local_38;
  uint *local_34;
  uint local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_0042c8f0(0x43a4e4);
  iVar5 = FUN_004010f9();
  *(uint *)(iVar5 + 0x24) = (uint)*(ushort *)((int)param_1 + 6) + (int)param_1;
  iVar5 = FUN_004010f9();
  *(uint *)(iVar5 + 0x20) = param_7;
  iVar5 = FUN_004010f9();
  *(uint *)(iVar5 + 0x1c) = param_8;
  local_2c = param_1;
  uVar4 = (ushort)param_1[1];
  uVar7 = *param_1;
  if ((uVar4 & 2) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1[3];
  }
  if ((uVar4 & 0x30) != 0) {
    local_2c = (uint *)param_1[2];
  }
  local_34 = FUN_0042aceb(uVar7 + 0x46);
  local_34[1] = (uint)param_1;
  local_34[3] = param_6;
  local_34[4] = uVar7;
  *(ushort *)(local_34 + 6) = uVar4;
  *(undefined2 *)((int)local_34 + 0x1a) = (undefined2)local_30;
  local_34[5] = (uint)local_2c;
  local_34[2] = param_3;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[7] = (uint)FUN_0042ad35;
  local_34[0xd] = param_7;
  local_34[0xe] = param_8;
  local_34[8] = (uint)param_4;
  local_34[9] = param_5;
  *(undefined1 *)((int)local_34 + 0x45) = 0;
  *(undefined1 *)(local_34 + 0x11) = 1;
  FUN_00429f54((undefined4 *)((int)local_34 + 0x46),param_2,uVar7);
  iVar5 = FUN_004010f9();
  if ((**(int **)(iVar5 + 0xc) != 0) && (param_10 == 0)) {
    ___lockDebuggerData_qv();
    iVar5 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x30) = 0;
    iVar5 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x2c) = 0;
    iVar5 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x14) = 1;
    iVar5 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x18) = param_9;
    iVar5 = FUN_004010f9();
    *(uint **)(*(int *)(iVar5 + 0x10) + 0x20) = local_34;
    pcVar6 = FUN_0042c92c((int)param_1);
    iVar5 = FUN_004010f9();
    *(char **)(*(int *)(iVar5 + 0x10) + 0x28) = pcVar6;
    iVar5 = FUN_004010f9();
    if ((char)local_34[0x11] == '\0') {
      uVar7 = local_34[0x10];
    }
    else {
      uVar7 = (int)local_34 + 0x46;
    }
    *(uint *)(*(int *)(iVar5 + 0x10) + 0x1c) = uVar7;
    iVar5 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x24) = 0;
    iVar5 = FUN_004010f9();
    pcVar6 = *(char **)(*(int *)(iVar5 + 0x10) + 0x28);
    while ((pcVar6 != (char *)0x0 && (cVar3 = *pcVar6, pcVar6 = pcVar6 + 1, cVar3 != '\0'))) {
      iVar5 = FUN_004010f9();
      piVar1 = (int *)(*(int *)(iVar5 + 0x10) + 0x24);
      *piVar1 = *piVar1 + 1;
    }
    iVar5 = FUN_004010f9();
    (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))();
    ___unlockDebuggerData_qv();
  }
  if ((local_30 & 1) != 0) {
    if (param_4 == (undefined *)0x0) {
      FUN_004362c4(s_cctrAddr_0043a67f,s_XX_CPP_0043a688,0x400);
    }
    local_38 = DAT_0053e154;
    local_18 = 8;
    FUN_0042ae24((int)local_34 + 0x46,param_2,param_4,param_5);
    local_18 = 0;
    DAT_0053e154 = local_38;
  }
  iVar5 = FUN_004010f9();
  local_44 = *(ULONG_PTR *)(iVar5 + 0x24);
  local_40 = param_9;
  local_3c = local_34;
  RaiseException(0xeefface,1,3,&local_44);
  puVar2 = (undefined4 *)segment(in_FS,0);
  *puVar2 = local_28;
  return;
}

