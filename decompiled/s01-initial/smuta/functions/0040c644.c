/* Ghidra address: 0040c644; FUN_0040c644 */

void FUN_0040c644(void)

{
  short sVar1;
  short sVar2;
  int *in_stack_00000004;
  short *in_stack_00000008;
  
  sVar2 = 1;
  sVar1 = *in_stack_00000008 * 2 + -1;
  if (1 < sVar1) {
    do {
      (**(code **)(*in_stack_00000004 + 0x1c))();
      sVar2 = sVar2 + 2;
    } while (sVar2 < sVar1);
  }
  return;
}

