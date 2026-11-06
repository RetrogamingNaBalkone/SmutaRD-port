/* Ghidra address: 00427a88; FUN_00427a88 */

void __cdecl FUN_00427a88(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = param_4 - param_2;
  if (local_8 == 0) {
    if (param_5 < param_3) {
      (**(code **)(*param_1 + 0x18))();
    }
    else {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  else {
    local_10 = param_5 - param_3;
    if (local_10 == 0) {
      if (param_4 < param_2) {
        (**(code **)(*param_1 + 0x14))();
      }
      else {
        (**(code **)(*param_1 + 0x14))();
      }
    }
    else {
      if ((int)local_8 < 0) {
        local_c = -1;
        local_8 = (local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f);
      }
      else {
        local_c = 1;
      }
      if ((int)local_10 < 0) {
        local_14 = -1;
        local_10 = (local_10 ^ (int)local_10 >> 0x1f) - ((int)local_10 >> 0x1f);
      }
      else {
        local_14 = 1;
      }
      if ((((param_2 < *(int *)((int)param_1 + 0x3a)) || (*(int *)((int)param_1 + 0x42) < param_2))
          || (param_3 < *(int *)((int)param_1 + 0x3e))) || (*(int *)((int)param_1 + 0x46) < param_3)
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*param_1 + 4))();
      }
      local_18 = param_3;
      uVar3 = local_10;
      uVar2 = local_8;
      if ((int)local_8 < (int)local_10) {
        while (param_3 != param_5) {
          param_3 = param_3 + local_14;
          uVar2 = uVar2 + local_8;
          if ((int)local_10 <= (int)uVar2) {
            param_2 = param_2 + local_c;
            uVar2 = uVar2 - local_10;
          }
          if (((param_2 < *(int *)((int)param_1 + 0x3a)) ||
              (*(int *)((int)param_1 + 0x42) < param_2)) ||
             ((param_3 < *(int *)((int)param_1 + 0x3e) || (*(int *)((int)param_1 + 0x46) < param_3))
             )) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*param_1 + 4))();
          }
        }
      }
      else {
        while (param_2 != param_4) {
          param_2 = param_2 + local_c;
          uVar3 = uVar3 + local_10;
          if ((int)local_8 <= (int)uVar3) {
            local_18 = local_18 + local_14;
            uVar3 = uVar3 - local_8;
          }
          if (((param_2 < *(int *)((int)param_1 + 0x3a)) ||
              (*(int *)((int)param_1 + 0x42) < param_2)) ||
             ((local_18 < *(int *)((int)param_1 + 0x3e) ||
              (*(int *)((int)param_1 + 0x46) < local_18)))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            (**(code **)(*param_1 + 4))();
          }
        }
      }
    }
  }
  return;
}

