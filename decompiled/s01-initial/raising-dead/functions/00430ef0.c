/* Ghidra address: 00430ef0; FUN_00430ef0 */

int __cdecl FUN_00430ef0(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((&DAT_0043bf2e)[param_2 * 2] & 4) == 0) {
    if (param_2 == 0xffffffff) {
      FUN_00431ecc(*param_1,*(uint *)(*param_1 + 0xc) | 3);
    }
    else {
      FUN_00431ecc(*param_1,*(uint *)(*param_1 + 0xc) | 2);
    }
  }
  else {
    do {
      iVar2 = iVar2 * 10 + param_2 + -0x30;
      piVar1 = *(int **)(*param_1 + 4);
      if ((piVar1[8] == 0) || (piVar1[8] = piVar1[8] + 1, (uint)piVar1[9] <= (uint)piVar1[8])) {
        param_2 = FUN_00431c1c(piVar1);
      }
      else {
        param_2 = (uint)*(byte *)piVar1[8];
      }
    } while (((&DAT_0043bf2e)[param_2 * 2] & 4) != 0);
  }
  return iVar2;
}

