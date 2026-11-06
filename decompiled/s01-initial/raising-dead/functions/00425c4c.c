/* Ghidra address: 00425c4c; FUN_00425c4c */

void __cdecl FUN_00425c4c(int param_1)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_10;
  
  iVar7 = *(short *)(param_1 + 0x5b) - DAT_0053d6f4;
  iVar6 = *(short *)(param_1 + 0x55) - DAT_0053d6f4;
  iVar4 = *(short *)(param_1 + 0x5f) - DAT_0053d6fc;
  iVar8 = *(short *)(param_1 + 0x59) - DAT_0053d6fc;
  iVar9 = iVar8 * DAT_0053d6f0;
  iVar3 = iVar6 * DAT_0053d6ec;
  local_10 = iVar4 * DAT_0053d6f0 - iVar7 * DAT_0053d6ec >> 0xf;
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
  iVar3 = iVar9 - iVar3 >> 0xf;
  if ((DAT_0053d6c4 < iVar3) || (DAT_0053d6c4 < local_10)) {
    iVar7 = iVar7 * DAT_0053d6f0;
    iVar8 = iVar8 * DAT_0053d6ec;
    iVar4 = iVar4 * DAT_0053d6ec;
    iVar6 = iVar6 * DAT_0053d6f0;
    iVar9 = *(short *)(param_1 + 0x57) - DAT_0053d6f8;
    iVar5 = *(short *)(param_1 + 0x5d) - DAT_0053d6f8;
    *(undefined2 *)(param_1 + 0x51) = 0;
    iVar8 = iVar6 + iVar8 >> 0xf;
    *(short *)(param_1 + 0x53) = **(short **)(param_1 + 0x19) + -1;
    iVar4 = iVar7 + iVar4 >> 0xf;
    if (iVar3 < DAT_0053d6c4) {
      iVar3 = ((DAT_0053d6c4 - iVar3) * 0x10000) / (local_10 - iVar3);
      iVar8 = iVar8 + ((iVar4 - iVar8) * iVar3 >> 0x10);
      *(short *)(param_1 + 0x51) = (short)((uint)(*(short *)(param_1 + 0x53) * iVar3) >> 0x10);
      iVar3 = DAT_0053d6c4;
    }
    else if (local_10 < DAT_0053d6c4) {
      iVar6 = ((DAT_0053d6c4 - iVar3) * 0x10000) / (local_10 - iVar3);
      iVar4 = ((iVar4 - iVar8) * iVar6 >> 0x10) + iVar8;
      *(short *)(param_1 + 0x53) = (short)((uint)(*(short *)(param_1 + 0x53) * iVar6) >> 0x10);
      local_10 = DAT_0053d6c4;
    }
    iVar6 = DAT_0053c914 / iVar3;
    iVar7 = DAT_0053c914 / local_10;
    iVar8 = (iVar6 * iVar8 >> 0xf) + (int)DAT_0053d6cc;
    iVar4 = (iVar7 * iVar4 >> 0xf) + (int)DAT_0053d6cc;
    if (iVar4 == iVar8) {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
      *(undefined2 *)(param_1 + 0x17) = 0;
    }
    if (iVar4 < iVar8) {
      if ((DAT_0053d6d8 < iVar4) || (iVar8 < DAT_0053d6d0)) {
        *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
        *(undefined2 *)(param_1 + 0x17) = 0;
      }
    }
    else if ((DAT_0053d6d8 < iVar8) || (iVar4 < DAT_0053d6d0)) {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
      *(undefined2 *)(param_1 + 0x17) = 0;
    }
    if ((iVar4 - iVar8) * (iVar5 - iVar9) < 0) {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
      *(undefined2 *)(param_1 + 0x17) = 0;
    }
    if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
      *(int *)(param_1 + 0x45) = iVar8;
      *(int *)(param_1 + 0x21) = iVar8;
      *(int *)(param_1 + 0x25) = (iVar6 * iVar9 >> 0xf) + (int)DAT_0053d6ce;
      *(int *)(param_1 + 0x49) = (iVar6 * iVar5 >> 0xf) + (int)DAT_0053d6ce;
      *(int *)(param_1 + 0x4d) = iVar3;
      *(int *)(param_1 + 0x29) = iVar3;
      *(int *)(param_1 + 0x39) = iVar4;
      *(int *)(param_1 + 0x2d) = iVar4;
      *(int *)(param_1 + 0x31) = (iVar7 * iVar9 >> 0xf) + (int)DAT_0053d6ce;
      *(int *)(param_1 + 0x3d) = (iVar7 * iVar5 >> 0xf) + (int)DAT_0053d6ce;
      *(int *)(param_1 + 0x41) = local_10;
      *(int *)(param_1 + 0x35) = local_10;
      if (iVar4 < iVar8) {
        *(short *)(param_1 + 0x67) = (short)iVar8;
        *(short *)(param_1 + 0x65) = (short)iVar4;
      }
      else {
        *(short *)(param_1 + 0x67) = (short)iVar4;
        *(short *)(param_1 + 0x65) = (short)iVar8;
      }
      if (*(int **)(param_1 + 0x1d) != (int *)0x0) {
        iVar8 = **(int **)(param_1 + 0x1d);
        *(int *)(param_1 + 0x19) = iVar8;
        puVar1 = (ushort *)(iVar8 + 4);
        *puVar1 = *puVar1 & 0xfff6;
      }
      sVar2 = (short)(local_10 + iVar3 >> 1);
      *(short *)(param_1 + 0x17) = sVar2;
      if (sVar2 < 0) {
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

