/* Ghidra address: 0042ce21; FUN_0042ce21 */

undefined4 * __cdecl
FUN_0042ce21(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6,
            uint *param_7,int param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  if ((param_2 == (int *)0x0) || ((*(byte *)(param_2 + 1) & 1) == 0)) {
    FUN_004362c4(s_topTypPtr____0____IS_STRUC_topTy_0043ae06,s_XXTYPE_CPP_0043ae34,0x2a7);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_004362c4(s_tgtTypPtr____0____IS_STRUC_tgtTy_0043ae3f,s_XXTYPE_CPP_0043ae6d,0x2a8);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_004362c4(s_srcTypPtr____0____IS_STRUC_srcTy_0043ae78,s_XXTYPE_CPP_0043aea6,0x2a9);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_0042c963(param_6,param_4);
    if (iVar3 != 0) {
      FUN_004362c4(s___isSameTypeID_srcTypPtr__tgtTyp_0043aeb1,s_XXTYPE_CPP_0043aedb,0x2ad);
    }
    iVar3 = FUN_0042c963(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_0042c963(param_2,param_4), iVar3 != 0)) {
    FUN_004362c4(s_tgtTypPtr____0______isSameTypeID_0043aee6,s_XXTYPE_CPP_0043af22,0x2b3);
  }
  if ((*(byte *)(param_2 + 3) & 4) == 0) {
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  puVar5 = (undefined4 *)((uint)*(ushort *)((int)param_2 + 0x12) + (int)param_2);
  do {
    while (piVar1 = (int *)*puVar5, piVar1 == (int *)0x0) {
      if (bVar2) {
        *param_7 = local_c;
        if (local_14 == 1) {
          return local_10;
        }
        return (undefined4 *)0x0;
      }
      bVar2 = true;
      puVar5 = (undefined4 *)((uint)*(ushort *)(param_2 + 4) + (int)param_2);
    }
    if ((*(byte *)(puVar5 + 2) & 8) == 0) {
      if ((param_8 == 0) || ((puVar5[2] & 3) != 3)) {
        local_18 = 0;
      }
      else {
        local_18 = 1;
      }
      puVar6 = (undefined4 *)(param_1 + puVar5[1]);
      if ((*(byte *)(puVar5 + 2) & 4) != 0) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar3 = FUN_0042c963(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_0042ce21((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_0042d02c;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_004362c4(s_srcTypPtr_0043af2d,s_XXTYPE_CPP_0043af37,0x328);
          }
          puVar4 = FUN_0042ce21((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_0042d04b;
        }
LAB_0042d02c:
        if ((local_14 == 0) || (puVar6 != local_10)) {
          local_14 = local_14 + 1;
          local_c = local_18;
          local_10 = puVar6;
        }
        else {
          local_c = local_c | local_18;
        }
      }
      else if (puVar6 == param_3) {
        return puVar6;
      }
    }
LAB_0042d04b:
    puVar5 = puVar5 + 3;
  } while( true );
}

