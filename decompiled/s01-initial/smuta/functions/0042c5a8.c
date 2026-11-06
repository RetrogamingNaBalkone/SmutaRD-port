/* Ghidra address: 0042c5a8; FUN_0042c5a8 */

int FUN_0042c5a8(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  code *in_stack_00000004;
  code *in_stack_00000008;
  char *in_stack_0000000c;
  byte *in_stack_00000010;
  char *in_stack_00000014;
  byte local_54 [32];
  int local_34;
  char *local_24;
  byte local_1d;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  local_c = 0;
  local_10 = 0;
LAB_0042c5be:
  do {
    local_1d = *in_stack_00000010;
    if (local_1d == 0) {
      return local_c;
    }
    pbVar1 = in_stack_00000010 + 1;
    if (local_1d == 0x25) {
      local_1d = in_stack_00000010[1];
      uVar6 = (uint)local_1d;
      in_stack_00000010 = in_stack_00000010 + 2;
      pbVar1 = in_stack_00000010;
      if (local_1d != 0x25) {
        local_5 = 0x20;
        pcVar9 = (char *)0x25;
        pcVar11 = (char *)0xffffffff;
LAB_0042c66e:
        if ((local_1d & 0x80) == 0) {
          uVar6 = (uint)(char)local_1d;
          iVar5 = (int)(char)(&DAT_00438480)[uVar6];
        }
        else {
          iVar5 = 2;
        }
        switch(iVar5) {
        default:
          goto switchD_0042c68f_caseD_0;
        case 2:
          goto switchD_0042c68f_caseD_2;
        case 4:
          local_5 = local_5 | 1;
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 5:
          if ((int)pcVar11 < 0) {
            iVar5 = (int)(char)local_1d;
          }
          else {
            iVar5 = (int)pcVar11 * 10 + (int)(char)local_1d;
          }
          pcVar9 = (char *)(iVar5 + -0x30);
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          pcVar11 = pcVar9;
          goto LAB_0042c66e;
        case 6:
          if ((local_5 & 1) == 0) {
            local_24 = *(char **)in_stack_00000014;
            in_stack_00000014 = in_stack_00000014 + 4;
          }
          if ((int)pcVar11 < 0) {
            pcVar11 = (char *)0x1;
          }
          if (pcVar11 == (char *)0x0) goto LAB_0042c9da;
          goto LAB_0042c9b2;
        case 7:
        case 8:
          local_18 = 10;
          goto switchD_0042c68f_caseD_0;
        case 9:
          local_18 = 0;
          goto switchD_0042c68f_caseD_0;
        case 10:
          thunk_FUN_0042fe0c();
          if (local_14 < 0) goto LAB_0042cb1c;
          if (local_14 == 0) goto switchD_0042c68f_caseD_2;
          if ((local_5 & 1) == 0) {
            in_stack_00000014 = in_stack_00000014 + 4;
            thunk_FUN_0042fe0c();
            local_c = local_c + 1;
          }
          goto LAB_0042c5be;
        case 0xb:
          local_5 = local_5 | 8;
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0xc:
          local_5 = local_5 | 2;
          local_1d = *in_stack_00000010;
          pcVar9 = (char *)(uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0xd:
          local_5 = local_5 | 4;
          local_1d = *in_stack_00000010;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0xe:
          local_18 = 8;
          goto switchD_0042c68f_caseD_0;
        case 0xf:
          goto switchD_0042c68f_caseD_f;
        case 0x10:
          FUN_00429054();
          local_1c = 0;
          bVar3 = *in_stack_00000010;
          pbVar1 = in_stack_00000010 + 1;
          if (bVar3 == 0x5e) {
            local_1c = 1;
            bVar3 = in_stack_00000010[1];
            pbVar1 = in_stack_00000010 + 2;
          }
          goto LAB_0042ca13;
        case 0x11:
          uVar6 = local_10;
          goto LAB_0042c7d4;
        case 0x12:
          goto switchD_0042c68f_caseD_12;
        case 0x13:
          uVar6 = FUN_0042cb40();
          if (local_14 < 1) goto switchD_0042c68f_caseD_2;
          if ((local_5 & 1) == 0) {
            **(uint **)in_stack_00000014 = uVar6;
            local_c = local_c + 1;
            in_stack_00000014 = in_stack_00000014 + 4;
          }
          goto LAB_0042c5be;
        case 0x14:
          local_5 = local_5 & 0xdf;
          local_1d = *in_stack_00000010;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        case 0x15:
          local_5 = local_5 | 0x20;
          local_1d = *in_stack_00000010;
          uVar6 = (uint)local_1d;
          in_stack_00000010 = in_stack_00000010 + 1;
          goto LAB_0042c66e;
        }
      }
    }
    in_stack_00000010 = pbVar1;
    local_10 = local_10 + 1;
    bVar3 = (*in_stack_00000004)();
    if (bVar3 == 0xff) goto LAB_0042cb1c;
    if (((local_1d & 0x80) == 0) && ((&DAT_00438480)[(char)local_1d] == '\x01')) {
      while (((bVar3 & 0x80) == 0 && ((&DAT_00438480)[(char)bVar3] == '\x01'))) {
        local_10 = local_10 + 1;
        bVar3 = (*in_stack_00000004)();
        if (bVar3 == 0xff) goto LAB_0042cb1c;
      }
      (*in_stack_00000008)();
      local_10 = local_10 - 1;
    }
    else if (bVar3 != local_1d) {
      (*in_stack_00000008)();
      goto switchD_0042c68f_caseD_2;
    }
  } while( true );
switchD_0042c68f_caseD_12:
  local_18 = 0x10;
switchD_0042c68f_caseD_0:
  uVar6 = FUN_0042cb40();
  if (local_14 < 0) goto LAB_0042cb1c;
  if (local_14 == 0) goto switchD_0042c68f_caseD_2;
LAB_0042c7d4:
  if ((('@' < (char)local_1d) && ((char)local_1d < '[')) && (local_1d != 0x58)) {
    local_5 = local_5 | 4;
  }
  if ((local_5 & 1) == 0) {
    if ((local_5 & 4) == 0) {
      if ((local_5 & 2) == 0) {
        **(uint **)in_stack_00000014 = uVar6;
      }
      else {
        **(undefined2 **)in_stack_00000014 = (short)uVar6;
      }
    }
    else {
      **(uint **)in_stack_00000014 = uVar6;
    }
    in_stack_00000014 = in_stack_00000014 + 4;
    if (local_1d != 0x6e) {
      local_c = local_c + 1;
    }
  }
  goto LAB_0042c5be;
LAB_0042ca13:
  pbVar10 = pbVar1;
  local_1d = bVar3;
  if (bVar3 == 0) goto switchD_0042c68f_caseD_2;
  local_54[(int)(char)bVar3 >> 3 & 0x1f] =
       local_54[(int)(char)bVar3 >> 3 & 0x1f] | '\x01' << (bVar3 & 7);
  bVar3 = *pbVar10;
  in_stack_00000010 = pbVar10 + 1;
  if (bVar3 != 0x5d) {
    pbVar1 = in_stack_00000010;
    if (((bVar3 == 0x2d) && ((char)local_1d < (char)*in_stack_00000010)) &&
       (*in_stack_00000010 != 0x5d)) {
      bVar3 = *in_stack_00000010;
      while( true ) {
        local_1d = local_1d + 1;
        pbVar1 = pbVar10 + 2;
        if ((char)bVar3 <= (char)local_1d) break;
        local_54[(int)(char)local_1d >> 3 & 0x1f] =
             local_54[(int)(char)local_1d >> 3 & 0x1f] | '\x01' << (local_1d & 7);
      }
    }
    goto LAB_0042ca13;
  }
  if (pcVar11 == (char *)0xffffffff) {
    pcVar11 = (char *)0x7fff;
  }
  if ((local_5 & 1) == 0) {
    local_24 = *(char **)in_stack_00000014;
    in_stack_00000014 = in_stack_00000014 + 4;
  }
  local_34 = 0;
  cVar4 = ']';
  pcVar9 = (char *)0x0;
  while (pcVar11 = pcVar11 + -1, -1 < (int)pcVar11) {
    local_10 = local_10 + 1;
    pcVar9 = in_stack_0000000c;
    cVar4 = (*in_stack_00000004)();
    if ((cVar4 == -1) ||
       (pcVar9 = (char *)((int)cVar4 & 7),
       ((1 << (sbyte)pcVar9 & (int)(char)local_54[(int)cVar4 >> 3 & 0x1f]) != 0) == local_1c))
    break;
    local_34 = local_34 + 1;
    if ((local_5 & 1) == 0) {
      *local_24 = cVar4;
      pcVar9 = local_24;
      local_24 = local_24 + 1;
    }
  }
  if (-1 < (int)pcVar11) {
    (*in_stack_00000008)(in_stack_0000000c,(int)cVar4,pcVar9,(int)cVar4,in_stack_0000000c);
    local_10 = local_10 - 1;
  }
  if ((local_34 != 0) && ((local_5 & 1) == 0)) {
    *local_24 = '\0';
    local_24 = local_24 + 1;
    local_c = local_c + 1;
  }
  if (cVar4 == -1) {
LAB_0042cb1c:
    (*in_stack_00000008)();
    if (local_c == 0) {
      local_c = -1;
    }
    else {
switchD_0042c68f_caseD_2:
    }
    return local_c;
  }
  goto LAB_0042c5be;
  while ((((uint)pcVar7 & 0x80) == 0 &&
         (uVar6 = (uint)(char)pcVar7, (&DAT_00438480)[uVar6] == '\x01'))) {
switchD_0042c68f_caseD_f:
    local_10 = local_10 + 1;
    pcVar8 = in_stack_0000000c;
    pcVar7 = (char *)(*in_stack_00000004)(in_stack_0000000c,uVar6,pcVar9);
    pcVar9 = pcVar8;
    if ((char)pcVar7 == -1) goto LAB_0042cb1c;
  }
  pcVar8 = pcVar7;
  if ((local_5 & 1) == 0) {
    pcVar9 = in_stack_00000014 + 4;
    pcVar8 = *(char **)in_stack_00000014;
    local_c = local_c + 1;
    in_stack_00000014 = pcVar9;
    local_24 = pcVar8;
  }
  if (pcVar11 == (char *)0xffffffff) {
    pcVar11 = (char *)0x7fff;
  }
  do {
    if ((local_5 & 1) == 0) {
      *local_24 = (char)pcVar7;
      pcVar8 = local_24;
      local_24 = local_24 + 1;
    }
    local_10 = local_10 + 1;
    pcVar2 = in_stack_0000000c;
    pcVar7 = (char *)(*in_stack_00000004)(pcVar8,in_stack_0000000c,pcVar9);
    pcVar9 = pcVar2;
    cVar4 = (char)pcVar7;
  } while ((((cVar4 != -1) && (cVar4 != '\0')) &&
           ((pcVar8 = pcVar7, ((uint)pcVar7 & 0x80) != 0 ||
            (pcVar8 = (char *)(int)cVar4, pcVar8[0x438480] != '\x01')))) &&
          (pcVar11 = pcVar11 + -1, 0 < (int)pcVar11));
  (*in_stack_00000008)();
  local_10 = local_10 - 1;
  if ((local_5 & 1) == 0) {
    *local_24 = '\0';
  }
  goto LAB_0042c5be;
  while( true ) {
    if ((local_5 & 1) == 0) {
      *local_24 = cVar4;
      local_24 = local_24 + 1;
    }
    pcVar11 = pcVar11 + -1;
    if ((int)pcVar11 < 1) break;
LAB_0042c9b2:
    local_10 = local_10 + 1;
    cVar4 = (*in_stack_00000004)();
    if (cVar4 == -1) goto LAB_0042cb1c;
  }
LAB_0042c9da:
  if ((local_5 & 1) == 0) {
    local_c = local_c + 1;
  }
  goto LAB_0042c5be;
}

