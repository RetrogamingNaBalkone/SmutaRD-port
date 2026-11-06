/* Ghidra address: 0041ac1c; FUN_0041ac1c */

void FUN_0041ac1c(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435d58);
  while (0 < DAT_00493dac) {
    DAT_00493dac = DAT_00493dac + -1;
    piVar1 = (int *)(&DAT_00493db0)[DAT_00493dac];
    if (piVar1 != (int *)0x0) {
      sVar2 = (**(code **)(*piVar1 + 0x10))();
      if ((sVar2 != 0) && (piVar1 != (int *)0x0)) {
        iVar3 = FUN_0042b677();
        *DAT_0049aa2c = *DAT_0049aa2c + iVar3;
        (**(code **)*piVar1)();
      }
    }
  }
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_0041acc8();
  FUN_0041034c();
  *in_FS_OFFSET = local_28;
  return;
}

