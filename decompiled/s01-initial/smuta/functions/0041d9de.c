/* Ghidra address: 0041d9de; FUN_0041d9de */

uint * FUN_0041d9de(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x4360d0);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_0040a6f8();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  FUN_0040d43c();
  FUN_0040a858();
  *in_FS_OFFSET = local_28;
  return puVar1;
}

