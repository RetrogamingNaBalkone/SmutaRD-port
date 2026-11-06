/* Ghidra address: 00425830; FUN_00425830 */

void __cdecl FUN_00425830(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_1c;
  int local_14;
  int local_c;
  
  iVar6 = *(short *)(param_1 + 0x85) - DAT_0053d6f4;
  iVar5 = DAT_0053c910 + iVar6;
  iVar1 = *(short *)(param_1 + 0x89) - DAT_0053d6fc;
  iVar2 = DAT_0053c910 + iVar1;
  local_c = iVar2 * DAT_0053d6f0 - iVar6 * DAT_0053d6ec >> 0xf;
  local_14 = iVar2 * DAT_0053d6f0 - iVar5 * DAT_0053d6ec >> 0xf;
  local_1c = iVar1 * DAT_0053d6f0 - iVar5 * DAT_0053d6ec >> 0xf;
  local_24 = iVar1 * DAT_0053d6f0 - iVar6 * DAT_0053d6ec >> 0xf;
  if ((((DAT_0053d6c4 < local_c) || (DAT_0053d6c4 < local_14)) || (DAT_0053d6c4 < local_1c)) ||
     (DAT_0053d6c4 < local_24)) {
    iVar3 = iVar5 * DAT_0053d6f0 + iVar1 * DAT_0053d6ec >> 0xf;
    iVar4 = iVar6 * DAT_0053d6f0 + iVar1 * DAT_0053d6ec >> 0xf;
    iVar1 = *(short *)(param_1 + 0x87) - DAT_0053d6f8;
    iVar6 = iVar6 * DAT_0053d6f0 + iVar2 * DAT_0053d6ec >> 0xf;
    iVar5 = iVar5 * DAT_0053d6f0 + iVar2 * DAT_0053d6ec >> 0xf;
    iVar2 = iVar1 - *(short *)(param_1 + 0x8b);
    *(int *)(param_1 + 0x49) = iVar6;
    *(int *)(param_1 + 0x4d) = iVar1;
    *(int *)(param_1 + 0x51) = local_c;
    *(int *)(param_1 + 0x55) = iVar5;
    *(int *)(param_1 + 0x59) = iVar1;
    *(int *)(param_1 + 0x5d) = local_14;
    *(int *)(param_1 + 0x61) = iVar3;
    *(int *)(param_1 + 0x65) = iVar1;
    *(int *)(param_1 + 0x69) = local_1c;
    *(int *)(param_1 + 0x6d) = iVar4;
    *(int *)(param_1 + 0x71) = iVar1;
    *(int *)(param_1 + 0x75) = local_24;
    FUN_00429f54((undefined4 *)(param_1 + 0x19),(undefined4 *)(param_1 + 0x49),0x30);
    *(int *)(param_1 + 0x41) = iVar2;
    *(int *)(param_1 + 0x35) = iVar2;
    *(int *)(param_1 + 0x29) = iVar2;
    *(int *)(param_1 + 0x1d) = iVar2;
    if (local_c < DAT_0053d6c4) {
      local_c = DAT_0053d6c4;
    }
    if (local_14 < DAT_0053d6c4) {
      local_14 = DAT_0053d6c4;
    }
    if (local_1c < DAT_0053d6c4) {
      local_1c = DAT_0053d6c4;
    }
    if (local_24 < DAT_0053d6c4) {
      local_24 = DAT_0053d6c4;
    }
    iVar2 = ((DAT_0053c914 / local_c) * iVar6 >> 0xf) + (int)DAT_0053d6cc;
    iVar5 = ((DAT_0053c914 / local_14) * iVar5 >> 0xf) + (int)DAT_0053d6cc;
    iVar6 = ((DAT_0053c914 / local_1c) * iVar3 >> 0xf) + (int)DAT_0053d6cc;
    iVar3 = ((DAT_0053c914 / local_24) * iVar4 >> 0xf) + (int)DAT_0053d6cc;
    iVar1 = iVar5;
    if ((iVar2 <= iVar5) && (iVar1 = iVar2, iVar2 < iVar5)) {
      iVar2 = iVar5;
    }
    iVar5 = iVar6;
    if ((iVar1 <= iVar6) && (iVar5 = iVar1, iVar2 < iVar6)) {
      iVar2 = iVar6;
    }
    iVar1 = iVar3;
    if ((iVar5 <= iVar3) && (iVar1 = iVar5, iVar2 < iVar3)) {
      iVar2 = iVar3;
    }
    if ((DAT_0053d6d8 < iVar1) || (iVar2 < DAT_0053d6d0)) {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
      *(undefined2 *)(param_1 + 0x17) = 0;
    }
    else {
      *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
      *(short *)(param_1 + 0x81) = (short)iVar1;
      *(short *)(param_1 + 0x83) = (short)iVar2;
      *(short *)(param_1 + 0x17) = (short)(local_c + local_14 + local_1c + local_24 >> 2);
      if (*(short *)(param_1 + 0x17) < 0) {
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

