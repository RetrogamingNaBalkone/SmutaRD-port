/* Ghidra address: 004044ec; FUN_004044ec */

void __stdcall FUN_004044ec(void)

{
  int iVar1;
  short sVar2;
  short in_stack_00000010;
  short in_stack_00000014;
  short in_stack_00000018;
  
  *(undefined2 *)(DAT_0053d640 + 4) = DAT_0043faa6;
  (**(code **)(*DAT_0053d640 + 0x3c))();
  FUN_00433130();
  if (in_stack_00000014 != 0) {
    iVar1 = ((int)in_stack_00000014 * (int)in_stack_00000018) / (int)in_stack_00000010;
    if ((short)iVar1 == 0) {
      iVar1 = 1;
    }
    sVar2 = (short)iVar1;
    while (0 < sVar2) {
      (**(code **)(*DAT_0053d640 + 0x40))();
      iVar1 = iVar1 + -1;
      sVar2 = (short)iVar1;
    }
  }
  return;
}

