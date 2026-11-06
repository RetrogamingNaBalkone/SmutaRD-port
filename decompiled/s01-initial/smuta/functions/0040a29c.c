/* Ghidra address: 0040a29c; FUN_0040a29c */

/* WARNING: Removing unreachable block (ram,0x0040a464) */

uint * FUN_0040a29c(void)

{
  int iVar1;
  LPVOID pvVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000008;
  int local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x43541c);
  FUN_004096a4();
  FUN_0042dce8();
  pvVar2 = FUN_00410304();
  FUN_0042dce8();
  FUN_0040978c();
  thunk_FUN_0042e178();
  iVar8 = *(int *)((int)pvVar2 + 0x12);
  iVar1 = *(int *)((int)pvVar2 + 0x16);
  puVar3 = FUN_00410304();
  *puVar3 = *(uint *)((int)pvVar2 + 0x12);
  puVar3[1] = *(uint *)((int)pvVar2 + 0x16);
  puVar3[2] = iVar8 * iVar1;
  puVar3[3] = (uint)(puVar3 + 4);
  uVar5 = *puVar3 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  if (uVar5 == 0) {
    uVar5 = *puVar3;
  }
  else {
    uVar5 = *puVar3;
    if ((int)uVar5 < 0) {
      uVar5 = uVar5 + 3;
    }
    uVar5 = ((int)uVar5 >> 2) * 4 + 4;
  }
  local_38 = (undefined1 *)((puVar3[1] - 1) * *puVar3 + puVar3[3]);
  local_3c = (undefined1 *)(*(int *)((int)pvVar2 + 10) + (int)pvVar2);
  for (local_40 = 0; local_40 < (int)puVar3[1]; local_40 = local_40 + 1) {
    puVar7 = local_3c;
    puVar6 = local_38;
    for (iVar8 = 0; iVar8 < (int)*puVar3; iVar8 = iVar8 + 1) {
      *puVar6 = *puVar7;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_3c = local_3c + uVar5;
    local_38 = local_38 + -*puVar3;
  }
  local_40 = 0;
  puVar7 = (undefined1 *)(in_stack_00000008 + 2);
  pbVar4 = (byte *)((int)pvVar2 + 0x36);
  do {
    if ((*pbVar4 == 0 && pbVar4[1] == 0) && pbVar4[2] == 0) {
      *puVar7 = 0;
      puVar7[-1] = 0;
      puVar7[-2] = 0;
    }
    else {
      *puVar7 = (char)((int)(uint)*pbVar4 >> 2);
      puVar7[-1] = (char)((int)(uint)pbVar4[1] >> 2);
      puVar7[-2] = (char)((int)(uint)pbVar4[2] >> 2);
    }
    local_40 = local_40 + 1;
    puVar7 = puVar7 + 3;
    pbVar4 = pbVar4 + 4;
  } while (local_40 < 0x100);
  FUN_0041034c();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return puVar3;
}

