/* Ghidra address: 0040840c; FUN_0040840c */

void FUN_0040840c(void)

{
  int iVar1;
  short sVar2;
  short in_stack_00000010;
  short in_stack_00000014;
  short in_stack_00000018;
  
  *(undefined2 *)(DAT_0044f640 + 4) = DAT_00445f8e;
  (**(code **)(*DAT_0044f640 + 0x3c))();
  FUN_0042fc2c();
  if (in_stack_00000014 != 0) {
    iVar1 = ((int)in_stack_00000014 * (int)in_stack_00000018) / (int)in_stack_00000010;
    if ((short)iVar1 == 0) {
      iVar1 = 1;
    }
    sVar2 = (short)iVar1;
    while (0 < sVar2) {
      (**(code **)(*DAT_0044f640 + 0x40))();
      iVar1 = iVar1 + -1;
      sVar2 = (short)iVar1;
    }
  }
  return;
}

