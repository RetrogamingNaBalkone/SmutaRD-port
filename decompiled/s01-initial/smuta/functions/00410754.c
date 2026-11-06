/* Ghidra address: 00410754; FUN_00410754 */

int FUN_00410754(void)

{
  short sVar1;
  int in_stack_00000004;
  
  DAT_00450aa0 = in_stack_00000004;
  FUN_00410714();
  sVar1 = 0;
  do {
    *(char *)(*(int *)(in_stack_00000004 + 4) + (int)sVar1) = (char)sVar1;
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x100);
  sVar1 = 1;
  do {
    FUN_00428fe4();
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x20);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

