/* Ghidra address: 0042d210; FUN_0042d210 */

/* WARNING: Removing unreachable block (ram,0x0042d85e) */

undefined4 FUN_0042d210(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  char *pcVar11;
  uint uVar12;
  bool bVar13;
  char *in_stack_0000000c;
  uint *in_stack_00000010;
  char local_5c [8];
  undefined1 local_54;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  char *local_20;
  char local_19;
  char *local_18;
  int local_14;
  char local_d;
  uint local_c;
  uint local_8;
  
LAB_0042d236:
  pcVar11 = in_stack_0000000c;
  in_stack_0000000c = pcVar11 + 1;
  if (*pcVar11 != '\0') {
    if (*pcVar11 == '%') {
      if (*in_stack_0000000c != '%') {
        uVar9 = 0;
        local_d = '\0';
        local_14 = 0;
        local_c = 0xffffffff;
        local_8 = 0xffffffff;
        uVar12 = 0;
        bVar7 = false;
        bVar13 = false;
        bVar6 = false;
        bVar5 = false;
switchD_0042d29d_default:
        bVar4 = false;
        cVar10 = *in_stack_0000000c;
        in_stack_0000000c = in_stack_0000000c + 1;
        local_18 = pcVar11;
        if (cVar10 < ' ') goto switchD_0042d29d_caseD_13;
        switch((&DAT_004384e7)[cVar10]) {
        case 0:
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_0042d29d_caseD_13;
          if (local_d != '+') {
            local_d = cVar10;
          }
          goto switchD_0042d29d_default;
        case 1:
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_0042d29d_caseD_13;
          uVar12 = 1;
          goto switchD_0042d29d_default;
        case 2:
          uVar3 = *in_stack_00000010;
          if (uVar9 < 2) {
            local_8 = uVar3;
            if ((int)uVar3 < 0) {
              bVar5 = true;
              local_8 = -uVar3;
            }
            uVar9 = 3;
            in_stack_00000010 = in_stack_00000010 + 1;
          }
          else {
            local_18 = pcVar11;
            if (uVar9 != 4) goto switchD_0042d29d_caseD_13;
            uVar9 = 5;
            in_stack_00000010 = in_stack_00000010 + 1;
            local_c = uVar3;
          }
          goto switchD_0042d29d_default;
        case 3:
          local_18 = pcVar11;
          if (uVar9 != 0) goto switchD_0042d29d_caseD_13;
          bVar5 = true;
          goto switchD_0042d29d_default;
        case 4:
          local_18 = pcVar11;
          if (3 < uVar9) goto switchD_0042d29d_caseD_13;
          uVar9 = 4;
          local_c = local_c + 1;
          goto switchD_0042d29d_default;
        case 5:
          goto switchD_0042d29d_caseD_5;
        case 6:
          bVar6 = true;
          uVar9 = 5;
          goto switchD_0042d29d_default;
        case 7:
          uVar9 = 5;
          bVar6 = false;
          goto switchD_0042d29d_default;
        case 8:
          uVar9 = 5;
          bVar7 = true;
          bVar6 = false;
          goto switchD_0042d29d_default;
        case 9:
          if (uVar9 == 0) {
            if (!bVar5) {
              bVar13 = true;
              uVar9 = 1;
            }
          }
          else {
switchD_0042d29d_caseD_5:
            cVar10 = cVar10 + -0x30;
            if (uVar9 < 3) {
              uVar9 = 2;
              if (local_8 == 0xffffffff) {
                local_8 = (uint)cVar10;
              }
              else {
                local_8 = local_8 * 10 + (int)cVar10;
              }
            }
            else {
              local_18 = pcVar11;
              if (uVar9 != 4) goto switchD_0042d29d_caseD_13;
              local_c = local_c * 10 + (int)cVar10;
            }
          }
          goto switchD_0042d29d_default;
        case 10:
          goto switchD_0042d29d_caseD_a;
        case 0xb:
          local_24 = 8;
          break;
        case 0xc:
          local_24 = 10;
          break;
        case 0xd:
          local_24 = 0x10;
          local_19 = cVar10 + -0x17;
          break;
        case 0xe:
          local_20 = (char *)*in_stack_00000010;
          FUN_0042d1dc();
          local_54 = 0;
          local_20 = local_5c;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042d630;
        case 0xf:
          local_20 = local_5c + 1;
          thunk_FUN_0042fe00();
          in_stack_00000010 = (uint *)thunk_FUN_0042fe00();
          goto LAB_0042d630;
        case 0x10:
          local_20 = local_5c;
          local_5c[0] = (char)*in_stack_00000010;
          local_5c[1] = 0;
          local_2c = 1;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042d6a1;
        case 0x11:
          puVar1 = in_stack_00000010 + 1;
          local_20 = (char *)*in_stack_00000010;
          if (local_20 == (char *)0x0) {
            local_20 = &DAT_00438500;
          }
          local_2c = FUN_00429114();
          in_stack_00000010 = puVar1;
          if (((int)local_c < (int)local_2c) && (-1 < (int)local_c)) {
            local_2c = local_c;
          }
          goto LAB_0042d6a1;
        case 0x12:
          puVar1 = in_stack_00000010 + 1;
          local_20 = (char *)*in_stack_00000010;
          in_stack_00000010 = puVar1;
          if (bVar6) {
            local_20[0] = '\0';
            local_20[1] = '\0';
            local_20[2] = '\0';
            local_20[3] = '\0';
          }
          else if (bVar7) {
            local_20[0] = '\0';
            local_20[1] = '\0';
          }
          else {
            local_20[0] = '\0';
            local_20[1] = '\0';
            local_20[2] = '\0';
            local_20[3] = '\0';
          }
          goto LAB_0042d236;
        case 0x13:
        case 0x14:
        case 0x15:
          goto switchD_0042d29d_caseD_13;
        case 0x16:
          uVar9 = 5;
          goto switchD_0042d29d_default;
        case 0x17:
          uVar9 = 5;
        default:
          goto switchD_0042d29d_default;
        }
        local_d = '\0';
        bVar8 = false;
        goto LAB_0042d47d;
      }
      in_stack_0000000c = pcVar11 + 2;
    }
    FUN_0042d1b4();
    goto LAB_0042d236;
  }
  goto LAB_0042d84b;
switchD_0042d29d_caseD_a:
  local_24 = 10;
  bVar8 = true;
LAB_0042d47d:
  if (bVar6) {
    uVar9 = *in_stack_00000010;
  }
  else if (bVar7) {
    if (bVar8) {
      uVar9 = (uint)(short)(ushort)*in_stack_00000010;
    }
    else {
      uVar9 = (uint)(ushort)*in_stack_00000010;
    }
  }
  else {
    uVar9 = *in_stack_00000010;
  }
  in_stack_00000010 = in_stack_00000010 + 1;
  local_20 = local_5c + 1;
  if (uVar9 == 0) {
    if (local_c == 0) {
      local_5c[1] = 0;
      goto LAB_0042d4f1;
    }
  }
  else {
    uVar12 = uVar12 | 4;
  }
  FUN_0042ff28();
LAB_0042d4f1:
  if ((int)local_c < 0) {
LAB_0042d630:
    if ((bVar13) && (0 < (int)local_8)) {
      local_2c = FUN_00429114();
      if (*local_20 == '-') {
        local_2c = local_2c + -1;
      }
      if ((int)local_2c < (int)local_8) {
        local_14 = local_8 - local_2c;
      }
    }
    if ((*local_20 == '-') || (local_d != '\0')) {
      if (*local_20 != '-') {
        local_20 = local_20 + -1;
        *local_20 = local_d;
      }
      if ((0 < local_14) && ((int)local_c < 0)) {
        local_14 = local_14 + -1;
      }
    }
    local_2c = FUN_00429114();
  }
  else {
    local_28 = FUN_00429114();
    local_2c = local_28;
    if (*local_20 == '-') {
      local_28 = local_28 - 1;
    }
    else if (local_d != '\0') {
      local_2c = local_28 + 1;
      local_20 = local_20 + -1;
      *local_20 = local_d;
    }
    if ((int)local_28 < (int)local_c) {
      local_14 = local_c - local_28;
    }
  }
LAB_0042d6a1:
  if (uVar12 == 5) {
    if (cVar10 == 'o') {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else if ((cVar10 == 'x') || (cVar10 == 'X')) {
      bVar4 = true;
      local_8 = local_8 - 2;
      local_14 = local_14 + -2;
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
  }
  local_2c = local_2c + local_14;
  if ((!bVar5) && ((int)local_2c < (int)local_8)) {
    do {
      FUN_0042d1b4();
      local_8 = local_8 - 1;
    } while ((int)local_2c < (int)local_8);
  }
  if (bVar4) {
    FUN_0042d1b4();
    FUN_0042d1b4();
  }
  if (0 < local_14) {
    local_2c = local_2c - local_14;
    local_8 = local_8 - local_14;
    cVar10 = *local_20;
    if (((cVar10 == '-') || (cVar10 == ' ')) || (cVar10 == '+')) {
      local_20 = local_20 + 1;
      FUN_0042d1b4();
      local_2c = local_2c + -1;
      local_8 = local_8 - 1;
    }
    while (iVar2 = local_14 + -1, bVar13 = local_14 != 0, local_14 = iVar2, bVar13) {
      FUN_0042d1b4();
    }
  }
  if (local_2c != 0) {
    local_8 = local_8 - local_2c;
    while (local_2c != 0) {
      local_20 = local_20 + 1;
      local_2c = local_2c + -1;
      FUN_0042d1b4();
    }
    local_2c = -1;
  }
  while (uVar12 = local_8 - 1, bVar13 = 0 < (int)local_8, local_8 = uVar12, bVar13) {
    FUN_0042d1b4();
  }
  goto LAB_0042d236;
switchD_0042d29d_caseD_13:
  while (pcVar11 = local_18 + 1, cVar10 = *local_18, local_18 = pcVar11, cVar10 != '\0') {
    FUN_0042d1b4();
  }
LAB_0042d84b:
  FUN_0042d184();
  return 0;
}

