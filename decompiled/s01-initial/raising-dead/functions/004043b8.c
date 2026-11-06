/* Ghidra address: 004043b8; FUN_004043b8 */

void __cdecl FUN_004043b8(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    DAT_004385a0 = 0;
    FUN_004350ec(DAT_0043faa8);
    FUN_004350ec(DAT_0043faac);
    FUN_004350ec(DAT_0043fab0);
    FUN_004350ec(DAT_0043fab4);
    FUN_004350ec(DAT_0043fab8);
    FUN_004350ec(DAT_0043fabc);
    FUN_004350ec(DAT_0043fac0);
    FUN_0040662c(*(LPCVOID *)((int)param_1 + 0x99));
    FUN_0040662c(*(LPCVOID *)((int)param_1 + 0x69));
    FUN_0040662c(*(LPCVOID *)((int)param_1 + 0x71));
    FUN_0040e250(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

