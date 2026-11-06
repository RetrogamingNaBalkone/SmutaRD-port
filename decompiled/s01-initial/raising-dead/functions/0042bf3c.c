/* Ghidra address: 0042bf3c; FUN_0042bf3c */

void __cdecl FUN_0042bf3c(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43a56c);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_004362c4(s_varType_>tpClass_tpcFlags___CF_H_0043a8db,s_XX_CPP_0043a903,0xbb2);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_004362c4(s_varType_>tpClass_tpcDtorAddr_0043a90a,s_XX_CPP_0043a927,0xbb3);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_004362c4(s__errPtr_>ERRcInitDtc_>__varType__0043a92e,s_XX_CPP_0043a96e,0xbbe);
  }
  if ((param_3 & 2) == 0) {
    if (param_4 == 0) {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x20);
    }
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) - iVar2;
  }
  FUN_0042af32(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

