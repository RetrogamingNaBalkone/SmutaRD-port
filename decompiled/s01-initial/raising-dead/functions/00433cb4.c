/* Ghidra address: 00433cb4; FUN_00433cb4 */

void __cdecl
FUN_00433cb4(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5,
            int *param_6,undefined4 *param_7)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longdouble in_ST0;
  longdouble in_ST1;
  uint uVar12;
  uint local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined1 local_28 [8];
  undefined2 uStack_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  int local_c;
  int local_8;
  
  local_38 = (undefined2 *)local_28;
  local_8 = 0x8000;
  local_c = 0x13;
  local_d = '\0';
  local_e = '\x01';
  local_f = '\0';
  local_10 = '\0';
  local_11 = '\0';
  local_18 = 0;
  iVar10 = -2;
  local_1c = 1;
  _local_28 = (longdouble)(unkuint10)0;
  uVar12 = 0xe;
  pbVar4 = (byte *)FUN_004324dc(0xe);
  bVar1 = *pbVar4;
  uVar5 = (uint)bVar1;
  do {
    local_18 = local_18 + 1;
    uVar7 = param_4;
    uVar6 = (*(code *)param_2)(uVar5,param_4,uVar12);
    uVar12 = uVar7;
    uVar7 = uVar6 + 1;
    if (uVar7 == 0) {
      local_1c = 0xffffffff;
      goto LAB_00433fe3;
    }
    if ((uVar6 & 0x80) != 0) break;
    uVar12 = uVar6;
    uVar3 = FUN_00434fc4(uVar6);
    uVar5 = CONCAT22(extraout_var,uVar3);
    uVar7 = 0;
  } while (uVar5 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar11 = local_c;
    if (uVar6 == 0x2b) {
      local_f = '\x01';
    }
    else {
      iVar9 = iVar10;
      if (uVar6 != 0x2d) goto LAB_00433d75;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar11, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar12 = param_4;
      uVar7 = (*(code *)param_2)();
      uVar6 = uVar7;
      iVar9 = iVar10;
LAB_00433d75:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar6 == 0x49) {
          local_18 = local_18 + 1;
          iVar10 = (*(code *)param_2)(uVar7,param_4,uVar12);
          iVar11 = param_5 + -1;
          if ((iVar11 < 0) || (iVar10 != 0x4e)) goto LAB_00433fde;
          local_18 = local_18 + 1;
          iVar10 = (*(code *)param_2)();
          iVar11 = param_5 + -2;
          if ((iVar11 < 0) || (iVar10 != 0x46)) goto LAB_00433fde;
          if (local_d == '\0') {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c598,DAT_0043c594);
            _local_28 = (longdouble)CONCAT28(DAT_0043c59c,local_28);
          }
          else {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c5a2,DAT_0043c59e);
            _local_28 = (longdouble)CONCAT28(DAT_0043c5a6,local_28);
          }
          goto LAB_00433fb3;
        }
        if (uVar6 == 0x4e) {
          local_18 = local_18 + 1;
          iVar10 = (*(code *)param_2)();
          iVar11 = param_5 + -1;
          if ((iVar11 < 0) || (iVar10 != 0x41)) goto LAB_00433fde;
          local_18 = local_18 + 1;
          iVar10 = (*(code *)param_2)();
          iVar11 = param_5 + -2;
          if ((iVar11 < 0) || (iVar10 != 0x4e)) goto LAB_00433fde;
          if (local_d == '\0') {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c5ac,DAT_0043c5a8);
            _local_28 = (longdouble)CONCAT28(DAT_0043c5b0,local_28);
          }
          else {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c5b6,DAT_0043c5b2);
            _local_28 = (longdouble)CONCAT28(DAT_0043c5ba,local_28);
          }
          goto LAB_00433fb3;
        }
      }
      local_e = '\0';
      iVar10 = iVar9;
      iVar11 = local_c;
      if (uVar6 == (int)(char)bVar1) {
        if (local_8 != 0x8000) goto LAB_00433e5b;
        local_8 = iVar9;
        if (iVar9 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar6 < 0x30) || (0x39 < (int)uVar6)) goto LAB_00433e5b;
        uVar6 = uVar6 - 0x30;
        iVar10 = iVar9 + 1;
        if (iVar10 < 1) {
          *local_38 = (short)uVar6;
          iVar11 = local_c;
          if (uVar6 == 0) {
            iVar10 = -1;
            if (local_8 != 0x8000) {
              local_8 = local_8 + -1;
            }
          }
          else {
            iVar10 = 1;
          }
        }
        else if (iVar10 < 10) {
          _local_28 = (longdouble)CONCAT64(stack0xffffffdc,local_28._0_4_ * 10 + uVar6);
        }
        else if (iVar10 <= local_c) {
          local_40 = local_28._0_4_;
          local_3c = local_28._4_4_;
          iVar8 = FUN_0043329c(&local_40,uVar6);
          iVar11 = iVar9;
          if (iVar8 == 0) {
            local_28 = (undefined1  [8])CONCAT44(local_3c,local_40);
            iVar11 = local_c;
          }
        }
      }
    }
  }
  uVar6 = 0x65;
LAB_00433e5b:
  iVar11 = param_5;
  if (iVar10 == -2) {
LAB_00433fde:
    param_5 = iVar11;
    local_1c = 0;
LAB_00433fe3:
    if (-1 < param_5) {
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    _local_28 = (longdouble)(unkuint10)0;
  }
  else {
    if (local_8 == 0x8000) {
      local_8 = iVar10;
    }
    iVar11 = 0;
    if ((uVar6 == 0x65) || (uVar6 == 0x45)) {
      bVar2 = true;
LAB_00433e83:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar9 = (*(code *)param_2)();
        if (!bVar2) goto LAB_00433eb0;
        bVar2 = false;
        if (iVar9 != 0x2d) goto LAB_00433eab;
        local_10 = '\x01';
      }
    }
    else {
LAB_00433ed6:
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    if (local_10 != '\0') {
      iVar11 = -iVar11;
      local_11 = -local_11;
    }
    if (iVar10 < 0) {
      _local_28 = (longdouble)(unkuint10)0;
    }
    else if (local_11 == '\0') {
      if (local_c < iVar10) {
        iVar10 = local_c;
      }
      iVar11 = iVar11 + (local_8 - iVar10);
      FUN_00433158((int)local_28);
      _local_28 = in_ST0;
      if (iVar11 != 0) {
        FUN_00434ce8();
        if (iVar11 < 0) {
          _local_28 = _local_28 / in_ST1;
        }
        else {
          _local_28 = in_ST1 * _local_28;
        }
      }
    }
    else {
      if (local_11 == '\x01') {
        local_38[3] = 0xffff;
        local_38[2] = 0xffff;
        local_38[1] = 0xffff;
        *local_38 = 0xffff;
        local_38[4] = 0x7ffe;
      }
      else {
        _local_28 = (longdouble)(unkuint10)0;
      }
      local_1c = 2;
    }
  }
  if (local_d != '\0') {
    _local_28 = -_local_28;
  }
LAB_00433fb3:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = local_28._0_4_;
  param_1[1] = local_28._4_4_;
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_00433eab:
  if (iVar9 != 0x2b) {
LAB_00433eb0:
    if ((iVar9 < 0x30) || (0x39 < iVar9)) goto LAB_00433ed6;
    iVar11 = iVar9 + iVar11 * 10 + -0x30;
    if (0x1344 < iVar11) {
      local_11 = '\x01';
    }
  }
  goto LAB_00433e83;
}

