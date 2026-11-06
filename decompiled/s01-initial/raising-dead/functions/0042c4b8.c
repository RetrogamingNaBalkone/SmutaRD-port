/* Ghidra address: 0042c4b8; FUN_0042c4b8 */

undefined4 __cdecl FUN_0042c4b8(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  if (param_1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_8 = *(uint *)(param_3 + 0x1c);
    local_c = local_8 - param_2;
    if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
      if ((*(byte *)(param_1 + 1) & 0x11) == 0) {
        FUN_004362c4(s_dttPtr_>dttFlags____DTCVF_PTRVAL_0043ab4b,s_XX_CPP_0043ab7a,0xe00);
      }
      if ((*(byte *)(*param_1 + 4) & 0x10) == 0) {
        FUN_004362c4(s_dttPtr_>dttType_>tpMask___TM_IS__0043ab81,s_XX_CPP_0043aba5,0xe04);
      }
      if ((*(byte *)(*(int *)(*param_1 + 8) + 0xc) & 2) == 0) {
        FUN_004362c4(s_dttPtr_>dttType_>tpPtr_tppBaseTy_0043abac,s_XX_CPP_0043abef,0xe05);
      }
      local_c = *(uint *)(*(int *)(*param_1 + 8) + 0x20);
    }
    if ((*(byte *)((int)param_1 + 5) & 1) == 0) {
      piVar6 = param_1;
      if (((int)local_c < 1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
        if ((param_1[1] & 3U) != 3) {
          return 0;
        }
        local_10 = local_10 + 1;
      }
      else {
        for (; *piVar6 != 0; piVar6 = piVar6 + 3) {
          local_14 = *piVar6;
          iVar8 = 1;
          if (((((*(byte *)(local_14 + 4) & 0x10) != 0) &&
               (local_14 = *(int *)(local_14 + 8), (*(byte *)(local_14 + 4) & 2) != 0)) &&
              ((*(byte *)(local_14 + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar6 + 1) & 8) != 0)) {
            if ((*(byte *)(local_14 + 0xc) & 2) == 0) {
              FUN_004362c4(s_varType_>tpClass_tpcFlags___CF_H_0043ac54,s_XX_CPP_0043ac7c,0xe6e);
            }
            if ((*(byte *)(piVar6 + 1) & 4) == 0) {
              local_18 = (int *)piVar6[2];
            }
            else {
              local_18 = (int *)(param_4 + piVar6[2]);
            }
            local_18 = (int *)*local_18;
            if ((*(byte *)(piVar6 + 1) & 0x40) != 0) {
              local_18 = (int *)((int)local_18 + 4);
            }
            local_18 = (int *)FUN_0042c43c((int)local_18,&local_14);
          }
          iVar7 = local_14;
          if ((*(byte *)(local_14 + 5) & 4) != 0) {
            iVar8 = *(int *)(local_14 + 0xc);
            iVar7 = *(int *)(local_14 + 8);
          }
          if ((*(byte *)(iVar7 + 0xc) & 2) == 0) {
            FUN_004362c4(s_elemType_>tpClass_tpcFlags___CF__0043ac83,s_XX_CPP_0043acac,0xe92);
          }
          uVar9 = iVar8 * *(int *)(iVar7 + 0x20);
          if (local_c <= uVar9) goto LAB_0042c6ba;
          local_c = local_c - uVar9;
        }
        piVar6 = piVar6 + -3;
      }
LAB_0042c6ba:
      do {
        local_1c = *piVar6;
        uVar9 = piVar6[1];
        if ((uVar9 & 4) == 0) {
          local_20 = (int *)piVar6[2];
        }
        else {
          local_20 = (int *)(param_4 + piVar6[2]);
        }
        if ((uVar9 & 0x11) != 0) {
          if ((*(byte *)(local_1c + 4) & 0x10) == 0) {
            FUN_004362c4(s_varType_>tpMask___TM_IS_PTR_0043acb3,s_XX_CPP_0043accf,0xec2);
          }
          local_1c = *(int *)(local_1c + 8);
          local_24 = *local_20;
          local_20 = (int *)local_24;
          if ((uVar9 & 0x48) == 0x40) {
            local_20 = (int *)(local_24 + 4);
          }
          if ((((*(byte *)(local_1c + 4) & 2) != 0) && ((*(byte *)(local_1c + 0xc) & 0x20) != 0)) &&
             ((uVar9 & 8) != 0)) {
            local_20 = (int *)FUN_0042c43c((int)local_20,&local_1c);
          }
        }
        uVar3 = local_8;
        uVar2 = local_c;
        if (local_10 == 0) {
          if ((uVar9 & 0x400) == 0) {
            uVar5 = 0;
          }
          else {
            if ((int)(local_c - local_8) < 0) {
              FUN_004362c4(s_dtCnt_>__0_0043acd6,s_XX_CPP_0043ace1,0xee8);
            }
            uVar5 = 2;
            if (uVar2 != uVar3) {
              uVar5 = 1;
            }
          }
          if ((*(byte *)(local_1c + 5) & 4) == 0) {
            FUN_0042c07e(local_20,local_1c,uVar5,local_c,1,param_4,param_3);
          }
          else {
            FUN_0042c318((int)local_20,local_1c,local_c,param_4,param_3);
          }
          if ((((uVar9 & 0x400) != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) &&
             (*(char *)(param_3 + 0x20) != -1)) {
            (**(code **)(*local_20 + -8))(local_20);
          }
        }
        if ((uVar9 & 3) == 3) {
          if ((uVar9 & 0x48) == 0x48) {
            local_24 = local_24 + -4;
          }
          if ((*(byte *)(local_1c + 5) & 4) == 0) {
            if (*(int *)(local_1c + 0x14) == 0) {
              FUN_004350ec(local_24);
            }
            else {
              FUN_0042b086(local_24,*(undefined **)(local_1c + 0x14),
                           (uint)*(ushort *)(local_1c + 0x18));
            }
          }
          else {
            local_1c = *(int *)(local_1c + 8);
            if (*(int *)(local_1c + 0x1c) == 0) {
              FUN_004350fc(local_24);
            }
            else {
              FUN_0042b086(local_24,*(undefined **)(local_1c + 0x1c),
                           (uint)*(ushort *)(local_1c + 0x1a));
            }
          }
        }
        local_c = 0;
        bVar1 = param_1 < piVar6;
        piVar6 = piVar6 + -3;
      } while (bVar1);
      uVar4 = 0;
    }
    else {
      if (((*(byte *)(*param_1 + 4) & 2) == 0) || ((*(byte *)(*param_1 + 0xc) & 2) == 0)) {
        FUN_004362c4(s_IS_CLASS_dttPtr_>dttType_>tpMask_0043abf6,s_XX_CPP_0043ac4d,0xe13);
      }
      uVar4 = *(undefined4 *)(*param_1 + 0x24);
    }
  }
  return uVar4;
}

