/* Ghidra address: 0042fda8; FUN_0042fda8 */

uint __cdecl FUN_0042fda8(uint param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0;
    for (piVar1 = &DAT_0043b4c4; ((int)param_2 < (int)DAT_0043b4c0 && (*piVar1 != 0));
        piVar1 = piVar1 + 1) {
      param_2 = param_2 + 1;
    }
  }
  if ((param_1 < DAT_0043b4c0) && (param_2 < DAT_0043b4c0)) {
    if (((&DAT_0043b4c4)[param_1] != 0) && ((&DAT_0043b4c4)[param_2] == 0)) {
      (&DAT_0043b4c4)[param_2] = (&DAT_0043b4c4)[param_1];
      *(undefined4 *)(&DAT_0053e22c + param_2 * 4) = param_3;
      return param_2;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

