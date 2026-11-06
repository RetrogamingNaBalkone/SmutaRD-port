/* Ghidra address: 004050b8; FUN_004050b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_004050b8(void)

{
  DAT_004347f8 = (DAT_004347f8 + 1) % (DAT_004347f4 + 1);
  if (DAT_004347f8 == 0) {
    DAT_004347f8 = 1;
  }
  _DAT_00443d4c = DAT_004347f8;
  FUN_0042cfc4();
  return &DAT_00443d68;
}

