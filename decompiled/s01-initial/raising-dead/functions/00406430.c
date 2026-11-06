/* Ghidra address: 00406430; FUN_00406430 */

void __cdecl FUN_00406430(undefined4 param_1,short *param_2,int param_3,int param_4,uint param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  short *local_20;
  short *local_1c;
  int local_18;
  
  sVar1 = *param_2;
  uVar7 = param_5 & 0xff;
  iVar3 = *(int *)(DAT_0043faf4 + 0x1c + uVar7 * 0x14);
  iVar4 = *(int *)(DAT_0043faf4 + 0x20 + uVar7 * 0x14);
  sVar2 = **(short **)(DAT_0043faf4 + 4);
  local_1c = (short *)(*(int *)(param_2 + 7) + param_4 * sVar1 * 2 + param_3 * 2);
  local_20 = (short *)(*(int *)(DAT_0043faf4 + 0x18 + uVar7 * 0x14) * (int)sVar2 * 2 +
                       *(int *)(*(int *)(DAT_0043faf4 + 4) + 0xe) +
                      *(int *)(DAT_0043faf4 + 0x14 + uVar7 * 0x14) * 2);
  local_18 = 0;
  if (0 < iVar4) {
    do {
      iVar8 = 0;
      psVar5 = local_20;
      psVar6 = local_1c;
      if (0 < iVar3) {
        do {
          if (*psVar5 != DAT_004c3294) {
            *psVar6 = *psVar5;
          }
          iVar8 = iVar8 + 1;
          psVar6 = psVar6 + 1;
          psVar5 = psVar5 + 1;
        } while (iVar8 < iVar3);
      }
      local_1c = local_1c + sVar1;
      local_20 = local_20 + sVar2;
      local_18 = local_18 + 1;
    } while (local_18 < iVar4);
  }
  return;
}

