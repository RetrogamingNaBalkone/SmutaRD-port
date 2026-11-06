/* Ghidra address: 0042e810; FUN_0042e810 */

uint __cdecl
FUN_0042e810(undefined *param_1,undefined *param_2,uint param_3,uint param_4,int param_5,
            int *param_6,int *param_7)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 extraout_var;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int extraout_EDX;
  int iVar6;
  int extraout_EDX_00;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar7 = 0;
  bVar8 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_0042e841:
  local_c = iVar1;
  iVar1 = local_c + 1;
  uVar4 = param_3;
  uVar3 = (*(code *)param_1)();
  if (iVar7 == 0) {
    if (((-1 < (int)uVar3) && ((int)uVar3 < 0x80)) &&
       (uVar4 = uVar3, uVar2 = FUN_00434fc4(uVar3), CONCAT22(extraout_var,uVar2) != 0))
    goto LAB_0042e841;
    iVar7 = 1;
  }
  iVar6 = param_5 + -1;
  if (iVar6 < 0) goto LAB_0042e9e5;
  if ((iVar7 == 1) && ((iVar7 = 2, uVar3 == 0x2b || (uVar3 == 0x2d)))) {
    bVar8 = uVar3 == 0x2d;
    param_5 = iVar6;
    goto LAB_0042e841;
  }
  if (iVar7 == 2) {
    iVar7 = 3;
    if ((uVar3 == 0x30) && ((local_14 = 1, param_4 == 0 || (param_4 == 0x10)))) {
      iVar1 = local_c + 2;
      uVar4 = param_3;
      uVar3 = (*(code *)param_1)();
      param_5 = param_5 + -2;
      if (param_5 < 0) goto LAB_0042e9e5;
      if ((uVar3 == 0x78) || (uVar3 == 0x58)) {
        param_4 = 0x10;
        goto LAB_0042e841;
      }
      iVar6 = param_5;
      if (param_4 == 0) {
        param_4 = 8;
      }
    }
    local_c = iVar1;
    param_5 = iVar6;
    iVar6 = param_5;
    iVar1 = local_c;
    if (param_4 == 0) {
      param_4 = 10;
    }
    else if (((int)param_4 < 1) || (0x24 < (int)param_4)) goto LAB_0042e9e5;
  }
  local_c = iVar1;
  param_5 = iVar6;
  iVar1 = local_c;
  if (iVar7 == 3) {
    if (((int)uVar3 < 0x30) || (0x39 < (int)uVar3)) {
      if (((int)uVar3 < 0x61) || (0x7a < (int)uVar3)) {
        if (((int)uVar3 < 0x41) || (0x5a < (int)uVar3)) goto LAB_0042e9e5;
        uVar4 = uVar3 - 0x37;
        local_20 = uVar4;
      }
      else {
        local_20 = uVar3 - 0x57;
      }
    }
    else {
      local_20 = uVar3 - 0x30;
    }
    if ((int)param_4 <= (int)local_20) goto LAB_0042e9e5;
    local_14 = local_14 + 1;
    uVar4 = FUN_00432c70(local_1c,local_18,uVar4,param_4);
    uVar5 = local_20 + uVar4;
    iVar6 = ((int)local_20 >> 0x1f) + extraout_EDX + (uint)CARRY4(local_20,uVar4);
    uVar4 = FUN_00432d0b(uVar5 - local_20,
                         (iVar6 - ((int)local_20 >> 0x1f)) - (uint)(uVar5 < local_20),extraout_ECX,
                         param_4,(int)param_4 >> 0x1f);
    bVar9 = extraout_EDX_00 != local_18;
    bVar10 = uVar4 != local_1c;
    local_1c = uVar5;
    local_18 = iVar6;
    if (bVar9 || bVar10) {
      local_10 = 2;
      if (bVar8) {
        local_1c = 0;
      }
      else {
        local_1c = 0xffffffff;
      }
LAB_0042e9e5:
      local_c = iVar1;
      if (local_10 != 2) {
        (*(code *)param_2)();
        local_c = local_c + -1;
        if (bVar8) {
          local_1c = -local_1c;
        }
      }
      if ((local_14 == 0) && (local_10 = -1, uVar3 != 0xffffffff)) {
        local_10 = 0;
      }
      *param_7 = local_10;
      *param_6 = *param_6 + local_c;
      return local_1c;
    }
  }
  goto LAB_0042e841;
}

