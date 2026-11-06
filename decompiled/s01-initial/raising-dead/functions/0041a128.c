/* Ghidra address: 0041a128; FUN_0041a128 */

void __cdecl FUN_0041a128(int param_1,short *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  int3 extraout_var;
  
  bVar3 = FUN_004124a0(DAT_004d09fc,param_1,param_2,param_3);
  iVar2 = DAT_0053d640;
  uVar1 = DAT_004c329a;
  if (CONCAT31(extraout_var,bVar3) != 0 && -1 < extraout_var) {
    *(undefined2 *)(DAT_0053d640 + 0x20) = DAT_004c3296;
    *(undefined2 *)(iVar2 + 0x22) = uVar1;
    return;
  }
  *(undefined2 *)(DAT_0053d640 + 0x20) = DAT_004c3298;
  *(undefined2 *)(iVar2 + 0x22) = uVar1;
  return;
}

