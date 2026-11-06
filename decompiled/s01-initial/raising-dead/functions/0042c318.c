/* Ghidra address: 0042c318; FUN_0042c318 */

void __cdecl FUN_0042c318(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_004362c4(s_varType_>tpMask___TM_IS_ARRAY_0043aa3c,s_XX_CPP_0043aa5a,0xd5e);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_004362c4(s_varType_>tpArr_tpaElemType_>tpCl_0043aa61,s_XX_CPP_0043aa9c,0xd5f);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_004362c4(s_vdtCount_0043aaa3,s_XX_CPP_0043aaac,0xd68);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_004362c4(s_etdCount_<__elemCount____elemCou_0043aab3,s_XX_CPP_0043aadb,0xd71);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_004362c4(s_dtrCount_<__vdtCount_0043aae2,s_XX_CPP_0043aaf7,0xd72);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_0042c07e(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_0042c07e(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

