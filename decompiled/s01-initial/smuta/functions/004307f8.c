/* Ghidra address: 004307f8; FUN_004307f8 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_004307f8(void)

{
  float10 fVar1;
  float10 fVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 *in_stack_00000004;
  int in_stack_00000008;
  uint *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined1 *local_28;
  int local_18;
  undefined1 local_10 [8];
  ushort uStack_8;
  
  if (in_stack_00000014 == 2) {
    _local_10 = (float10)*(float *)in_stack_00000004;
  }
  else if (in_stack_00000014 == 6) {
    _local_10 = (float10)*(double *)in_stack_00000004;
  }
  else if (in_stack_00000014 == 8) {
    _local_10 = *in_stack_00000004;
  }
  fVar1 = _local_10;
  uVar3 = uStack_8;
  uVar4 = (uint)uStack_8;
  _local_10 = (float10)CONCAT28(uStack_8 & 0x7fff,local_10);
  fVar2 = _local_10;
  *in_stack_0000000c = (uint)((uVar3 & 0x8000) != 0);
  uVar3 = FUN_0042fca8();
  uVar3 = uVar3 & 0x4700;
  if (uVar3 != 0x4000) {
    if (uVar3 == 0x500) {
      return 0x7fff;
    }
    if (uVar3 == 0x100) {
      return 0x7ffe;
    }
    local_10[7] = SUB101(fVar1,7);
    uVar4 = ((uVar4 & 0x7fff) - 0x3fff) * 0x4d10 + ((uint)local_10[7] * 2 & 0xff) * 0x4d;
    local_18 = (int)uVar4 >> 0x10;
    if ((uVar4 & 0xffff) != 0) {
      local_18 = local_18 + 1;
    }
    iVar10 = in_stack_00000008;
    if ((0 < in_stack_00000008) || (iVar10 = local_18 - in_stack_00000008, -1 < iVar10)) {
      if (0x13 < iVar10) {
        iVar10 = 0x13;
      }
      _local_10 = fVar2;
      for (iVar9 = iVar10 - local_18; iVar9 != 0; iVar9 = iVar9 + iVar6) {
        iVar6 = iVar9;
        if (iVar9 < 0) {
          iVar6 = -iVar9;
        }
        if (0x1344 < iVar6) {
          iVar6 = 0x1344;
        }
        FUN_00430b74();
        if (iVar9 < 0) {
          _local_10 = _local_10 / in_ST0;
        }
        else {
          _local_10 = _local_10 * in_ST0;
          iVar6 = -iVar6;
        }
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = in_ST6;
      }
      FUN_00430b74();
      if (_local_10 <= in_ST0) {
        FUN_00430b74();
        iVar9 = iVar10;
        if (_local_10 < in_ST1) {
          local_18 = local_18 + -1;
          iVar9 = iVar10 + -1;
          if (0 < in_stack_00000008) {
            _local_10 = _local_10 * (float10)10;
            iVar9 = iVar10;
          }
        }
      }
      else {
        local_18 = local_18 + 1;
        iVar9 = iVar10 + 1;
        if ((iVar9 < 0x14) && (0 < in_stack_00000008)) {
          _local_10 = _local_10 / (float10)10;
          iVar9 = iVar10;
        }
      }
      if (-1 < iVar9) {
        FUN_0042fc84();
        local_28 = (undefined1 *)(in_stack_00000010 + iVar9);
        bVar8 = 0;
        *local_28 = 0;
        pcVar7 = local_28 + -1;
        if (iVar9 == 0) {
          if (local_10[0] != '\x01') goto LAB_0043087f;
          bVar8 = 0;
        }
        else {
          do {
            uVar5 = FUN_0042fcbc();
            bVar8 = bVar8 | (byte)uVar5;
            *pcVar7 = (byte)uVar5 + 0x30;
            pcVar7 = pcVar7 + -1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        if (bVar8 == 0) {
          local_18 = local_18 + 1;
          if (in_stack_00000008 < 1) {
            *local_28 = 0x30;
          }
          local_28 = local_28 + 1;
          pcVar7[1] = '1';
        }
        if (in_stack_00000008 < 1) {
          in_stack_00000008 = local_18 - in_stack_00000008;
        }
        if (0x28 < in_stack_00000008) {
          in_stack_00000008 = 0x28;
        }
        *local_28 = 0;
        iVar10 = in_stack_00000008 - ((int)local_28 - in_stack_00000010);
        if (iVar10 < 1) {
          return local_18;
        }
        FUN_00429054();
        local_28[iVar10] = 0;
        return local_18;
      }
    }
  }
LAB_0043087f:
  if (in_stack_00000008 < 1) {
    in_stack_00000008 = 1 - in_stack_00000008;
  }
  if (0x28 < in_stack_00000008) {
    in_stack_00000008 = 0x28;
  }
  FUN_00429054();
  *(undefined1 *)(in_stack_00000010 + in_stack_00000008) = 0;
  *in_stack_0000000c = 0;
  return 1;
}

