/* Ghidra address: 004224f8; FUN_004224f8 */

void __cdecl FUN_004224f8(int param_1)

{
  int *piVar1;
  
  *(undefined2 *)(param_1 + 0x4b72) = 0;
  piVar1 = DAT_0053d704;
  *(undefined2 *)(DAT_0053d704 + 4) = 0;
  (**(code **)(*piVar1 + 0x3c))();
  FUN_00409804();
  return;
}

