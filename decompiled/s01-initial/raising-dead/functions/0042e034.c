/* Ghidra address: 0042e034; FUN_0042e034 */

int __cdecl
FUN_0042e034(undefined *param_1,undefined *param_2,byte *param_3,byte *param_4,int *param_5)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint extraout_EDX;
  uint extraout_EDX_00;
  char cVar10;
  byte *pbVar11;
  byte local_64 [32];
  byte local_44 [2];
  byte local_42 [2];
  byte *local_40;
  uint local_3c;
  int local_38;
  uint local_28;
  uint local_24;
  byte local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
LAB_0042e04a:
  do {
    local_1d = *param_4;
    if (local_1d == 0) {
      return local_8;
    }
    pbVar9 = param_4 + 1;
    if (local_1d == 0x25) {
      local_1d = param_4[1];
      param_4 = param_4 + 2;
      pbVar9 = param_4;
      if (local_1d != 0x25) {
        local_14 = 0xffffffff;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        local_3c = 0;
        pbVar9 = (byte *)0x25;
LAB_0042e166:
        if ((local_1d & 0x80) == 0) {
          uVar7 = (uint)(char)(&DAT_0043ba1c)[(int)(char)local_1d & 0x7f];
        }
        else {
          uVar7 = 2;
        }
        switch(uVar7) {
        default:
          goto switchD_0042e18c_caseD_0;
        case 2:
          goto switchD_0042e18c_caseD_2;
        case 4:
          bVar4 = true;
          local_1d = *param_4;
          pbVar9 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        case 5:
          if ((int)local_14 < 0) {
            iVar8 = (int)(char)local_1d;
          }
          else {
            iVar8 = local_14 * 10 + (int)(char)local_1d;
          }
          local_14 = iVar8 - 0x30;
          local_1d = *param_4;
          pbVar9 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        case 6:
        case 7:
          if (bVar2) {
            local_3c = 1;
          }
          else if (bVar3) {
            local_3c = 0;
          }
          else if (uVar7 == 7) {
            local_3c = 1;
          }
          if (!bVar4) {
            if (local_3c == 0) {
              local_40 = (byte *)*param_5;
              param_5 = param_5 + 1;
            }
            else {
              local_40 = (byte *)*param_5;
              param_5 = param_5 + 1;
            }
          }
          if ((int)local_14 < 0) {
            local_14 = 1;
          }
          if (local_14 == 0) goto LAB_0042e69b;
          goto LAB_0042e643;
        case 8:
        case 9:
          local_18 = 10;
          goto switchD_0042e18c_caseD_0;
        case 10:
          local_18 = 0;
          goto switchD_0042e18c_caseD_0;
        case 0xb:
          thunk_FUN_004333d0();
          if (local_10 < 0) goto LAB_0042e7ec;
          if (local_10 == 0) goto switchD_0042e18c_caseD_2;
          if (!bVar4) {
            param_5 = param_5 + 1;
            thunk_FUN_004333d0();
            local_8 = local_8 + 1;
          }
          goto LAB_0042e04a;
        case 0xc:
          bVar5 = true;
          local_1d = *param_4;
          pbVar9 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        case 0xd:
          bVar3 = true;
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        case 0xe:
          bVar2 = true;
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        case 0xf:
          local_18 = 8;
          goto switchD_0042e18c_caseD_0;
        case 0x10:
        case 0x11:
          if (bVar2) {
            local_3c = 1;
          }
          else if (bVar3) {
            local_3c = 0;
          }
          else if (uVar7 == 0x11) {
            pbVar9 = (byte *)0x0;
            uVar7 = 1;
            local_3c = uVar7;
          }
          goto LAB_0042e4c4;
        case 0x12:
          FUN_00429fc4((undefined4 *)local_64,0,0x20);
          local_1c = 0;
          bVar6 = *param_4;
          pbVar9 = param_4 + 1;
          if (bVar6 == 0x5e) {
            local_1c = 1;
            bVar6 = param_4[1];
            pbVar9 = param_4 + 2;
          }
          goto LAB_0042e6d6;
        case 0x13:
          local_24 = (int)local_c >> 0x1f;
          local_28 = local_c;
          goto LAB_0042e341;
        case 0x14:
          goto switchD_0042e18c_caseD_14;
        case 0x15:
          local_28 = FUN_0042e810(param_1,param_2,(uint)param_3,0x10,8,(int *)&local_c,&local_10);
          if (local_10 < 1) goto switchD_0042e18c_caseD_2;
          local_24 = extraout_EDX_00;
          if (!bVar4) {
            *(uint *)*param_5 = local_28;
            local_8 = local_8 + 1;
            param_5 = param_5 + 1;
          }
          goto LAB_0042e04a;
        case 0x16:
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        case 0x17:
          local_1d = *param_4;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        case 0x18:
          if ((*param_4 == 0x36) && (param_4[1] == 0x34)) {
            bVar5 = true;
            bVar3 = false;
            bVar2 = false;
            param_4 = param_4 + 2;
          }
          else if ((*param_4 == 0x33) && (param_4[1] == 0x32)) {
            bVar5 = false;
            bVar3 = false;
            bVar2 = true;
            param_4 = param_4 + 2;
          }
          else if ((*param_4 == 0x31) && (param_4[1] == 0x36)) {
            bVar5 = false;
            bVar3 = true;
            bVar2 = false;
            param_4 = param_4 + 2;
          }
          else if (*param_4 == 0x38) {
            bVar5 = false;
            bVar3 = false;
            bVar2 = false;
            param_4 = param_4 + 1;
          }
          local_1d = *param_4;
          pbVar9 = (byte *)(uint)local_1d;
          param_4 = param_4 + 1;
          goto LAB_0042e166;
        }
      }
    }
    param_4 = pbVar9;
    local_c = local_c + 1;
    pbVar9 = param_3;
    bVar6 = (*(code *)param_1)();
    if (bVar6 == 0xff) goto LAB_0042e7ec;
    if (((local_1d & 0x80) != 0) || ((&DAT_0043ba1c)[(int)(char)local_1d & 0x7f] != '\x01')) {
      if (bVar6 != local_1d) {
        (*(code *)param_2)();
        goto switchD_0042e18c_caseD_2;
      }
      if ((((&DAT_0053e30d)[bVar6] & 4) != 0) && (*param_4 != 0)) {
        local_1d = (*(code *)param_1)((uint)bVar6,param_3,pbVar9,param_3);
        if (local_1d == 0xff) goto LAB_0042e7ec;
        bVar6 = *param_4;
        param_4 = param_4 + 1;
        if (bVar6 != local_1d) {
          (*(code *)param_2)();
          (*(code *)param_2)();
          goto switchD_0042e18c_caseD_2;
        }
        local_c = local_c + 1;
      }
      goto LAB_0042e04a;
    }
    while (((bVar6 & 0x80) == 0 && ((&DAT_0043ba1c)[(int)(char)bVar6 & 0x7f] == '\x01'))) {
      local_c = local_c + 1;
      bVar6 = (*(code *)param_1)();
      if (bVar6 == 0xff) goto LAB_0042e7ec;
    }
    (*(code *)param_2)();
    local_c = local_c - 1;
  } while( true );
