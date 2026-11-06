/* Ghidra address: 00431834; FUN_00431834 */

int __cdecl FUN_00431834(int param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    return 0;
  }
  if (4 < param_3) {
    *(int *)(param_1 + 0x32) = param_3;
  }
  return param_1;
}

