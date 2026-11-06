/* Ghidra address: 0042dfc8; FUN_0042dfc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042dfc8(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 < 0) {
    if (-in_stack_00000004 < DAT_004380c8) {
      DAT_00438c44 = -in_stack_00000004;
      _DAT_0049ac00 = 0xffffffff;
      return 0xffffffff;
    }
  }
  else if (in_stack_00000004 < 299) goto LAB_0042dfde;
  in_stack_00000004 = 1;
LAB_0042dfde:
  _DAT_0049ac00 = in_stack_00000004;
  DAT_00438c44 = (int)(char)(&DAT_00438574)[in_stack_00000004];
  return 0xffffffff;
}

