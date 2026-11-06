/* Ghidra address: 0041ed4b; FUN_0041ed4b */

undefined4 FUN_0041ed4b(void)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  *(short *)(unaff_EBX + 0x9c) =
       (short)(((int)*(short *)(unaff_EBX + 0x3e) * *(int *)(unaff_EBX + 0xaa)) / 0xfa) + 1;
  psVar1 = (short *)((*(int *)(unaff_EBX + 0x44) * *(int *)(unaff_EBX + 0xa6)) / 0xfa);
  *(short *)(unaff_EBX + 0x9e) = (short)psVar1;
  if ((unaff_ESI & 0x2000) != 0) {
    *(short *)(unaff_EBX + 0x9e) = *(short *)(unaff_EBX + 0x9e) << 1;
  }
  if ((unaff_ESI & 4) == 0) {
    if ((unaff_ESI & 8) == 0) {
      *(undefined2 *)(unaff_EBX + 0x9c) = 0;
    }
    else {
      *(undefined2 *)(unaff_EBP + -8) = *(undefined2 *)(unaff_EBX + 0x9c);
      psVar1 = (short *)(unaff_EBX + 0x3c);
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
    *(undefined2 *)(unaff_EBP + -6) = *(undefined2 *)(unaff_EBX + 0x9c);
    psVar1 = (short *)(unaff_EBX + 0x3c);
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
    unaff_ESI = *(uint *)(unaff_EBX + 0xb0);
  }
  if (((unaff_ESI & 0x10) != 0) || ((unaff_ESI & 0x400) != 0)) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_ESI & 0x20) != 0) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_ESI & 0x80000) != 0) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_ESI & 0x100000) != 0) {
    psVar1 = (short *)FUN_0041f354();
  }
  if ((unaff_EDI == *(int *)(unaff_EBX + 0x30)) &&
     (psVar1 = *(short **)(unaff_EBX + 0x38), *(short **)(unaff_EBP + -4) == psVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT22((short)((uint)psVar1 >> 0x10),1);
  }
  return uVar2;
}

