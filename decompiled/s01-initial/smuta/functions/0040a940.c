/* Ghidra address: 0040a940; FUN_0040a940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a940(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_0000000e;
  short in_stack_00000020;
  short in_stack_00000022;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  short in_stack_00000030;
  undefined2 in_stack_00000032;
  undefined2 in_stack_00000034;
  int in_stack_00000036;
  undefined2 in_stack_0000003a;
  
  DAT_0044ebc8 = in_stack_00000008;
  _DAT_0044ebcc = in_stack_0000000c;
  _DAT_0044ebce = in_stack_0000000e;
  iVar1 = (int)in_stack_0000000e >> 1;
  DAT_0044ebe4 = in_stack_00000020;
  iVar3 = (int)in_stack_0000000c >> 1;
  _DAT_0044ebe6 = in_stack_0000003a;
  iVar2 = in_stack_00000020 * iVar3 >> 3;
  DAT_0044ebd4 = iVar3 - iVar2;
  DAT_0044ebdc = iVar2 + -1 + iVar3;
  iVar2 = in_stack_00000020 * iVar1 >> 3;
  DAT_0044ebd8 = iVar1 - iVar2;
  DAT_0044ebe0 = iVar2 + -1 + iVar1;
  DAT_0044ebd0 = (short)(DAT_0044ebd4 >> 1) + (short)(DAT_0044ebdc >> 1);
  DAT_0044ebd2 = (short)(DAT_0044ebd8 >> 1) + (short)(DAT_0044ebe0 >> 1) +
                 (short)((int)DAT_00435498 * (int)in_stack_00000020 >> 3);
  DAT_0044ebe8 = in_stack_00000022;
  DAT_0044ebea = 0;
  DAT_0044ebf8 = in_stack_00000024;
  DAT_0044ebfc = in_stack_00000028;
  DAT_0044ec00 = in_stack_0000002c;
  DAT_0044ebf4 = *(undefined4 *)(&DAT_00446554 + in_stack_00000030 * 4);
  DAT_0044ebf0 = *(undefined4 *)(&DAT_00445fb0 + in_stack_00000030 * 4);
  _DAT_0044ec04 = in_stack_00000032;
  _DAT_0044ec06 = in_stack_00000034;
  DAT_0044ec08 = in_stack_00000036;
  if (in_stack_00000036 != 0) {
    FUN_0040afbc();
  }
  if (0 < DAT_0044ebe8) {
    DAT_0044ebec = FUN_004319bc();
    return;
  }
  DAT_0044ebec = 0;
  return;
}

