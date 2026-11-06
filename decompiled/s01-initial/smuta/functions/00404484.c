/* Ghidra address: 00404484; FUN_00404484 */

void FUN_00404484(void)

{
  int *in_stack_00000004;
  
  FUN_004044e8();
  SetCursorPos(DAT_00434230,DAT_00434234);
  DAT_0044362c = DAT_00434230;
  DAT_00443630 = DAT_00434234;
  *(undefined4 *)((int)in_stack_00000004 + 0x8a) = 0;
  *(undefined4 *)((int)in_stack_00000004 + 0x86) = 0;
  (**(code **)(*in_stack_00000004 + 0x1c))();
  return;
}

