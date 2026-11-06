/* Ghidra address: 00430ffc; FUN_00430ffc */

int __cdecl FUN_00430ffc(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (((&DAT_0043bf2e)[param_2 * 2] & 0x80) == 0) {
    if (param_2 == 0xffffffff) {
      FUN_00431ecc(*param_1,*(uint *)(*param_1 + 0xc) | 5);
    }
    else {
      FUN_00431ecc(*param_1,*(uint *)(*param_1 + 0xc) | 2);
    }
  }
  else {
    do {
      if (((&DAT_0043bf2e)[param_2 * 2] & 1) == 0) {
        if (((&DAT_0043bf2e)[param_2 * 2] & 2) == 0) {
          iVar2 = param_2 - 0x30;
        }
        else {
          iVar2 = param_2 - 0x57;
        }
      }
      else {
        iVar2 = param_2 - 0x37;
      }
      iVar3 = iVar3 * 0x10 + iVar2;
      piVar1 = *(int **)(*param_1 + 4);
      if ((piVar1[8] == 0) || (piVar1[8] = piVar1[8] + 1, (uint)piVar1[9] <= (uint)piVar1[8])) {
        param_2 = FUN_00431c1c(piVar1);
      }
      else {
        param_2 = (uint)*(byte *)piVar1[8];
      }
    } while (((&DAT_0043bf2e)[param_2 * 2] & 0x80) != 0);
  }
  return iVar3;
}

