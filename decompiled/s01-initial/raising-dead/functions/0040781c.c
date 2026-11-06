/* Ghidra address: 0040781c; FUN_0040781c */

int __cdecl FUN_0040781c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1] == 0) {
    return 0;
  }
  if ((*(int *)(param_1[1] + 0xe) == 0) && (*(int *)(param_1[1] + 0x12) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar1 = *(int *)(param_1[1] + 0xe);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1[1] + 0x12);
      *param_1 = iVar1;
      *(undefined4 *)(iVar1 + 0xe) = 0;
      param_1[1] = iVar1;
    }
    else {
      iVar2 = param_1[1];
      *(undefined4 *)(iVar1 + 0x12) = *(undefined4 *)(param_1[1] + 0x12);
      if (*(int *)(iVar2 + 0x12) != 0) {
        *(int *)(*(int *)(iVar2 + 0x12) + 0xe) = iVar1;
      }
      param_1[1] = *(int *)(param_1[1] + 0x12);
    }
  }
  return param_1[1];
}

