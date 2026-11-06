/* Ghidra address: 00435394; FUN_00435394 */

/* WARNING: Variable defined which should be unmapped: param_1 */

int * __cdecl FUN_00435394(int *param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43c7f4);
  if (param_1 == (int *)0x0) {
    iVar2 = 4;
    if ((param_4 & 0x10) == 0) {
      iVar2 = 0;
    }
    param_1 = (int *)FUN_00435154(param_2 * param_3 + iVar2);
    if (param_1 == (int *)0x0) {
      *in_FS_OFFSET = local_28;
      param_1 = (int *)0x0;
      return param_1;
    }
  }
  if ((param_4 & 0x10) != 0) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  if (param_5 == (undefined *)0x0) {
    *in_FS_OFFSET = local_28;
  }
  else {
    local_2c = param_3;
    piVar3 = param_1;
    while (0 < local_2c) {
      uVar1 = param_4 & 7;
      if (uVar1 == 1) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 2) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 3) {
        (*(code *)param_5)(piVar3);
      }
      else if (uVar1 == 5) {
        (*(code *)param_5)();
      }
      else {
        FUN_0043647c();
      }
      piVar3 = (int *)((int)piVar3 + param_2);
      local_2c = local_2c + -1;
    }
    *in_FS_OFFSET = local_28;
  }
  return param_1;
}

