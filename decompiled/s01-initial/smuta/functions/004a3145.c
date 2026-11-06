/* Ghidra address: 004a3145; FUN_004a3145 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a3145(void)

{
  undefined4 uVar1;
  short *psVar2;
  short sVar3;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  
  if ((unaff_ESI & 0x40000000) != 0) {
    *(undefined2 *)(unaff_EBX + 0x9c) = DAT_00435808;
    DAT_00435808 = 0;
    _DAT_0043580a = 0;
    psVar2 = (short *)((*(int *)(unaff_EBX + 0x44) * *(int *)(unaff_EBX + 0xa6)) / 0xfa);
    *(short *)(unaff_EBX + 0x9e) = (short)psVar2;
    if ((unaff_ESI & 0x2000) != 0) {
      *(short *)(unaff_EBX + 0x9e) = *(short *)(unaff_EBX + 0x9e) << 1;
    }
    if ((unaff_ESI & 4) == 0) {
      if ((unaff_ESI & 8) == 0) {
        *(undefined2 *)(unaff_EBX + 0x9c) = 0;
      }
      else {
        *(undefined2 *)(unaff_EBP + -8) = *(undefined2 *)(unaff_EBX + 0x9c);
        psVar2 = (short *)(unaff_EBX + 0x3c);
        *psVar2 = *psVar2 - *(short *)(unaff_EBP + -8);
        if (*psVar2 < 0) {
          sVar3 = *psVar2 + 0x168;
        }
        else {
          sVar3 = *psVar2;
        }
        *psVar2 = sVar3;
      }
    }
    else {
      *(undefined2 *)(unaff_EBP + -6) = *(undefined2 *)(unaff_EBX + 0x9c);
      psVar2 = (short *)(unaff_EBX + 0x3c);
      *psVar2 = *psVar2 + *(short *)(unaff_EBP + -6);
      if (*psVar2 < 0x168) {
        sVar3 = *psVar2;
      }
      else {
        sVar3 = *psVar2 + -0x168;
      }
      *psVar2 = sVar3;
    }
    if (((((unaff_ESI & 0x10) == 0) || ((unaff_ESI & 0x20) != 0)) || ((unaff_ESI & 0x100000) != 0))
       || (((unaff_ESI & 0x80000) != 0 || ((unaff_ESI & 0x400) != 0)))) {
      unaff_ESI = *(uint *)(unaff_EBX + 0xb0);
    }
    if (((unaff_ESI & 0x10) != 0) || ((unaff_ESI & 0x400) != 0)) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_ESI & 0x20) != 0) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_ESI & 0x80000) != 0) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_ESI & 0x100000) != 0) {
      psVar2 = (short *)FUN_0041f354();
    }
    if ((unaff_EDI == *(int *)(unaff_EBX + 0x30)) &&
       (psVar2 = *(short **)(unaff_EBX + 0x38), *(short **)(unaff_EBP + -4) == psVar2)) {
      uVar1 = 0;
    }
    else {
      uVar1 = CONCAT22((short)((uint)psVar2 >> 0x10),1);
    }
    return uVar1;
  }
  uVar1 = FUN_0041ed4b();
  return uVar1;
}

