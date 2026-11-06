/* Ghidra address: 00428f6c; FUN_00428f6c */

void __cdecl
FUN_00428f6c(int *param_1,int param_2,int param_3,short param_4,short param_5,short *param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  short local_16;
  short *local_8;
  
  local_8 = param_6 + 2;
  sVar1 = *param_6;
  sVar2 = param_6[1];
  if (param_4 < 1) {
    param_4 = 1;
  }
  if (param_5 < 1) {
    param_5 = 1;
  }
  if (*(int *)((int)param_1 + 0x32) - param_2 < (int)param_4) {
    param_4 = *(short *)((int)param_1 + 0x32) - (short)param_2;
  }
  if (*(int *)((int)param_1 + 0x36) - param_3 < (int)param_5) {
    param_5 = *(short *)((int)param_1 + 0x36) - (short)param_3;
  }
  local_16 = param_5;
  if (sVar1 < param_4) {
    for (local_18 = 0; (int)(uint)local_18 < (int)sVar2; local_18 = local_18 + 1) {
      for (; sVar2 <= local_16; local_16 = local_16 + -sVar2) {
        psVar4 = local_8;
        sVar3 = param_4;
        for (local_1a = 0; (int)(uint)local_1a < (int)sVar1; local_1a = local_1a + 1) {
          for (; sVar1 <= sVar3; sVar3 = sVar3 + -sVar1) {
            if ((char)*psVar4 != -1) {
              (**(code **)(*param_1 + 4))();
            }
          }
          sVar3 = sVar3 + param_4;
          psVar4 = (short *)((int)psVar4 + 1);
        }
      }
      local_16 = local_16 + param_5;
      local_8 = (short *)((int)local_8 + (int)sVar1);
    }
  }
  else {
    for (local_1c = 0; (int)(uint)local_1c < (int)param_5; local_1c = local_1c + 1) {
      for (; local_16 < sVar2; local_16 = local_16 + param_5) {
        local_8 = (short *)((int)local_8 + (int)sVar1);
      }
      psVar4 = local_8;
      sVar3 = param_4;
      for (local_1e = 0; (int)(uint)local_1e < (int)param_4; local_1e = local_1e + 1) {
        for (; sVar3 < sVar1; sVar3 = sVar3 + param_4) {
          psVar4 = (short *)((int)psVar4 + 1);
        }
        if ((char)*psVar4 != -1) {
          (**(code **)(*param_1 + 4))();
        }
        sVar3 = sVar3 + -sVar1;
      }
      local_16 = local_16 + -sVar2;
    }
  }
  return;
}

