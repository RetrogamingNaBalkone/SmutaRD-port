/* Ghidra address: 004052c8; FUN_004052c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004052c8(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  FUN_0042b4b4(0x43487c);
  iVar1 = FUN_004253bc();
  if (iVar1 == 0xb) {
    if (DAT_00436c18 == 0) {
      puVar2 = FUN_00431988();
      if (puVar2 != (uint *)0x0) {
        FUN_00405570();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
      }
      *in_FS_OFFSET = local_38;
    }
    else {
      if (_DAT_00443d4c < 10) {
        _DAT_00443d4c = _DAT_00443d4c + 1;
        FUN_004261c8();
        puVar2 = FUN_00431988();
        if (puVar2 != (uint *)0x0) {
          FUN_00405104();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
        }
      }
      else {
        puVar2 = FUN_00431988();
        if (puVar2 != (uint *)0x0) {
          FUN_00405570();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
        }
      }
      *in_FS_OFFSET = local_38;
    }
  }
  else if (iVar1 == 10) {
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405570();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_38;
  }
  else if (iVar1 == 2) {
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405570();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_38;
  }
  else {
    *in_FS_OFFSET = local_38;
  }
  return;
}

