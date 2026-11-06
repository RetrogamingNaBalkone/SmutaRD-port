/* Ghidra address: 00433684; FUN_00433684 */

uint __cdecl FUN_00433684(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_004324dc(0xe);
  if ((param_1 == 'G') || (uVar1 = param_3, param_1 == 'g')) {
    do {
      uVar1 = param_3;
      if (*(char *)(param_3 - 1) != '0') goto LAB_004336b6;
      param_3 = param_3 - 1;
    } while (param_2 < param_3);
  }
  else {
LAB_004336b6:
    param_2 = uVar1;
    if (*pcVar2 == *(char *)(param_2 - 1)) {
      param_2 = param_2 - 1;
    }
  }
  return param_2;
}

