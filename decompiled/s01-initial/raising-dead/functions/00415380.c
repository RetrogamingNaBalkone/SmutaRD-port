/* Ghidra address: 00415380; FUN_00415380 */

undefined4 __cdecl FUN_00415380(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int local_54 [6];
  int local_3c;
  short local_1e;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  short local_a;
  undefined4 local_8;
  
  local_8 = 1;
  sVar1 = *(short *)(param_1 + 0x111);
  *(short *)(param_1 + 0x111) = *(short *)(param_1 + 0x111) + 1;
  if (*(short *)(param_1 + 0x113) <= sVar1) {
    *(undefined2 *)(param_1 + 0x111) = 0;
    FUN_0040ffb4(param_1,0x20,0);
    piVar4 = (int *)(param_1 + 0x31);
    piVar5 = local_54;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    local_10 = *(int *)(param_1 + 0x39);
    local_14 = *(int *)(param_1 + 0x31);
    sVar1 = (short)(local_10 / (int)DAT_004f1434[0x3a7]);
    local_a = (short)(local_14 / (int)DAT_004f1434[0x3a7]);
    if (local_a < 0) {
      local_a = 0;
    }
    if (*DAT_004f1434 + -1 < (int)local_a) {
      local_a = *DAT_004f1434 + -1;
    }
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    if (DAT_004f1434[2] + -1 < (int)sVar1) {
      sVar1 = DAT_004f1434[2] + -1;
    }
    local_a = local_a + sVar1 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6);
    local_3c = -((int)DAT_004f1434[0x3a7] >> 2);
    iVar2 = 0;
    do {
      FUN_00417c8c(DAT_004f1434,local_54,0,10000);
      local_18 = local_54[2];
      local_1c = local_54[0];
      sVar1 = (short)(local_54[2] / (int)DAT_004f1434[0x3a7]);
      sVar3 = (short)(local_54[0] / (int)DAT_004f1434[0x3a7]);
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar3) {
        sVar3 = *DAT_004f1434 + -1;
      }
      if (sVar1 < 0) {
        sVar1 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar1) {
        sVar1 = DAT_004f1434[2] + -1;
      }
      sVar3 = sVar3 + sVar1 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6);
    } while ((sVar3 == local_a) && (iVar2 = iVar2 + 1, iVar2 < 1));
    if (sVar3 == local_a) {
      local_8 = 0;
      sVar1 = FUN_00426780(local_54[2] - *(int *)(param_1 + 0x39),
                           local_54[0] - *(int *)(param_1 + 0x31));
      FUN_0040f894(&local_1e,0x168 - sVar1);
      *(short *)(param_1 + 0x3d) = local_1e;
    }
    FUN_0040ffb4(param_1,*(undefined1 *)(param_1 + 0xb9),0);
  }
  *(uint *)(param_1 + 0x23) = *(uint *)(param_1 + 0x23) | 0x10;
  FUN_00410808(param_1);
  return local_8;
}

