/* Ghidra address: 00430f78; FUN_00430f78 */

int __cdecl FUN_00430f78(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((int)param_2 < 0x30) || (0x37 < (int)param_2)) {
    if (param_2 == 0xffffffff) {
      FUN_00431ecc(*param_1,*(uint *)(*param_1 + 0xc) | 5);
    }
    else {
      FUN_00431ecc(*param_1,*(uint *)(*param_1 + 0xc) | 2);
    }
  }
  else {
    do {
      piVar1 = *(int **)(*param_1 + 4);
      iVar2 = iVar2 * 8 + param_2 + -0x30;
      if ((piVar1[8] == 0) || (piVar1[8] = piVar1[8] + 1, (uint)piVar1[9] <= (uint)piVar1[8])) {
        param_2 = FUN_00431c1c(piVar1);
      }
      else {
        param_2 = (uint)*(byte *)piVar1[8];
      }
    } while ((0x2f < (int)param_2) && ((int)param_2 < 0x38));
  }
  return iVar2;
}

