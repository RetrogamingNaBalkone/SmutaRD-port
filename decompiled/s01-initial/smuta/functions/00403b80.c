/* Ghidra address: 00403b80; FUN_00403b80 */

undefined4 FUN_00403b80(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (in_stack_00000004 == -0x7789fe3e) {
    iVar1 = (**(code **)(*DAT_0043412c + 0x6c))();
    if (iVar1 == 0) {
      FUN_00403d8c();
    }
    else {
      FUN_0042a068();
    }
  }
  else {
    if (in_stack_00000004 == 0) {
      return 0;
    }
    if (in_stack_00000004 != -0x7789fde4) {
      FUN_0042a068();
    }
  }
  return 1;
}

