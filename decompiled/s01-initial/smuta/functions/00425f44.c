/* Ghidra address: 00425f44; FUN_00425f44 */

void FUN_00425f44(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x436dd0);
  DAT_0049a178 = 0;
  FUN_004281c6();
  if (DAT_0043518c != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 2;
    FUN_004082d0();
  }
  if (DAT_00436c20 != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_00411064();
  }
  DAT_00436c20 = 0;
  if (DAT_00436c30 == 2) {
    FUN_0040d768();
    FUN_00424ba0();
    FUN_0040d828();
  }
  if (DAT_00436c2c != 0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_0040d73c();
  }
  DAT_00436c2c = 0;
  FUN_0040d388();
  FUN_004281c6();
  *in_FS_OFFSET = local_28;
  return;
}

