/* Ghidra address: 0041d5a0; FUN_0041d5a0 */

void FUN_0041d5a0(void)

{
  int *piVar1;
  int in_stack_00000004;
  short in_stack_00000008;
  
  if (*(short *)(in_stack_00000004 + 0x4b72) == 0) {
    if (in_stack_00000008 == 0) {
      FUN_0040afbc();
      piVar1 = DAT_0044ec08;
      *(undefined2 *)(DAT_0044ec08 + 4) = 0;
      if (DAT_0048aaac < 0x40) {
        (**(code **)(*piVar1 + 0x3c))();
        FUN_00406c00();
      }
      FUN_0041b0b4();
      (**(code **)(*DAT_0044ec08 + 0x3c))();
      (**(code **)(*DAT_0044ec08 + 0x3c))();
    }
  }
  else if (DAT_0048e514 == 0) {
    FUN_004158d8();
  }
  else {
    FUN_0041821c();
  }
  FUN_0041ac1c();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_0040aad4();
  return;
}

