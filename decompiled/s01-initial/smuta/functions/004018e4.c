/* Ghidra address: 004018e4; FUN_004018e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004018e4(void)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_0040ae78();
  *in_stack_00000004 = &PTR_FUN_004340d0;
  DAT_004390e8 = in_stack_00000008;
  *(int *)((int)in_stack_00000004 + 0x32) = DAT_00443c34;
  *(int *)((int)in_stack_00000004 + 0x36) = _DAT_00443c38;
  _DAT_004390d8 = *(undefined2 *)((int)in_stack_00000004 + 0x32);
  if (DAT_00443c34 == 0x140) {
    _DAT_004390dc = 1.0;
  }
  else {
    _DAT_004390dc = (float)(_DAT_004019e8 * (float10)DAT_00443c34);
  }
  if ((_DAT_00443c38 == 200) || (_DAT_00443c38 == 0xf0)) {
    _DAT_004390e0 = 1.0;
  }
  else if ((_DAT_00443c38 == 400) || (_DAT_00443c38 == 0x1e0)) {
    _DAT_004390e0 = 2.0;
  }
  else {
    _DAT_004390e0 = (float)(_DAT_004019f4 * (float10)_DAT_00443c38);
  }
  uVar1 = FUN_0042fc2c();
  DAT_004356e4 = (undefined2)uVar1;
  FUN_0040af18();
  FUN_00401724();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

