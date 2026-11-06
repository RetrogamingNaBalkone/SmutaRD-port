/* Ghidra address: 00429d8c; FUN_00429d8c */

undefined4 __cdecl FUN_00429d8c(int *param_1,short param_2)

{
  undefined4 uVar1;
  
  if (DAT_0043a1cc != (int *)0x0) {
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x14))();
    }
    uVar1 = (**(code **)(*DAT_0043a1cc + 0x10))();
    return uVar1;
  }
  return 0;
}

