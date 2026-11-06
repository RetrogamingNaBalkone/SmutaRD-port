/* Ghidra address: 00420208; FUN_00420208 */

void FUN_00420208(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  undefined4 extraout_ECX_00;
  int iVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  short sVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  FUN_0041ff7c(param_1,param_2,param_3,param_4,param_5);
  sVar6 = 0;
  uVar4 = extraout_ECX;
  do {
    iVar1 = sVar6 * 2 + param_4 + 0x7e;
    if (param_5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_5 + 0x3e;
    }
    FUN_0042ec88(iVar1,iVar5,(short)uVar4,(int *)iVar5,(undefined2 *)iVar1);
    sVar6 = sVar6 + 1;
    uVar4 = extraout_ECX_00;
  } while (sVar6 < 0xb);
  FUN_0042e838();
  puVar2 = FUN_0041d9de();
  *(uint **)(param_4 + 0xc0) = puVar2;
  FUN_0042e838();
  puVar2 = FUN_0041d9de();
  *(uint **)(param_4 + 0xc4) = puVar2;
  puVar8 = (undefined2 *)(param_4 + 0x9a);
  puVar7 = (undefined2 *)(param_4 + 0x98);
  if (param_5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_5 + 0x3e;
  }
  piVar3 = FUN_0042ec88(param_4 + 0x96,iVar1,(short)puVar7,(int *)iVar1,
                        (undefined2 *)(param_4 + 0x96));
  piVar3 = FUN_0042ec88(piVar3,extraout_EDX,extraout_CX,piVar3,puVar7);
  FUN_0042ec88(piVar3,extraout_EDX_00,extraout_CX_00,piVar3,puVar8);
  FUN_00408944();
  FUN_0040895c();
  return;
}

