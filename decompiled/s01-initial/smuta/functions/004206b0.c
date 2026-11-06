/* Ghidra address: 004206b0; FUN_004206b0 */

void FUN_004206b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5
                 ,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_3c [6];
  int local_24;
  int local_8;
  
  iVar2 = CONCAT31((int3)((uint)param_1 >> 8),*(char *)(param_4 + 0x12d));
  if (*(char *)(param_4 + 0x12d) == '\x01') {
    if ((*param_5 & 0x800) != 0) {
      *(undefined1 *)(param_4 + 0x12d) = 2;
    }
    *param_5 = 0;
  }
  else if (*(int *)(param_4 + 0x133) == 0) {
    *param_5 = *param_5 | 0x800;
    uVar3 = 0;
    if ((*param_5 & 0x800) != 0) {
      puVar4 = (undefined4 *)(param_4 + 0x30);
      puVar5 = local_3c;
      for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_24 = -(int)*(short *)(DAT_0048aab4 + 0x74e);
      iVar1 = FUN_00411480();
      iVar2 = 0;
      uVar3 = extraout_ECX;
      if (iVar1 != 0) {
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x20))();
        uVar3 = extraout_ECX_00;
      }
      *param_5 = *param_5 & 0xfffff7ff;
    }
    if ((*param_5 & 0x200) != 0) {
      *param_5 = *param_5 & 0xfffffdff;
      iVar2 = (int)*(short *)(param_4 + 0x118);
      if ((*(int *)(param_4 + 200 + iVar2 * 4) != 0) &&
         (*(short *)(param_4 + 0x104 + iVar2 * 2) != 0)) {
        uVar3 = *(undefined4 *)(param_4 + 200 + *(short *)(param_4 + 0x118) * 4);
        iVar2 = FUN_00421c94();
        if ((short)iVar2 != 0) {
          local_8 = *(int *)(param_4 + 200 + *(short *)(param_4 + 0x118) * 4);
          FUN_0040a7fc();
          iVar2 = FUN_0040a7a4(*(undefined4 *)(local_8 + 0x6c),extraout_EDX,local_8,
                               *(undefined4 *)(local_8 + 0x6c),0);
          uVar3 = extraout_ECX_01;
        }
      }
    }
    if (((*param_5 & 0x40000) != 0) &&
       (*param_5 = *param_5 & 0xfffbffff, *(short *)(param_4 + 0x7e) != 0)) {
      FUN_0040a7a4(iVar2,*(undefined4 *)(param_4 + 0xc4),uVar3,*(undefined4 *)(param_4 + 0xc4),0);
      if (*(short *)(param_6 + 0x18) == 8) {
        FUN_00420890();
      }
      else {
        FUN_00420890();
      }
    }
    *(uint *)(param_4 + 0x22) = *(uint *)(param_4 + 0x22) | *param_5;
  }
  else {
    *param_5 = 0;
  }
  return;
}

