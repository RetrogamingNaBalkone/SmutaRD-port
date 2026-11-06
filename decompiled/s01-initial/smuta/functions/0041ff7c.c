/* Ghidra address: 0041ff7c; FUN_0041ff7c */

void FUN_0041ff7c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar4 = (undefined2 *)(param_4 + 0x3e);
  puVar3 = (undefined2 *)(param_4 + 0x3c);
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_5 + 0x3e;
  }
  piVar2 = FUN_0042e8f8(iVar1,puVar3,param_3,(int *)iVar1,(undefined4 *)(param_4 + 0x44));
  piVar2 = FUN_0042ec88(piVar2,extraout_EDX,extraout_CX,piVar2,puVar3);
  FUN_0042ec88(piVar2,extraout_EDX_00,extraout_CX_00,piVar2,puVar4);
  return;
}

