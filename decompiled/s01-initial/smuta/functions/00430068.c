/* Ghidra address: 00430068; FUN_00430068 */

byte * FUN_00430068(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  int in_stack_00000008;
  byte *in_stack_0000000c;
  byte in_stack_00000010;
  char in_stack_00000014;
  byte local_3c [46];
  byte local_e;
  byte local_d;
  int local_c;
  int local_8;
  
  bVar11 = 0;
  local_e = *PTR_DAT_004387d8;
  if (0x28 < in_stack_00000008) {
    in_stack_00000008 = 0x28;
  }
  local_c = in_stack_00000008;
  local_d = in_stack_00000010 & 0xdf;
  if (local_d == 0x46) {
    if (0 < -in_stack_00000008) {
      in_stack_00000008 = 0;
    }
  }
  else if ((0 < in_stack_00000008) && (local_d == 0x45)) {
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  iVar2 = FUN_004307f8();
  if (iVar2 == 0x7fff) {
    if (local_8 == 0) {
      pcVar3 = &DAT_00438a49;
    }
    else {
      pcVar3 = &DAT_00438a44;
    }
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pbVar7 = (byte *)(pcVar10 + -uVar5);
    pbVar4 = in_stack_0000000c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -8 + 4;
      pbVar4 = pbVar4 + (uint)bVar11 * -8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar4 = *pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -2 + 1;
      pbVar4 = pbVar4 + (uint)bVar11 * -2 + 1;
    }
    return in_stack_0000000c;
  }
  if (iVar2 == 0x7ffe) {
    if (local_8 == 0) {
      pcVar3 = &DAT_00438a53;
    }
    else {
      pcVar3 = &DAT_00438a4e;
    }
    uVar5 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar3 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pbVar7 = (byte *)(pcVar10 + -uVar5);
    pbVar4 = in_stack_0000000c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar4 = *(undefined4 *)pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -8 + 4;
      pbVar4 = pbVar4 + (uint)bVar11 * -8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar4 = *pbVar7;
      pbVar7 = pbVar7 + (uint)bVar11 * -2 + 1;
      pbVar4 = pbVar4 + (uint)bVar11 * -2 + 1;
    }
    return in_stack_0000000c;
  }
  pbVar7 = in_stack_0000000c;
  if (local_8 != 0) {
    *in_stack_0000000c = 0x2d;
    pbVar7 = in_stack_0000000c + 1;
  }
  if (local_d != 0x46) {
    if ((local_d != 0x47) || (iVar2 < -3)) goto LAB_0043022d;
    iVar9 = in_stack_00000008;
    if (in_stack_00000008 == 0) {
      iVar9 = 1;
    }
    if (iVar9 < iVar2) goto LAB_0043022d;
  }
  if (iVar2 < 0x29) {
    if (iVar2 < 1) {
      *pbVar7 = 0x30;
      pbVar7[1] = local_e;
      pbVar7 = pbVar7 + 2;
      for (iVar9 = iVar2; iVar2 = 0, iVar9 != 0; iVar9 = iVar9 + 1) {
        *pbVar7 = 0x30;
        pbVar7 = pbVar7 + 1;
      }
    }
    iVar9 = 0;
    for (pbVar4 = local_3c; *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
      *pbVar7 = *pbVar4;
      pbVar8 = pbVar7 + 1;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        *pbVar8 = local_e;
        pbVar8 = pbVar7 + 2;
        iVar9 = iVar9 + 1;
      }
      pbVar7 = pbVar8;
    }
    iVar9 = iVar9 + local_c;
    if (iVar9 < in_stack_00000008) {
      pbVar4 = (byte *)FUN_00429054();
      pbVar7 = pbVar7 + (in_stack_00000008 - iVar9);
    }
    else if ((iVar2 != 1) && (in_stack_00000014 == '\0')) {
      pbVar4 = (byte *)FUN_00430030();
      pbVar7 = pbVar4;
    }
    if (pbVar7 == in_stack_0000000c) {
      *pbVar7 = 0x30;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = 0;
    return pbVar4;
  }
LAB_0043022d:
  *pbVar7 = local_3c[0];
  pbVar4 = pbVar7 + 1;
  if (local_3c[1] == 0) {
    if (in_stack_00000014 != '\0') {
      *pbVar4 = local_e;
      pbVar4 = pbVar7 + 2;
    }
  }
  else {
    *pbVar4 = local_e;
    pbVar4 = pbVar7 + 2;
    pbVar7 = local_3c + 2;
    while (local_3c[1] != 0) {
      *pbVar4 = local_3c[1];
      pbVar4 = pbVar4 + 1;
      local_3c[1] = *pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    if (in_stack_00000014 == '\0') {
      pbVar4 = (byte *)FUN_00430030();
    }
  }
  *pbVar4 = in_stack_00000010 & 0x20 | 0x45;
  pbVar7 = (byte *)(iVar2 + -1);
  if ((int)pbVar7 < 0) {
    pbVar7 = (byte *)-(int)pbVar7;
    pbVar4[1] = 0x2d;
  }
  else {
    pbVar4[1] = 0x2b;
  }
  if ((int)pbVar7 < 1000) {
    if ((int)pbVar7 < 100) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
    }
  }
  else {
    iVar2 = 4;
  }
  pbVar4[iVar2 + 2] = 0;
  pbVar4 = pbVar4 + iVar2 + 2;
  pbVar8 = pbVar4;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    pbVar4 = pbVar4 + -1;
    *pbVar4 = (char)((int)pbVar7 % 10) + 0x30;
    pbVar8 = (byte *)((int)pbVar7 / 10);
    pbVar7 = pbVar8;
  }
  return pbVar8;
}

