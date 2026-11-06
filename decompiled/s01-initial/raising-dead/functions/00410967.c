/* Ghidra address: 00410967; FUN_00410967 */

undefined4 __stdcall FUN_00410967(void)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  *(short *)(unaff_EBX + 0x9d) =
       (short)(((int)*(short *)(unaff_EBX + 0x3f) * *(int *)(unaff_EBX + 0xab)) / 0xfa) + 1;
  psVar1 = (short *)((*(int *)(unaff_EBX + 0x45) * *(int *)(unaff_EBX + 0xa7)) / 0xfa);
  *(short *)(unaff_EBX + 0x9f) = (short)psVar1;
  if ((unaff_ESI & 0x2000) != 0) {
    *(short *)(unaff_EBX + 0x9f) = *(short *)(unaff_EBX + 0x9f) << 1;
  }
  if ((unaff_ESI & 4) == 0) {
    if ((unaff_ESI & 8) == 0) {
      *(undefined2 *)(unaff_EBX + 0x9d) = 0;
    }
    else {
      *(undefined2 *)(unaff_EBP + -8) = *(undefined2 *)(unaff_EBX + 0x9d);
      psVar1 = (short *)(unaff_EBX + 0x3d);
      *psVar1 = *psVar1 - *(short *)(unaff_EBP + -8);
      if (*psVar1 < 0) {
        sVar3 = *psVar1 + 0x168;
      }
      else {
        sVar3 = *psVar1;
      }
      *psVar1 = sVar3;
    }
  }
  else {
    *(undefined2 *)(unaff_EBP + -6) = *(undefined2 *)(unaff_EBX + 0x9d);
    psVar1 = (short *)(unaff_EBX + 0x3d);
    *psVar1 = *psVar1 + *(short *)(unaff_EBP + -6);
    if (*psVar1 < 0x168) {
      sVar3 = *psVar1;
    }
    else {
      sVar3 = *psVar1 + -0x168;
    }
    *psVar1 = sVar3;
  }
  if (((((unaff_ESI & 0x10) == 0) || ((unaff_ESI & 0x20) != 0)) || ((unaff_ESI & 0x100000) != 0)) ||
     (((unaff_ESI & 0x80000) != 0 || ((unaff_ESI & 0x400) != 0)))) {
    unaff_ESI = *(uint *)(unaff_EBX + 0xb1);
  }
  if (((unaff_ESI & 0x10) != 0) || ((unaff_ESI & 0x400) != 0)) {
    psVar1 = (short *)FUN_00410f70(unaff_EBX,-*(short *)(unaff_EBX + 0x9f),0);
  }
  if ((unaff_ESI & 0x20) != 0) {
    psVar1 = (short *)FUN_00410f70(unaff_EBX,*(short *)(unaff_EBX + 0x9f),0);
  }
  if ((unaff_ESI & 0x80000) != 0) {
    psVar1 = (short *)FUN_00410f70(unaff_EBX,-*(short *)(unaff_EBX + 0x9f),1);
  }
  if ((unaff_ESI & 0x100000) != 0) {
    psVar1 = (short *)FUN_00410f70(unaff_EBX,*(short *)(unaff_EBX + 0x9f),1);
  }
  if ((unaff_EDI == *(int *)(unaff_EBX + 0x31)) &&
     (psVar1 = *(short **)(unaff_EBX + 0x39), *(short **)(unaff_EBP + -4) == psVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT22((short)((uint)psVar1 >> 0x10),1);
  }
  return uVar2;
}

