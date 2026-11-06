/* Ghidra address: 00407df8; FUN_00407df8 */

void __cdecl
FUN_00407df8(int param_1,int param_2,int param_3,short *param_4,short param_5,short param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  short *psVar7;
  int *local_34;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  short local_14;
  short *local_8;
  
  FUN_0040b700();
  local_8 = *(short **)(param_4 + 7);
  sVar1 = *param_4;
  sVar2 = param_4[1];
  if (param_5 < 1) {
    param_5 = 1;
  }
  if (param_6 < 1) {
    param_6 = 1;
  }
  if (*(int *)(param_1 + 0x32) - param_2 < (int)param_5) {
    param_5 = *(short *)(param_1 + 0x32) - (short)param_2;
  }
  if (*(int *)(param_1 + 0x36) - param_3 < (int)param_6) {
    param_6 = *(short *)(param_1 + 0x36) - (short)param_3;
  }
  sVar3 = param_4[2];
  local_14 = param_6;
  if (sVar1 < param_5) {
    for (local_1a = 0; (int)(uint)local_1a < (int)sVar2; local_1a = local_1a + 1) {
      piVar4 = &DAT_004c2690 + param_3;
      for (; sVar2 <= local_14; local_14 = local_14 + -sVar2) {
        psVar7 = local_8;
        sVar5 = param_5;
        sVar6 = (short)param_2;
        for (local_1c = 0; (int)(uint)local_1c < (int)sVar1; local_1c = local_1c + 1) {
          for (; sVar1 <= sVar5; sVar5 = sVar5 + -sVar1) {
            if ((sVar3 != 8) || (*psVar7 != 0)) {
              *(short *)(*piVar4 + sVar6 * 2) = *psVar7;
            }
            sVar6 = sVar6 + 1;
          }
          sVar5 = sVar5 + param_5;
          psVar7 = psVar7 + 1;
        }
        param_3 = param_3 + 1;
        piVar4 = piVar4 + 1;
      }
      local_14 = local_14 + param_6;
      local_8 = local_8 + sVar1;
    }
  }
  else {
    local_34 = &DAT_004c2690 + param_3;
    for (local_1e = 0; (int)(uint)local_1e < (int)param_6; local_1e = local_1e + 1) {
      for (; local_14 < sVar2; local_14 = local_14 + param_6) {
        local_8 = local_8 + sVar1;
      }
      psVar7 = local_8;
      sVar5 = param_5;
      sVar6 = (short)param_2;
      for (local_20 = 0; (int)(uint)local_20 < (int)param_5; local_20 = local_20 + 1) {
        for (; sVar5 < sVar1; sVar5 = sVar5 + param_5) {
          psVar7 = psVar7 + 1;
        }
        if ((sVar3 != 8) || (*psVar7 != 0)) {
          *(short *)(*local_34 + sVar6 * 2) = *psVar7;
        }
        sVar6 = sVar6 + 1;
        sVar5 = sVar5 + -sVar1;
      }
      local_14 = local_14 + -sVar2;
      local_34 = local_34 + 1;
    }
  }
  FUN_0040b7b4();
  return;
}

