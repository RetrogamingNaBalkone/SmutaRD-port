/* Ghidra address: 0042ef9c; FUN_0042ef9c */

uint __cdecl FUN_0042ef9c(undefined4 param_1,undefined4 param_2,byte *param_3,uint *param_4)

{
  char *pcVar1;
  CHAR CVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  CHAR *pCVar7;
  int iVar8;
  uint *puVar9;
  CHAR *pCVar10;
  byte bVar11;
  char cVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  bool bVar16;
  undefined1 local_548 [80];
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  uint local_4ec;
  int local_4e8;
  uint local_4e4 [256];
  undefined1 local_e4 [2];
  undefined2 local_e2;
  undefined1 local_dc;
  CHAR local_83 [43];
  char *local_58;
  int local_54;
  int local_50;
  uint *local_48;
  char *local_44;
  char *local_40;
  uint local_3c;
  ushort local_36;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  char local_21;
  int local_20;
  uint *local_1c;
  byte *local_18;
  int local_14;
  byte local_d;
  uint local_c;
  uint local_8;
  
  local_4e8 = 0;
  local_4ec = 0;
  local_4f8 = 0;
  local_4f4 = param_1;
  local_4f0 = param_2;
LAB_0042efd1:
  pbVar13 = param_3;
  bVar11 = *pbVar13;
  param_3 = pbVar13 + 1;
  if (bVar11 != 0) {
    if (bVar11 == 0x25) {
      if (*param_3 != 0x25) {
        uVar6 = 0;
        local_14 = 0;
        local_d = 0;
        local_c = 0xffffffff;
        local_8 = 0xffffffff;
        uVar15 = 0;
        bVar5 = false;
        bVar16 = false;
        bVar4 = false;
        local_20 = 0;
switchD_0042f072_default:
        pbVar14 = param_3;
        bVar3 = false;
        bVar11 = *pbVar14;
        param_3 = pbVar14 + 1;
        local_18 = pbVar13;
        if (((char)bVar11 < ' ') || ('\x7f' < (char)bVar11)) goto switchD_0042f072_caseD_15;
        switch((&DAT_0043bab2)[(byte)(bVar11 - 0x20)]) {
        case 0:
          local_18 = pbVar13;
          if (uVar6 != 0) goto switchD_0042f072_caseD_15;
          if (local_d != 0x2b) {
            local_d = bVar11;
          }
          goto switchD_0042f072_default;
        case 1:
          local_18 = pbVar13;
          if (uVar6 != 0) goto switchD_0042f072_caseD_15;
          uVar15 = uVar15 | 1;
          goto switchD_0042f072_default;
        case 2:
          local_34 = *param_4;
          if (uVar6 < 2) {
            local_8 = local_34;
            if ((int)local_34 < 0) {
              local_8 = -local_34;
              bVar4 = true;
            }
            uVar6 = 3;
            param_4 = param_4 + 1;
          }
          else {
            local_18 = pbVar13;
            if (uVar6 != 4) goto switchD_0042f072_caseD_15;
            uVar6 = 5;
            param_4 = param_4 + 1;
            local_c = local_34;
          }
          goto switchD_0042f072_default;
        case 3:
          local_18 = pbVar13;
          if (uVar6 != 0) goto switchD_0042f072_caseD_15;
          bVar4 = true;
          goto switchD_0042f072_default;
        case 4:
          local_18 = pbVar13;
          if (3 < uVar6) goto switchD_0042f072_caseD_15;
          uVar6 = 4;
          local_c = local_c + 1;
          goto switchD_0042f072_default;
        case 5:
          goto switchD_0042f072_caseD_5;
        case 6:
          uVar15 = uVar15 | 0x10;
          uVar6 = 5;
          goto switchD_0042f072_default;
        case 7:
          uVar6 = 5;
          uVar15 = uVar15 & 0xffffffef;
          bVar5 = true;
          goto switchD_0042f072_default;
        case 8:
          uVar6 = 5;
          uVar15 = uVar15 & 0xffffffef | 0x200;
          goto switchD_0042f072_default;
        case 9:
          if (uVar6 == 0) {
            if (!bVar4) {
              bVar16 = true;
              uVar6 = 1;
            }
          }
          else {
switchD_0042f072_caseD_5:
            cVar12 = bVar11 - 0x30;
            if (uVar6 < 3) {
              uVar6 = 2;
              if (local_8 == 0xffffffff) {
                local_8 = (uint)cVar12;
              }
              else {
                local_8 = local_8 * 10 + (int)cVar12;
              }
            }
            else {
              local_18 = pbVar13;
              if (uVar6 != 4) goto switchD_0042f072_caseD_15;
              local_c = local_c * 10 + (int)cVar12;
            }
          }
          goto switchD_0042f072_default;
        case 10:
          goto switchD_0042f072_caseD_a;
        case 0xb:
          local_3c = 8;
          break;
        case 0xc:
          local_3c = 10;
          break;
        case 0xd:
          local_3c = 0x10;
          local_21 = bVar11 - 0x17;
          break;
        case 0xe:
          local_1c = (uint *)*param_4;
          FUN_0042ef68((uint)local_1c,(int)local_e4);
          local_dc = 0;
          local_1c = (uint *)local_e4;
          param_4 = param_4 + 1;
          goto LAB_0042f5fd;
        case 0xf:
          local_1c = (uint *)(local_e4 + 1);
          thunk_FUN_004333c4();
          param_4 = (uint *)thunk_FUN_004333c4();
          goto LAB_0042f5fd;
        case 0x10:
          goto switchD_0042f072_caseD_10;
        case 0x11:
          goto switchD_0042f072_caseD_11;
        case 0x12:
          if ((uVar15 & 0x210) == 0) {
            uVar15 = uVar15 | 0x10;
          }
switchD_0042f072_caseD_10:
          if ((uVar15 & 0x10) == 0) {
            local_1c = (uint *)local_e4;
            local_e4[1] = 0;
            local_e4[0] = (byte)*param_4;
            local_20 = 0;
            local_44 = (char *)0x1;
            param_4 = param_4 + 1;
          }
          else {
            local_1c = (uint *)local_e4;
            local_e4 = SUB42(*param_4,0);
            local_e2 = 0;
            local_20 = 1;
            local_44 = (char *)0x1;
            param_4 = param_4 + 1;
          }
          goto LAB_0042f671;
        case 0x13:
          if ((uVar15 & 0x210) == 0) {
            uVar15 = uVar15 | 0x10;
          }
switchD_0042f072_caseD_11:
          if ((uVar15 & 0x10) == 0) {
            local_1c = (uint *)*param_4;
            local_20 = 0;
            if (local_1c == (uint *)0x0) {
              local_1c = (uint *)s__null__0043ba9c;
            }
          }
          else {
            local_1c = (uint *)*param_4;
            local_20 = 1;
            if (local_1c == (uint *)0x0) {
              local_1c = (uint *)&DAT_0043baa4;
            }
          }
          param_4 = param_4 + 1;
          if (local_20 == 0) {
            uVar6 = local_c;
            if ((int)local_c < 0) {
              uVar6 = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar9 = local_1c; (uVar6 != 0 && ((byte)*puVar9 != 0));
                puVar9 = (uint *)((int)puVar9 + 1)) {
              uVar6 = uVar6 - 1;
              local_44 = local_44 + 1;
            }
          }
          else {
            uVar6 = local_c;
            if ((int)local_c < 0) {
              uVar6 = 0x7fffffff;
            }
            local_44 = (char *)0x0;
            for (puVar9 = local_1c; (uVar6 != 0 && ((ushort)*puVar9 != 0));
                puVar9 = (uint *)((int)puVar9 + 2)) {
              uVar6 = uVar6 - 1;
              local_44 = local_44 + 1;
            }
          }
          goto LAB_0042f671;
        case 0x14:
          puVar9 = param_4 + 1;
          local_1c = (uint *)*param_4;
          param_4 = puVar9;
          if ((uVar15 & 0x10) == 0) {
            if ((uVar15 & 0x200) == 0) {
              *local_1c = local_4ec;
            }
            else {
              *(ushort *)local_1c = (ushort)local_4ec;
            }
          }
          else {
            *local_1c = local_4ec;
          }
          goto LAB_0042efd1;
        case 0x15:
        case 0x16:
        case 0x17:
          goto switchD_0042f072_caseD_15;
        case 0x18:
          uVar6 = 5;
          goto switchD_0042f072_default;
        case 0x19:
          uVar6 = 5;
          goto switchD_0042f072_default;
        case 0x1a:
          if ((*param_3 == 0x36) && (pbVar14[2] == 0x34)) {
            uVar15 = uVar15 & 0xfffffdef;
            bVar5 = true;
            uVar6 = 5;
            param_3 = pbVar14 + 3;
          }
          else if ((*param_3 == 0x33) && (pbVar14[2] == 0x32)) {
            uVar15 = uVar15 & 0xfffffcff | 0x10;
            bVar5 = false;
            uVar6 = 5;
            param_3 = pbVar14 + 3;
          }
          else if ((*param_3 == 0x31) && (pbVar14[2] == 0x36)) {
            uVar15 = uVar15 & 0xfffffeef | 0x200;
            bVar5 = false;
            uVar6 = 5;
            param_3 = pbVar14 + 3;
          }
          else if (*param_3 == 0x38) {
            uVar15 = uVar15 & 0xfffffcef;
            bVar5 = false;
            uVar6 = 5;
            param_3 = pbVar14 + 2;
          }
        default:
          goto switchD_0042f072_default;
        }
        local_d = 0;
        cVar12 = '\0';
        goto LAB_0042f2ed;
      }
      param_3 = pbVar13 + 2;
      bVar11 = 0x25;
    }
    if ((((&DAT_0053e30d)[bVar11] & 4) != 0) && (*param_3 != 0)) {
      FUN_0042ef40(bVar11,(int)local_548);
      bVar11 = *param_3;
      param_3 = param_3 + 1;
    }
    FUN_0042ef40(bVar11,(int)local_548);
    goto LAB_0042efd1;
  }
  goto LAB_0042f89b;
switchD_0042f072_caseD_a:
  local_3c = 10;
  cVar12 = '\x01';
LAB_0042f2ed:
  if (bVar5) {
    local_2c = *param_4;
    local_28 = param_4[1];
    param_4 = param_4 + 2;
  }
  else if ((uVar15 & 0x10) == 0) {
    if ((uVar15 & 0x200) == 0) {
      local_34 = *param_4;
      local_2c = local_34;
      if (cVar12 == '\0') {
        local_28 = 0;
        param_4 = param_4 + 1;
      }
      else {
        local_28 = (int)local_34 >> 0x1f;
        param_4 = param_4 + 1;
      }
    }
    else {
      local_36 = (ushort)*param_4;
      if (cVar12 == '\0') {
        local_2c = (uint)local_36;
        local_28 = 0;
        param_4 = param_4 + 1;
      }
      else {
        local_2c = (uint)(short)local_36;
        local_28 = (int)local_2c >> 0x1f;
        param_4 = param_4 + 1;
      }
    }
  }
  else {
    local_30 = *param_4;
    local_2c = local_30;
    if (cVar12 == '\0') {
      local_28 = 0;
      param_4 = param_4 + 1;
    }
    else {
      local_28 = (int)local_30 >> 0x1f;
      param_4 = param_4 + 1;
    }
  }
  local_1c = (uint *)(local_e4 + 1);
  if ((local_28 == 0) && (local_2c == 0)) {
    if (local_c == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
      local_e4[1] = 0;
      goto LAB_0042f3de;
    }
  }
  else {
    uVar15 = uVar15 | 4;
  }
  FUN_004331c0(local_2c,local_28,(char *)local_1c,local_3c,cVar12,local_21);
LAB_0042f3de:
  if ((int)local_c < 0) {
LAB_0042f5fd:
    if ((bVar16) && (0 < (int)local_8)) {
      local_44 = FUN_0042a144(local_1c);
      if ((byte)*local_1c == 0x2d) {
        local_44 = local_44 + -1;
      }
      if ((int)local_44 < (int)local_8) {
        local_14 = local_8 - (int)local_44;
      }
    }
    if (((byte)*local_1c == 0x2d) || (local_d != 0)) {
      if ((byte)*local_1c != 0x2d) {
        local_1c = (uint *)((int)local_1c + -1);
        *(byte *)local_1c = local_d;
      }
      if ((0 < local_14) && ((int)local_c < 0)) {
        local_14 = local_14 + -1;
      }
    }
    local_44 = FUN_0042a144(local_1c);
  }
  else {
    local_40 = FUN_0042a144(local_1c);
    local_44 = local_40;
    if ((byte)*local_1c == 0x2d) {
      local_40 = local_40 + -1;
    }
    else if (local_d != 0) {
      local_44 = local_40 + 1;
      local_1c = (uint *)((int)local_1c + -1);
      *(byte *)local_1c = local_d;
    }
    if ((int)local_40 < (int)local_c) {
      local_14 = local_c - (int)local_40;
    }
  }
LAB_0042f671:
  if ((uVar15 & 5) == 5) {
    if (bVar11 == 0x6f) {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else if ((bVar11 == 0x78) || (bVar11 == 0x58)) {
      bVar3 = true;
      local_8 = local_8 - 2;
      local_14 = local_14 + -2;
      if (local_14 < 0) {
        local_14 = 0;
      }
    }
  }
  local_44 = local_44 + local_14;
  if ((!bVar4) && ((int)local_44 < (int)local_8)) {
    do {
      FUN_0042ef40(0x20,(int)local_548);
      local_8 = local_8 - 1;
    } while ((int)local_44 < (int)local_8);
  }
  if (bVar3) {
    FUN_0042ef40(0x30,(int)local_548);
    FUN_0042ef40(bVar11,(int)local_548);
  }
  if (0 < local_14) {
    local_44 = local_44 + -local_14;
    local_8 = local_8 - local_14;
    if ((((byte)*local_1c == 0x2d) || ((byte)*local_1c == 0x20)) || ((byte)*local_1c == 0x2b)) {
      uVar15 = *local_1c;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_0042ef40((byte)uVar15,(int)local_548);
      local_44 = local_44 + -1;
      local_8 = local_8 - 1;
    }
    while (iVar8 = local_14 + -1, bVar16 = local_14 != 0, local_14 = iVar8, bVar16) {
      FUN_0042ef40(0x30,(int)local_548);
    }
  }
  if (local_20 != 0) {
    local_48 = local_1c;
    local_50 = 0;
    local_58 = local_44;
    while (pcVar1 = local_58 + -1, bVar16 = 0 < (int)local_58, local_58 = pcVar1, bVar16) {
      uVar15 = *local_48;
      local_48 = (uint *)((int)local_48 + 2);
      local_54 = FUN_00432874(local_83,(ushort)uVar15);
      if (local_54 < 1) break;
      iVar8 = 0;
      pCVar7 = local_83;
      pCVar10 = (CHAR *)((int)local_4e4 + local_50);
      if (0 < local_54) {
        do {
          CVar2 = *pCVar7;
          pCVar7 = pCVar7 + 1;
          *pCVar10 = CVar2;
          pCVar10 = pCVar10 + 1;
          local_50 = local_50 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_54);
      }
    }
    local_1c = local_4e4;
  }
  if (local_44 != (char *)0x0) {
    local_8 = local_8 - (int)local_44;
    while (local_44 != (char *)0x0) {
      uVar15 = *local_1c;
      local_44 = local_44 + -1;
      local_1c = (uint *)((int)local_1c + 1);
      FUN_0042ef40((byte)uVar15,(int)local_548);
    }
    local_44 = (char *)0xffffffff;
  }
  while (uVar15 = local_8 - 1, bVar16 = 0 < (int)local_8, local_8 = uVar15, bVar16) {
    FUN_0042ef40(0x20,(int)local_548);
  }
  goto LAB_0042efd1;
switchD_0042f072_caseD_15:
  while( true ) {
    pbVar13 = local_18 + 1;
    bVar11 = *local_18;
    local_18 = pbVar13;
    if (bVar11 == 0) break;
    FUN_0042ef40(bVar11,(int)local_548);
  }
LAB_0042f89b:
  FUN_0042ef10((int)local_548);
  if (local_4e8 != 0) {
    local_4ec = 0xffffffff;
  }
  return local_4ec;
}

