/* Ghidra address: 0040b7f8; FUN_0040b7f8 */

LPVOID __stdcall FUN_0040b7f8(int param_1,int param_2,int param_3)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_60;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  DAT_004cf7e8 = param_1;
  DAT_004cf7ec = param_2;
  if (DAT_00438f28 == 0) {
    pvVar1 = FUN_004235d4(param_1 * 2 * param_2);
    puVar2 = &DAT_004c2690;
    DAT_004c2688 = pvVar1;
    for (iVar3 = 0; iVar3 < DAT_004cf7ec; iVar3 = iVar3 + 1) {
      *puVar2 = pvVar1;
      if (param_3 == 0x10) {
        pvVar1 = (LPVOID)((int)pvVar1 + DAT_004cf7e8 * 2);
      }
      puVar2 = puVar2 + 1;
    }
    DAT_00439f58 = 1;
    FUN_0040790c();
  }
  else {
    iVar3 = (**(code **)(*DAT_00438f2c + 0x54))();
    if (iVar3 != 0) {
      FUN_0040bac8(iVar3);
    }
    if (DAT_00438f30 != (int *)0x0) {
      (**(code **)(*DAT_00438f30 + 8))();
      DAT_00438f30 = (int *)0x0;
    }
    if (DAT_00438f40 != (int *)0x0) {
      (**(code **)(*DAT_00438f40 + 8))();
      DAT_00438f40 = (int *)0x0;
    }
    FUN_00429fc4(&uStack_74,0,0x6c);
    uStack_74 = 0x6c;
    uStack_70 = 0x21;
    uStack_60 = 1;
    uStack_c = 0x218;
    iVar3 = (**(code **)(*DAT_00438f2c + 0x18))();
    if (iVar3 != 0) {
      FUN_0040bac8(iVar3);
    }
    FUN_00429fc4(&uStack_8,0,4);
    uStack_8 = 4;
    iVar3 = (**(code **)(*DAT_00438f30 + 0x30))();
    if (iVar3 != 0) {
      FUN_0040bac8(iVar3);
    }
    if (DAT_00438f44 == 0) {
      DAT_00438f38 = DAT_00438f30;
    }
    else {
      DAT_00438f38 = DAT_00438f34;
    }
    FUN_0040b700();
    FUN_0040b7b4();
    DAT_00438f4c = 0;
    iVar3 = FUN_0040b690();
    if (iVar3 == 0xf) {
      DAT_00439f58 = 1;
    }
    else {
      DAT_00439f58 = 2;
    }
    FUN_0040790c();
  }
  return DAT_004c2688;
}

