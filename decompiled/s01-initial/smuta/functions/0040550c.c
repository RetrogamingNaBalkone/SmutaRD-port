/* Ghidra address: 0040550c; FUN_0040550c */

void FUN_0040550c(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x43490c);
  iVar1 = FUN_00425c0c();
  if (iVar1 == 10) {
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405570();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

