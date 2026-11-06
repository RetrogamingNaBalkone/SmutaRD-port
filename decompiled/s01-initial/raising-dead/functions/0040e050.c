/* Ghidra address: 0040e050; FUN_0040e050 */

int * __cdecl FUN_0040e050(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_28;
  undefined4 *local_18;
  uint local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  if (*(int *)(param_1 + 10) == 0) {
    local_8 = (int *)0x0;
  }
  else {
    FUN_0040dcb4(param_2,&local_c,&local_10,(int *)&local_14);
    FUN_00429fc4(&local_38,0,0x14);
    local_38 = 0x14;
    local_34 = 0xe2;
    local_30 = local_14;
    local_28 = local_c;
    iVar1 = (**(code **)(**(int **)(param_1 + 10) + 0xc))();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*local_8 + 0x2c))();
      if (iVar1 == -0x7787ff6a) {
        (**(code **)(*local_8 + 0x50))();
        iVar1 = (**(code **)(*local_8 + 0x2c))();
      }
      if (iVar1 == 0) {
        FUN_00429f54(local_18,local_10,local_14);
        (**(code **)(*local_8 + 0x4c))();
      }
    }
    else {
      local_8 = (int *)0x0;
    }
  }
  return local_8;
}

