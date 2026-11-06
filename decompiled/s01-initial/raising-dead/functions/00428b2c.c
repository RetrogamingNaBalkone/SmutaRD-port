/* Ghidra address: 00428b2c; FUN_00428b2c */

void __cdecl FUN_00428b2c(int *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 1;
  sVar1 = *param_2 * 2 + -1;
  if (1 < sVar1) {
    do {
      (**(code **)(*param_1 + 0x1c))();
      sVar2 = sVar2 + 2;
    } while (sVar2 < sVar1);
  }
  return;
}

