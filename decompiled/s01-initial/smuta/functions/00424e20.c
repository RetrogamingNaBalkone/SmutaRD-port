/* Ghidra address: 00424e20; FUN_00424e20 */

void FUN_00424e20(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_0042b4b4(0x436c70);
  DAT_0049a178 = 0;
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_00410754();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  DAT_00434094 = puVar2;
  DAT_0049a17c = puVar2;
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_004018e4();
    *DAT_0049aa2c = *DAT_0049aa2c + -2;
  }
  DAT_0044f640 = puVar2;
  FUN_0042cfc4();
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    FUN_0040d2f4();
    *DAT_0049aa2c = *DAT_0049aa2c + -3;
  }
  DAT_0044f6c4 = puVar2;
  FUN_0041d9b0();
  FUN_0040afbc();
  iVar1 = *(int *)((int)DAT_0044f640 + 0x36);
  DAT_0049a184 = iVar1 / 0x28;
  DAT_0049a32c = (undefined2)(iVar1 / 3);
  DAT_0049a32e = (undefined2)(-iVar1 / 3);
  DAT_0049a330 = 0x42;
  DAT_0049a332 = 0xffbe;
  DAT_0049a336 = 5;
  FUN_004281c6();
  FUN_0042cfc4();
  *in_FS_OFFSET = local_30;
  return;
}

