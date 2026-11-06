/* Ghidra address: 00410270; FUN_00410270 */

undefined4 FUN_00410270(void)

{
  uint uVar1;
  
  if (DAT_0044f9b8 == 0) {
    return 0;
  }
  uVar1 = FUN_00427f4c();
  if (((uVar1 != 0x800) && (uVar1 != 0x200)) && (uVar1 != 0x4000)) {
    return 1;
  }
  FUN_004281c6();
  if (uVar1 == 0x4000) {
    return 0;
  }
  if ((*(byte *)(DAT_0044f9b8 + 0x12) & 0x20) != 0) {
    return 0;
  }
  FUN_00410114();
  return 1;
}

