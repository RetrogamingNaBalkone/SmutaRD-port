/* Ghidra address: 0042c07e; FUN_0042c07e */

void __cdecl
FUN_0042c07e(int param_1,int param_2,uint param_3,uint param_4,int param_5,undefined4 param_6,
            int param_7)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint local_1c;
  int *local_14;
  int *local_c;
  
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_004362c4(s_varType_>tpClass_tpcFlags___CF_H_0043a975,s_XX_CPP_0043a99d,0xc49);
  }
  if (param_5 == 0) {
    uVar2 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x20);
  }
  if ((param_4 == 0) || (uVar2 <= param_4)) {
    FUN_0042bf3c(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    if (uVar2 <= param_4) {
      FUN_004362c4(s_dtorCnt_<_varCount_0043a9a4,s_XX_CPP_0043a9b7,0xc89);
    }
    piVar3 = (int *)((uint)*(ushort *)(param_2 + 0x12) + param_2);
    local_14 = piVar3;
    if (param_5 != 0) {
      for (; iVar4 = *local_14, iVar4 != 0; local_14 = local_14 + 3) {
        if ((*(byte *)(iVar4 + 4) & 1) == 0) {
          FUN_004362c4(s_IS_STRUC_blType_>tpMask__0043a9be,s_XX_CPP_0043a9d7,0xcb4);
        }
        if ((*(byte *)(iVar4 + 0xc) & 2) != 0) {
          if (param_4 <= *(uint *)(iVar4 + 0x24)) {
            FUN_0042c033(param_1,param_3,local_14 + 3,piVar3);
            return;
          }
          param_4 = param_4 - *(uint *)(iVar4 + 0x24);
        }
      }
    }
    piVar1 = (int *)((uint)*(ushort *)(param_2 + 0x10) + param_2);
    for (local_c = piVar1; iVar4 = *local_c, iVar4 != 0; local_c = local_c + 3) {
      if ((*(byte *)(iVar4 + 4) & 1) == 0) {
        FUN_004362c4(s_IS_STRUC_blType_>tpMask__0043a9de,s_XX_CPP_0043a9f7,0xcdb);
      }
      if ((*(byte *)(iVar4 + 0xc) & 2) != 0) {
        if (param_4 <= *(uint *)(iVar4 + 0x24)) {
          FUN_0042c033(param_1,param_3,local_c + 3,piVar1);
          if (param_5 == 0) {
            return;
          }
          FUN_0042c033(param_1,param_3,local_14,piVar3);
          return;
        }
        param_4 = param_4 - *(uint *)(iVar4 + 0x24);
      }
    }
    piVar5 = (int *)((uint)*(ushort *)(param_2 + 0x2e) + param_2);
    piVar6 = piVar5;
    while( true ) {
      iVar4 = *piVar6;
      if (iVar4 == 0) {
        FUN_004362c4(s_memType_0043a9fe,s_XX_CPP_0043aa06,0xd01);
      }
      local_1c = 1;
      if ((*(byte *)(iVar4 + 5) & 4) != 0) {
        local_1c = *(uint *)(iVar4 + 0xc);
        iVar4 = *(int *)(iVar4 + 8);
      }
      if ((*(byte *)(iVar4 + 0xc) & 2) == 0) {
        FUN_004362c4(s_memType_>tpClass_tpcFlags___CF_H_0043aa0d,s_XX_CPP_0043aa35,0xd0f);
      }
      uVar2 = local_1c * *(int *)(iVar4 + 0x20);
      if (param_4 <= uVar2) break;
      param_4 = param_4 - uVar2;
      piVar6 = piVar6 + 2;
    }
    do {
      if (local_1c < 2) {
        FUN_0042c07e(piVar6[1] + param_1,*piVar6,0,param_4,1,param_6,param_7);
      }
      else {
        FUN_0042c318(piVar6[1] + param_1,*piVar6,param_4,param_6,param_7);
      }
      param_4 = 0;
      piVar6 = piVar6 + -2;
    } while (piVar5 <= piVar6);
    FUN_0042c033(param_1,param_3,local_c,piVar1);
    if (param_5 != 0) {
      FUN_0042c033(param_1,param_3,local_14,piVar3);
    }
  }
  return;
}

