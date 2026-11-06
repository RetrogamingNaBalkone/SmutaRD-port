/* Ghidra address: 0040e250; FUN_0040e250 */

void __cdecl FUN_0040e250(int *param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      FUN_004350fc(param_1[2]);
      if (*param_1 != 0) {
        DAT_004399a4 = DAT_004399a4 - *param_1;
        DAT_004399a0 = DAT_004399a0 + -1;
        if (DAT_004399a0 != 0) {
          iVar1 = param_1[3];
          *(int *)(iVar1 + 0x10) = param_1[4];
          *(int *)(param_1[4] + 0xc) = iVar1;
          if (param_1 == DAT_004399a8) {
            DAT_004399a8 = (int *)param_1[3];
          }
        }
      }
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

