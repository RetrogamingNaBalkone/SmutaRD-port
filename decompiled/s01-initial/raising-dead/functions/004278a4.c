/* Ghidra address: 004278a4; FUN_004278a4 */

void __cdecl FUN_004278a4(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar5 = param_2 - param_4 >> 0x1f;
  iVar3 = ((param_2 - param_4 ^ uVar5) - uVar5) * 0x10000;
  if (iVar3 == 0) {
    if (param_5 < param_3) {
      (**(code **)(*param_1 + 0x18))();
    }
    else {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  else {
    uVar5 = param_3 - param_5 >> 0x1f;
    local_14 = ((param_3 - param_5 ^ uVar5) - uVar5) * 0x10000;
    if (local_14 == 0) {
      if (param_4 < param_2) {
        (**(code **)(*param_1 + 0x14))();
      }
      else {
        (**(code **)(*param_1 + 0x14))();
      }
    }
    else {
      if (local_14 < iVar3) {
        local_10 = 0x10000;
        local_14 = local_14 / (iVar3 >> 0x10);
      }
      else {
        local_10 = iVar3 / (local_14 >> 0x10);
        local_14 = 0x10000;
      }
      if (param_4 < param_2) {
        local_10 = -local_10;
      }
      if (param_5 < param_3) {
        local_14 = -local_14;
      }
      local_18 = param_2 << 0x10;
      iVar3 = param_3 << 0x10;
      do {
        sVar4 = (short)((uint)(local_18 + 0x7fff) >> 0x10);
        sVar2 = (short)((uint)(iVar3 + 0x7fff) >> 0x10);
        if (((((int)sVar4 < *(int *)((int)param_1 + 0x3a)) ||
             (*(int *)((int)param_1 + 0x42) < (int)sVar4)) ||
            ((int)sVar2 < *(int *)((int)param_1 + 0x3e))) ||
           (*(int *)((int)param_1 + 0x46) < (int)sVar2)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*param_1 + 4))();
        }
        local_18 = local_18 + local_10;
        iVar3 = iVar3 + local_14;
      } while ((param_4 != sVar4) || (sVar2 != param_5));
      if (((param_4 < *(int *)((int)param_1 + 0x3a)) ||
          ((*(int *)((int)param_1 + 0x42) < param_4 || (param_5 < *(int *)((int)param_1 + 0x3e)))))
         || (*(int *)((int)param_1 + 0x46) < param_5)) {
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
  return;
}