switchD_0042e18c_caseD_14:
  local_18 = 0x10;
switchD_0042e18c_caseD_0:
  local_28 = FUN_0042e810(param_1,param_2,(uint)param_3,local_18,local_14 & 0x7fff,(int *)&local_c,
                          &local_10);
  local_24 = extraout_EDX;
  if (local_10 < 0) goto LAB_0042e7ec;
  if (local_10 == 0) goto switchD_0042e18c_caseD_2;
LAB_0042e341:
  if ((('@' < (char)local_1d) && ((char)local_1d < '[')) && (local_1d != 0x58)) {
    bVar2 = true;
  }
  if (!bVar4) {
    if (bVar5) {
      puVar1 = (uint *)*param_5;
      *puVar1 = local_28;
      puVar1[1] = local_24;
    }
    else if (bVar2) {
      *(uint *)*param_5 = local_28;
    }
    else if (bVar3) {
      *(short *)*param_5 = (short)local_28;
    }
    else {
      *(uint *)*param_5 = local_28;
    }
    param_5 = param_5 + 1;
    if (local_1d != 0x6e) {
      local_8 = local_8 + 1;
    }
  }
  goto LAB_0042e04a;
LAB_0042e6d6:
  pbVar11 = pbVar9;
  local_1d = bVar6;
  if (bVar6 == 0) goto switchD_0042e18c_caseD_2;
  pbVar9 = (byte *)((int)(char)bVar6 & 7);
  local_64[(int)(char)bVar6 >> 3 & 0x1f] =
       local_64[(int)(char)bVar6 >> 3 & 0x1f] | '\x01' << (sbyte)pbVar9;
  bVar6 = *pbVar11;
  param_4 = pbVar11 + 1;
  if (bVar6 != 0x5d) {
    pbVar9 = param_4;
    if (((bVar6 == 0x2d) && ((char)local_1d < (char)*param_4)) && (*param_4 != 0x5d)) {
      bVar6 = *param_4;
      while( true ) {
        local_1d = local_1d + 1;
        pbVar9 = pbVar11 + 2;
        if ((char)bVar6 <= (char)local_1d) break;
        local_64[(int)(char)local_1d >> 3 & 0x1f] =
             local_64[(int)(char)local_1d >> 3 & 0x1f] | '\x01' << (local_1d & 7);
      }
    }
    goto LAB_0042e6d6;
  }
  if (local_14 == 0xffffffff) {
    local_14 = 0x7fff;
  }
  if (!bVar4) {
    pbVar9 = (byte *)*param_5;
    param_5 = param_5 + 1;
    local_40 = pbVar9;
  }
  local_38 = 0;
  bVar6 = 0x5d;
  while (local_14 = local_14 - 1, -1 < (int)local_14) {
    local_c = local_c + 1;
    pbVar9 = param_3;
    bVar6 = (*(code *)param_1)();
    if ((bVar6 == 0xff) ||
       (pbVar9 = (byte *)((int)(char)bVar6 & 7),
       ((1 << (sbyte)pbVar9 & (int)(char)local_64[(int)(char)bVar6 >> 3 & 0x1f]) != 0) == local_1c))
    break;
    local_38 = local_38 + 1;
    if (!bVar4) {
      *local_40 = bVar6;
      pbVar9 = local_40;
      local_40 = local_40 + 1;
    }
  }
  if (-1 < (int)local_14) {
    (*(code *)param_2)(param_3,(int)(char)bVar6,pbVar9,(int)(char)bVar6,param_3);
    local_c = local_c - 1;
  }
  if ((local_38 != 0) && (!bVar4)) {
    *local_40 = 0;
    local_8 = local_8 + 1;
    local_40 = local_40 + 1;
  }
  if (bVar6 == 0xff) {
LAB_0042e7ec:
    (*(code *)param_2)();
    if (local_8 == 0) {
      local_8 = -1;
    }
    else {
switchD_0042e18c_caseD_2:
    }
    return local_8;
  }
  goto LAB_0042e04a;
  while (((uVar7 & 0x80) == 0 && ((&DAT_0043ba1c)[(int)(char)uVar7 & 0x7f] == '\x01'))) {
LAB_0042e4c4:
    local_c = local_c + 1;
    pbVar11 = param_3;
    uVar7 = (*(code *)param_1)(uVar7,param_3,pbVar9);
    pbVar9 = pbVar11;
    if ((char)uVar7 == -1) goto LAB_0042e7ec;
  }
  if (!bVar4) {
    if (local_3c == 0) {
      local_40 = (byte *)*param_5;
    }
    else {
      local_40 = (byte *)*param_5;
    }
    param_5 = param_5 + 1;
    local_8 = local_8 + 1;
  }
  if (local_14 == 0xffffffff) {
    local_14 = 0x7fff;
  }
  do {
    if (!bVar4) {
      if (local_3c == 0) {
        *local_40 = (byte)uVar7;
        local_40 = local_40 + 1;
      }
      else {
        iVar8 = FUN_004327a8((LPWSTR)local_42,local_40,1);
        if (iVar8 < 1) {
          local_c = local_c - 1;
        }
        else {
          *local_40 = local_42[0];
          local_40 = local_40 + 1;
        }
      }
    }
    local_c = local_c + 1;
    uVar7 = (*(code *)param_1)();
    cVar10 = (char)uVar7;
  } while ((((cVar10 != -1) && (cVar10 != '\0')) &&
           (((uVar7 & 0x80) != 0 || ((&DAT_0043ba1c)[(int)cVar10 & 0x7f] != '\x01')))) &&
          (local_14 = local_14 - 1, 0 < (int)local_14));
  (*(code *)param_2)();
  local_c = local_c - 1;
  if (!bVar4) {
    if (local_3c == 0) {
      *local_40 = 0;
    }
    else {
      local_40[0] = 0;
      local_40[1] = 0;
    }
  }
  goto LAB_0042e04a;
  while( true ) {
    if (!bVar4) {
      if (local_3c == 0) {
        *local_40 = bVar6;
        local_40 = local_40 + 1;
      }
      else {
        iVar8 = FUN_004327a8((LPWSTR)local_44,local_40,1);
        if (0 < iVar8) {
          *local_40 = local_44[0];
          local_40 = local_40 + 1;
        }
      }
    }
    local_14 = local_14 - 1;
    if ((int)local_14 < 1) break;
LAB_0042e643:
    local_c = local_c + 1;
    bVar6 = (*(code *)param_1)();
    if (bVar6 == 0xff) goto LAB_0042e7ec;
  }
LAB_0042e69b:
  if (!bVar4) {
    local_8 = local_8 + 1;
  }
  goto LAB_0042e04a;
}

