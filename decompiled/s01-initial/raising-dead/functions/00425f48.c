/* Ghidra address: 00425f48; FUN_00425f48 */

void __cdecl FUN_00425f48(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_18;
  
  iVar8 = *(short *)(param_1 + 0x57) - DAT_0053d6f4;
  iVar5 = *(short *)(param_1 + 0x51) - DAT_0053d6f4;
  iVar3 = *(short *)(param_1 + 0x5b) - DAT_0053d6fc;
  iVar6 = *(short *)(param_1 + 0x55) - DAT_0053d6fc;
  iVar7 = iVar6 * DAT_0053d6f0;
  iVar2 = iVar5 * DAT_0053d6ec;
  local_18 = iVar3 * DAT_0053d6f0 - iVar8 * DAT_0053d6ec >> 0xf;
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
  iVar2 = iVar7 - iVar2 >> 0xf;
  if ((DAT_0053d6c4 < iVar2) || (DAT_0053d6c4 < local_18)) {
    iVar5 = iVar5 * DAT_0053d6f0;
    iVar6 = iVar6 * DAT_0053d6ec;
    iVar3 = iVar3 * DAT_0053d6ec;
    iVar8 = iVar8 * DAT_0053d6f0;
    *(undefined2 *)(param_1 + 0x4d) = 0;
    iVar3 = iVar8 + iVar3 >> 0xf;
    *(short *)(param_1 + 0x4f) = **(short **)(param_1 + 0x19) + -1;
    iVar6 = iVar5 + iVar6 >> 0xf;
    if (iVar2 < DAT_0053d6c4) {
      iVar2 = ((DAT_0053d6c4 - iVar2) * 0x10000) / (local_18 - iVar2);
      iVar6 = iVar6 + ((iVar3 - iVar6) * iVar2 >> 0x10);
      *(short *)(param_1 + 0x4d) = (short)((uint)(*(short *)(param_1 + 0x4f) * iVar2) >> 0x10);
      iVar2 = DAT_0053d6c4;
    }
    else if (local_18 < DAT_0053d6c4) {
      iVar5 = ((DAT_0053d6c4 - iVar2) * 0x10000) / (local_18 - iVar2);
      iVar3 = ((iVar3 - iVar6) * iVar5 >> 0x10) + iVar6;
      *(short *)(param_1 + 0x4f) = (short)((uint)(*(short *)(param_1 + 0x4f) * iVar5) >> 0x10);
      local_18 = DAT_0053d6c4;
    }
    iVar5 = DAT_0053c914 / iVar2;
    iVar7 = DAT_0053c914 / local_18;
    iVar6 = (iVar5 * iVar6 >> 0xf) + (int)DAT_0053d6cc;
    iVar3 = (iVar7 * iVar3 >> 0xf) + (int)DAT_0053d6cc;
    if (iVar3 < iVar6) {
      if ((DAT_0053d6d8 < iVar3) || (iVar6 < DAT_0053d6d0)) {
        *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
        *(undefined2 *)(param_1 + 0x17) = 0;
      }
    }
    else if ((DAT_0053d6d8 < iVar6) || (iVar3 < DAT_0053d6d0)) {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
      *(undefined2 *)(param_1 + 0x17) = 0;
    }
    if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
      iVar8 = *(short *)(param_1 + 0x53) - DAT_0053d6f8;
      iVar4 = *(short *)(param_1 + 0x59) - DAT_0053d6f8;
      if (*(short *)(param_1 + 0x5d) == 1) {
        *(int *)(param_1 + 0x41) = iVar3;
        *(int *)(param_1 + 0x1d) = iVar3;
        *(int *)(param_1 + 0x35) = iVar6;
        *(int *)(param_1 + 0x29) = iVar6;
        *(int *)(param_1 + 0x21) = (iVar7 * iVar8 >> 0xf) + (int)DAT_0053d6ce;
        *(int *)(param_1 + 0x45) = (iVar7 * iVar4 >> 0xf) + (int)DAT_0053d6ce;
        *(int *)(param_1 + 0x2d) = (iVar5 * iVar8 >> 0xf) + (int)DAT_0053d6ce;
        *(int *)(param_1 + 0x39) = (iVar5 * iVar4 >> 0xf) + (int)DAT_0053d6ce;
      }
      else {
        *(int *)(param_1 + 0x41) = iVar6;
        *(int *)(param_1 + 0x1d) = iVar6;
        *(int *)(param_1 + 0x35) = iVar3;
        *(int *)(param_1 + 0x29) = iVar3;
        *(int *)(param_1 + 0x21) = (iVar5 * iVar8 >> 0xf) + (int)DAT_0053d6ce;
        *(int *)(param_1 + 0x45) = (iVar5 * iVar4 >> 0xf) + (int)DAT_0053d6ce;
        *(int *)(param_1 + 0x2d) = (iVar7 * iVar8 >> 0xf) + (int)DAT_0053d6ce;
        *(int *)(param_1 + 0x39) = (iVar7 * iVar4 >> 0xf) + (int)DAT_0053d6ce;
      }
      iVar6 = iVar2 + -0xfa;
      if (iVar2 + -0xfa < DAT_0053d6c4) {
        iVar6 = DAT_0053d6c4;
      }
      local_18 = local_18 + -0xfa;
      if (local_18 < DAT_0053d6c4) {
        local_18 = DAT_0053d6c4;
      }
      *(int *)(param_1 + 0x49) = iVar6;
      *(int *)(param_1 + 0x25) = iVar6;
      *(int *)(param_1 + 0x3d) = local_18;
      *(int *)(param_1 + 0x31) = local_18;
      sVar1 = (short)(local_18 + iVar6 >> 1) - (DAT_0053c910 >> 2);
      *(short *)(param_1 + 0x17) = sVar1;
      if (sVar1 < 0) {
        *(undefined2 *)(param_1 + 0x17) = 0;
      }
    }
  }
  else {
    *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
    *(undefined2 *)(param_1 + 0x17) = 0;
  }
  return;
}

