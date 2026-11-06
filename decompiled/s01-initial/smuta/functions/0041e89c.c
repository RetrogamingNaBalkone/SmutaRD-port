/* Ghidra address: 0041e89c; FUN_0041e89c */

void FUN_0041e89c(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  undefined2 *puVar2;
  
  FUN_0041e658(param_1,param_2,param_3,param_4,param_5);
  puVar2 = (undefined2 *)(param_4 + 0x91);
  if (param_5 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_5 + 0x3e);
  }
  piVar1 = FUN_0042ec88(puVar2,param_4 + 0x8f,(short)piVar1,piVar1,(undefined2 *)(param_4 + 0x8f));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar2);
  if (*(short *)(param_4 + 0x8f) != 1000) {
    *(undefined2 *)(*(int *)(param_4 + 0x82) + 4) = 0x1000;
    FUN_00427c8d();
  }
  return;
}

