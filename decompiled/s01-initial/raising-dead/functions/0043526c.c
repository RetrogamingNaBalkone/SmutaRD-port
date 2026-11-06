/* Ghidra address: 0043526c; FUN_0043526c */

int __cdecl FUN_0043526c(int param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43c7a0);
  if (param_1 == 0) {
    param_1 = 0;
    *in_FS_OFFSET = local_28;
  }
  else {
    if ((param_4 & 0x10) != 0) {
      param_3 = *(int *)(param_1 + -4);
    }
    uVar1 = param_4 & 7;
    iVar2 = (param_3 + -1) * param_2 + param_1;
    while( true ) {
      if (param_3 == 0) break;
      if (uVar1 == 1) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 2) {
        (*(code *)param_5)();
      }
      else if (uVar1 == 3) {
        (*(code *)param_5)(iVar2,2);
      }
      else if (uVar1 == 5) {
        (*(code *)param_5)();
      }
      else {
        FUN_0043647c();
      }
      iVar2 = iVar2 - param_2;
      param_3 = param_3 + -1;
    }
    if ((param_4 & 0x10) != 0) {
      param_1 = param_1 + -4;
    }
    if ((param_4 & 8) == 0) {
      *in_FS_OFFSET = local_28;
    }
    else {
      FUN_004350fc(param_1);
      param_1 = 0;
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

