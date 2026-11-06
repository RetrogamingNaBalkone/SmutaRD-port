/* Ghidra address: 00424f88; FUN_00424f88 */

void __cdecl FUN_00424f88(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar7 = *(short *)(param_1 + 0x51) - DAT_0053d6f4;
  iVar5 = DAT_0053c910 + iVar7;
  iVar1 = *(short *)(param_1 + 0x55) - DAT_0053d6fc;
  iVar2 = DAT_0053c910 + iVar1;
  local_c = iVar2 * DAT_0053d6f0 - iVar7 * DAT_0053d6ec >> 0xf;
  local_10 = iVar2 * DAT_0053d6f0 - iVar5 * DAT_0053d6ec >> 0xf;
  local_18 = iVar1 * DAT_0053d6f0 - iVar5 * DAT_0053d6ec >> 0xf;
  local_20 = iVar1 * DAT_0053d6f0 - iVar7 * DAT_0053d6ec >> 0xf;
  if ((((DAT_0053d6c4 < local_c) || (DAT_0053d6c4 < local_10)) || (DAT_0053d6c4 < local_18)) ||
     (DAT_0053d6c4 < local_20)) {
    iVar3 = iVar2 * DAT_0053d6ec;
    iVar6 = iVar5 * DAT_0053d6f0;
    iVar5 = iVar5 * DAT_0053d6f0 + iVar1 * DAT_0053d6ec >> 0xf;
    iVar4 = iVar7 * DAT_0053d6f0 + iVar1 * DAT_0053d6ec >> 0xf;
    iVar1 = ((int)*(short *)(param_1 + 0x53) - (int)*(short *)(param_1 + 0x57)) - DAT_0053d6f8;
    iVar7 = iVar7 * DAT_0053d6f0 + iVar2 * DAT_0053d6ec >> 0xf;
    *(int *)(param_1 + 0x19) = iVar7;
    *(int *)(param_1 + 0x1d) = iVar1;
    *(int *)(param_1 + 0x21) = local_c;
    iVar2 = iVar6 + iVar3 >> 0xf;
    *(int *)(param_1 + 0x25) = iVar2;
    *(int *)(param_1 + 0x29) = iVar1;
    *(int *)(param_1 + 0x2d) = local_10;
    *(int *)(param_1 + 0x31) = iVar5;
    *(int *)(param_1 + 0x35) = iVar1;
    *(int *)(param_1 + 0x39) = local_18;
    *(int *)(param_1 + 0x3d) = iVar4;
    *(int *)(param_1 + 0x41) = iVar1;
    *(int *)(param_1 + 0x45) = local_20;
    if (local_c < DAT_0053d6c4) {
      local_c = DAT_0053d6c4;
    }
    if (local_10 < DAT_0053d6c4) {
      local_10 = DAT_0053d6c4;
    }
    if (local_18 < DAT_0053d6c4) {
      local_18 = DAT_0053d6c4;
    }
    if (local_20 < DAT_0053d6c4) {
      local_20 = DAT_0053d6c4;
    }
    iVar7 = ((DAT_0053c914 / local_c) * iVar7 >> 0xf) + (int)DAT_0053d6cc;
    iVar2 = ((DAT_0053c914 / local_10) * iVar2 >> 0xf) + (int)DAT_0053d6cc;
    iVar5 = ((DAT_0053c914 / local_18) * iVar5 >> 0xf) + (int)DAT_0053d6cc;
    iVar3 = ((DAT_0053c914 / local_20) * iVar4 >> 0xf) + (int)DAT_0053d6cc;
    iVar1 = iVar7;
    if (iVar2 < iVar7) {
      iVar1 = iVar2;
    }
    if (iVar5 < iVar1) {
      iVar1 = iVar5;
    }
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    if (iVar7 < iVar2) {
      iVar7 = iVar2;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
    *(short *)(param_1 + 0x4d) = (short)iVar1;
    *(short *)(param_1 + 0x4f) = (short)iVar7;
    *(short *)(param_1 + 0x17) = (short)(local_c + local_10 + local_18 + local_20 >> 2);
    if (*(short *)(param_1 + 0x17) < 0) {
      *(undefined2 *)(param_1 + 0x17) = 0;
    }
  }
  else {
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
    *(undefined2 *)(param_1 + 0x17) = 0;
  }
  return;
}

