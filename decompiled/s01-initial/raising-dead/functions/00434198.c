/* Ghidra address: 00434198; FUN_00434198 */

void __cdecl
FUN_00434198(undefined4 *param_1,undefined *param_2,undefined *param_3,uint param_4,int param_5,
            int *param_6,undefined4 *param_7)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longdouble in_ST0;
  longdouble in_ST1;
  uint uVar10;
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
  iVar8 = -2;
  local_1c = 1;
  _local_28 = (longdouble)(unkuint10)0;
  uVar10 = 0xe;
  puVar3 = (ushort *)FUN_004324dc(0xe);
  uVar1 = *puVar3;
  uVar5 = (uint)uVar1;
  do {
    local_18 = local_18 + 1;
    uVar4 = (*(code *)param_2)(uVar5,param_4,uVar10,param_4);
    if (uVar4 == 0xffffffff) {
      local_1c = 0xffffffff;
      goto LAB_004344c4;
    }
    uVar10 = uVar4;
    uVar5 = FUN_00432694((ushort)uVar4);
  } while (uVar5 != 0);
  param_5 = param_5 + -1;
  if (-1 < param_5) {
    iVar9 = local_c;
    if (uVar4 == 0x2b) {
      local_f = '\x01';
    }
    else {
      uVar5 = 0;
      iVar7 = iVar8;
      if (uVar4 != 0x2d) goto LAB_00434256;
      local_f = '\x01';
      local_d = '\x01';
    }
    while (local_c = iVar9, param_5 = param_5 + -1, -1 < param_5) {
      local_18 = local_18 + 1;
      uVar10 = param_4;
      uVar5 = (*(code *)param_2)();
      uVar4 = uVar5;
      iVar7 = iVar8;
LAB_00434256:
      if ((local_e == '\x01') && (local_f != '\0')) {
        if (uVar4 == 0x49) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)(uVar5,param_4,uVar10);
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_004344bf;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x46)) goto LAB_004344bf;
          if (local_d == '\0') {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c5c0,DAT_0043c5bc);
            _local_28 = (longdouble)CONCAT28(DAT_0043c5c4,local_28);
          }
          else {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c5ca,DAT_0043c5c6);
            _local_28 = (longdouble)CONCAT28(DAT_0043c5ce,local_28);
          }
          goto LAB_00434494;
        }
        if (uVar4 == 0x4e) {
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -1;
          if ((iVar9 < 0) || (iVar8 != 0x41)) goto LAB_004344bf;
          local_18 = local_18 + 1;
          iVar8 = (*(code *)param_2)();
          iVar9 = param_5 + -2;
          if ((iVar9 < 0) || (iVar8 != 0x4e)) goto LAB_004344bf;
          if (local_d == '\0') {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c5d4,DAT_0043c5d0);
            _local_28 = (longdouble)CONCAT28(DAT_0043c5d8,local_28);
          }
          else {
            local_28 = (undefined1  [8])CONCAT44(DAT_0043c5de,DAT_0043c5da);
            _local_28 = (longdouble)CONCAT28(DAT_0043c5e2,local_28);
          }
          goto LAB_00434494;
        }
      }
      local_e = '\0';
      iVar8 = iVar7;
      iVar9 = local_c;
      if (uVar4 == uVar1) {
        if (local_8 != 0x8000) goto LAB_0043433c;
        local_8 = iVar7;
        if (iVar7 < 1) {
          local_8 = 0;
        }
      }
      else {
        if (((int)uVar4 < 0x30) || (0x39 < (int)uVar4)) goto LAB_0043433c;
        uVar4 = uVar4 - 0x30;
        iVar8 = iVar7 + 1;
        if (iVar8 < 1) {
          *local_38 = (short)uVar4;
          iVar9 = local_c;
          if (uVar4 == 0) {
            iVar8 = -1;
            if (local_8 != 0x8000) {
              local_8 = local_8 + -1;
            }
          }
          else {
            iVar8 = 1;
          }
        }
        else if (iVar8 < 10) {
          _local_28 = (longdouble)CONCAT64(stack0xffffffdc,local_28._0_4_ * 10 + uVar4);
        }
        else if (iVar8 <= local_c) {
          local_40 = local_28._0_4_;
          local_3c = local_28._4_4_;
          iVar6 = FUN_0043329c(&local_40,uVar4);
          iVar9 = iVar7;
          if (iVar6 == 0) {
            local_28 = (undefined1  [8])CONCAT44(local_3c,local_40);
            iVar9 = local_c;
          }
        }
      }
    }
  }
  uVar4 = 0x65;
LAB_0043433c:
  iVar9 = param_5;
  if (iVar8 == -2) {
LAB_004344bf:
    param_5 = iVar9;
    local_1c = 0;
LAB_004344c4:
    if (-1 < param_5) {
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    _local_28 = (longdouble)(unkuint10)0;
  }
  else {
    if (local_8 == 0x8000) {
      local_8 = iVar8;
    }
    iVar9 = 0;
    if ((uVar4 == 0x65) || (uVar4 == 0x45)) {
      bVar2 = true;
LAB_00434364:
      while (param_5 = param_5 + -1, -1 < param_5) {
        local_18 = local_18 + 1;
        iVar7 = (*(code *)param_2)();
        if (!bVar2) goto LAB_00434391;
        bVar2 = false;
        if (iVar7 != 0x2d) goto LAB_0043438c;
        local_10 = '\x01';
      }
    }
    else {
LAB_004343b7:
      (*(code *)param_3)();
      local_18 = local_18 + -1;
    }
    if (local_10 != '\0') {
      iVar9 = -iVar9;
      local_11 = -local_11;
    }
    if (iVar8 < 0) {
      _local_28 = (longdouble)(unkuint10)0;
    }
    else if (local_11 == '\0') {
      if (local_c < iVar8) {
        iVar8 = local_c;
      }
      iVar9 = iVar9 + (local_8 - iVar8);
      FUN_00433158((int)local_28);
      _local_28 = in_ST0;
      if (iVar9 != 0) {
        FUN_00434ce8();
        if (iVar9 < 0) {
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
LAB_00434494:
  *param_6 = *param_6 + local_18;
  *param_7 = local_1c;
  *param_1 = local_28._0_4_;
  param_1[1] = local_28._4_4_;
  *(undefined2 *)(param_1 + 2) = uStack_20;
  return;
LAB_0043438c:
  if (iVar7 != 0x2b) {
LAB_00434391:
    if ((iVar7 < 0x30) || (0x39 < iVar7)) goto LAB_004343b7;
    iVar9 = iVar7 + iVar9 * 10 + -0x30;
    if (0x1344 < iVar9) {
      local_11 = '\x01';
    }
  }
  goto LAB_00434364;
}

