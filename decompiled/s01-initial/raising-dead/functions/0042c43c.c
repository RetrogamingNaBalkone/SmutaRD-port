/* Ghidra address: 0042c43c; FUN_0042c43c */

int __cdecl FUN_0042c43c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(byte *)(iVar1 + 4) & 2) == 0) {
    FUN_004362c4(s_IS_CLASS_varType_>tpMask__0043aafe,s_XX_CPP_0043ab18,0xda2);
  }
  if (((*(uint *)(iVar1 + 0xc) & 0x50) == 0x50) && (*(int *)(iVar1 + 8) != -1)) {
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + param_1);
    param_1 = param_1 - *(int *)(iVar1 + -8);
    iVar1 = iVar1 - *(int *)(iVar1 + -4);
    if (*(int *)(iVar1 + -4) != 0) {
      FUN_004362c4(s___unsigned___far___vftAddr___1____0043ab1f,s_XX_CPP_0043ab44,0xdc1);
    }
    *param_2 = *(int *)(iVar1 + -0xc);
  }
  return param_1;
}

