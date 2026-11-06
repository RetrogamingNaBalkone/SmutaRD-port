/* Ghidra address: 00409030; FUN_00409030 */

void __cdecl
FUN_00409030(undefined4 param_1,int *param_2,short *param_3,undefined4 param_4,short param_5)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  DAT_004c32ce = param_5;
  DAT_004c32d8 = param_2;
  if ((uint)((uint)(param_2[1] == param_2[4]) == param_2[7]) != param_2[10]) {
    DAT_004cd184 = param_2[2];
    DAT_004c32cc = 0;
    DAT_004c32ca = 0;
    piVar1 = param_2 + 5;
    DAT_004cd188 = DAT_004cd184;
    for (sVar3 = 1; sVar3 < param_5; sVar3 = sVar3 + 1) {
      if (*piVar1 < DAT_004cd184) {
        DAT_004cd184 = param_2[sVar3 * 3 + 2];
        DAT_004c32cc = sVar3;
      }
      if (DAT_004cd188 < *piVar1) {
        DAT_004cd188 = param_2[sVar3 * 3 + 2];
        DAT_004c32ca = sVar3;
      }
      piVar1 = piVar1 + 3;
    }
    DAT_004cd1b4 = param_2[1] * (DAT_0053c914 >> 0xf);
    DAT_004c3378 = (ushort)((param_3[2] & 1U) != 0);
    DAT_004c337a = (ushort)((param_3[2] & 8U) != 0);
    DAT_004c32d0 = *param_3;
    DAT_004c32d4 = FUN_00406c68(param_3);
    iVar2 = DAT_004c32d8[1];
    iVar5 = DAT_004c32d8[3] - *DAT_004c32d8;
    iVar6 = DAT_004c32d8[5] - DAT_004c32d8[2];
    iVar4 = DAT_004c32d8[9] - *DAT_004c32d8;
    iVar7 = DAT_004c32d8[0xb] - DAT_004c32d8[2];
    DAT_004cd1b0 = (iVar5 * iVar7 - iVar6 * iVar4) / (DAT_004c32d0 + -1);
    DAT_004cd190 = (-iVar4 * iVar2 * DAT_0053c918) / DAT_004cd1b0;
    DAT_004cd194 = (iVar7 * iVar2) / DAT_004cd1b0;
    DAT_004cd198 = (iVar4 * DAT_004c32d8[2] - iVar7 * *DAT_004c32d8) / DAT_004cd1b0;
    DAT_004cd19c = (iVar5 * iVar2 * DAT_0053c918) / DAT_004cd1b0;
    DAT_004cd1a0 = (-iVar6 * iVar2) / DAT_004cd1b0;
    DAT_004cd1a4 = (iVar6 * *DAT_004c32d8 - iVar5 * DAT_004c32d8[2]) / DAT_004cd1b0;
    if (DAT_004cd1b4 < 0) {
      iVar2 = (int)DAT_00438ea8 - (int)DAT_0053d6ce;
      DAT_004cd1c0 = -1;
    }
    else {
      iVar2 = (int)DAT_00438eaa - (int)DAT_0053d6ce;
      DAT_004cd1c0 = 1;
    }
    DAT_004cd18c = DAT_004cd1b4 / iVar2;
    if ((DAT_004cd18c < DAT_004cd188) && (DAT_004cd18c != 0)) {
      FUN_00408cf8(0x4c337e,-1);
      if (0 < DAT_004cd1bc) {
        FUN_00408cf8(0x4c517e,1);
        FUN_00408f5c();
        if (DAT_004cd1c0 < 1) {
          if ((int)DAT_004cd1be - (int)DAT_004cd1bc < 0) {
            DAT_004cd1bc = DAT_004cd1bc + (short)((int)DAT_004cd1be - (int)DAT_004cd1bc);
          }
        }
        else if (DAT_004cff10 <= (int)DAT_004cd1be + (int)DAT_004cd1bc) {
          DAT_004cd1bc = ((short)DAT_004cff10 + -1) - DAT_004cd1be;
        }
        if (DAT_00439f58 == 0) {
          FUN_00409828();
        }
        else {
          FUN_00409cb8();
        }
      }
    }
  }
  return;
}

