/* Ghidra address: 004221b4; FUN_004221b4 */

void FUN_004221b4(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)(param_4 + 0x81);
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_5 + 0x3e;
  }
  piVar2 = FUN_0042ec88(iVar1,puVar3,param_3,(int *)iVar1,(undefined2 *)(param_4 + 0x7f));
  FUN_0042ec88(piVar2,extraout_EDX,extraout_CX,piVar2,puVar3);
  FUN_0042eacc();
  return;
}

