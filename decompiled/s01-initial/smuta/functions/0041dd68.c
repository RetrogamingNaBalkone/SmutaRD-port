/* Ghidra address: 0041dd68; FUN_0041dd68 */

void FUN_0041dd68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  iVar1 = *(int *)(param_4 + 0x18);
  if (iVar1 != 0) {
    if ((*(byte *)(param_4 + 0x28) & 2) != 0) {
      iVar1 = FUN_0040a818();
      param_2 = extraout_EDX;
    }
    if ((*(byte *)(param_4 + 0x28) & 1) != 0) {
      FUN_0040a7dc();
      return;
    }
    FUN_0040a7a4(iVar1,param_2,*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x18),0);
  }
  return;
}

