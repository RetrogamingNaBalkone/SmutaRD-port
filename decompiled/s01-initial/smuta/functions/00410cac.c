/* Ghidra address: 00410cac; FUN_00410cac */

void FUN_00410cac(void)

{
  short sVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined1 *local_64c;
  undefined1 *local_648;
  short local_63e;
  undefined4 local_63c;
  
  FUN_0042b4b4(0x4359ac);
  FUN_00431b68();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_00407eac();
  local_63e = 0;
  local_64c = (undefined1 *)(in_stack_00000004 + 0xa008);
  do {
    sVar2 = 0;
    local_648 = local_64c;
    do {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_00407abc();
      sVar1 = FUN_00407ee8();
      *local_648 = (char)sVar1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      sVar2 = sVar2 + 1;
      local_648 = local_648 + 1;
    } while (sVar2 < 0x100);
    local_63e = local_63e + 1;
    local_64c = local_64c + 0x100;
  } while (local_63e < 0x100);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  FUN_00431aa4();
  *in_FS_OFFSET = local_63c;
  return;
}

