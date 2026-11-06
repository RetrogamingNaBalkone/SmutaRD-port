/* Ghidra address: 00409020; FUN_00409020 */

short FUN_00409020(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = FUN_0042fe18();
  iVar3 = FUN_0042fe18();
  if (iVar3 < iVar2) {
    sVar1 = *(short *)(&DAT_00446af8 + ((iVar3 * 100) / iVar2) * 2);
    if ((0 < in_stack_00000004) && (-1 < in_stack_00000008)) {
      return sVar1;
    }
    if ((in_stack_00000004 < 0) && (-1 < in_stack_00000008)) {
      return 0xb4 - sVar1;
    }
    if ((0 < in_stack_00000004) && (in_stack_00000008 < 0)) {
      return 0x168 - sVar1;
    }
    if ((in_stack_00000004 < 0) && (in_stack_00000008 < 0)) {
      return sVar1 + 0xb4;
    }
  }
  else {
    if (iVar3 == 0) {
      return 0;
    }
    sVar1 = *(short *)(&DAT_00446af8 + ((iVar2 * 100) / iVar3) * 2);
    if ((0 < in_stack_00000008) && (-1 < in_stack_00000004)) {
      return 0x5a - sVar1;
    }
    if ((in_stack_00000008 < 0) && (-1 < in_stack_00000004)) {
      return sVar1 + 0x10e;
    }
    if ((0 < in_stack_00000008) && (in_stack_00000004 < 0)) {
      return sVar1 + 0x5a;
    }
    if ((in_stack_00000008 < 0) && (in_stack_00000004 < 0)) {
      return 0x10e - sVar1;
    }
  }
  return 0;
}

