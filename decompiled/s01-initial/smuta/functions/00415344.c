/* Ghidra address: 00415344; FUN_00415344 */

void FUN_00415344(void)

{
  int iVar1;
  uint in_stack_00000004;
  
  iVar1 = DAT_0044f640;
  if ((in_stack_00000004 & (int)*(short *)(DAT_00499d54 + 0x92)) == 0) {
    *(undefined2 *)(DAT_0044f640 + 0x20) = 0x2c;
    *(undefined2 *)(iVar1 + 0x22) = 0xd8;
  }
  else {
    if (in_stack_00000004 == 1) {
      *(undefined2 *)(DAT_0044f640 + 0x20) = 0xcd;
      *(undefined2 *)(iVar1 + 0x22) = 0xd8;
      return;
    }
    if (in_stack_00000004 == 2) {
      *(undefined2 *)(DAT_0044f640 + 0x20) = 99;
      *(undefined2 *)(iVar1 + 0x22) = 0xd8;
      return;
    }
    if (in_stack_00000004 == 4) {
      *(undefined2 *)(DAT_0044f640 + 0x20) = 0xa8;
      *(undefined2 *)(iVar1 + 0x22) = 0xd8;
      return;
    }
  }
  return;
}

