/* Ghidra address: 00410054; FUN_00410054 */

int FUN_00410054(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_0040fe78();
  uVar1 = FUN_00427f4c();
  FUN_004281c6();
  iVar2 = FUN_00409a58();
  if ((((uVar1 & 0x40000000) != 0) && (iVar2 < 500)) || (uVar1 == 0)) {
    return 0;
  }
  FUN_00409a8c();
  FUN_00409a38();
  if ((((uVar1 & 4) == 0) && ((uVar1 & 0x10) == 0)) && ((uVar1 & 0x400) == 0)) {
    if (((uVar1 & 8) != 0) || ((uVar1 & 0x20) != 0)) {
      DAT_0044f958 = DAT_0044f958 + 1;
      DAT_0044f958 = DAT_0044f958 % DAT_00435814;
    }
  }
  else if (DAT_0044f958 < 1) {
    DAT_0044f958 = DAT_00435814 + -1;
  }
  else {
    DAT_0044f958 = DAT_0044f958 + -1;
  }
  if (((uVar1 & 0x800) == 0) && ((uVar1 & 0x200) == 0)) {
    if ((uVar1 & 0x4000) != 0) {
      return -1;
    }
    return 0;
  }
  return DAT_0044f958 + 1;
}

