/* Ghidra address: 0040b7fe; FUN_0040b7fe */

LPVOID __stdcall FUN_0040b7fe(void)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  DAT_004cf7e8 = *(int *)(unaff_EBP + 8);
  DAT_004cf7ec = *(int *)(unaff_EBP + 0xc);
  iVar4 = *(int *)(unaff_EBP + 0x10);
  if (DAT_00438f28 == 0) {
    pvVar2 = FUN_004235d4(DAT_004cf7e8 * 2 * DAT_004cf7ec);
    puVar3 = &DAT_004c2690;
    DAT_004c2688 = pvVar2;
    for (iVar5 = 0; iVar5 < DAT_004cf7ec; iVar5 = iVar5 + 1) {
      *puVar3 = pvVar2;
      if (iVar4 == 0x10) {
        pvVar2 = (LPVOID)((int)pvVar2 + DAT_004cf7e8 * 2);
      }
      puVar3 = puVar3 + 1;
    }
    DAT_00439f58 = 1;
    FUN_0040790c();
  }
  else {
    iVar4 = (**(code **)(*DAT_00438f2c + 0x54))();
    if (iVar4 != 0) {
      FUN_0040bac8(iVar4);
    }
    if (DAT_00438f30 != (int *)0x0) {
      (**(code **)(*DAT_00438f30 + 8))();
      DAT_00438f30 = (int *)0x0;
    }
    if (DAT_00438f40 != (int *)0x0) {
      (**(code **)(*DAT_00438f40 + 8))();
      DAT_00438f40 = (int *)0x0;
    }
    FUN_00429fc4((undefined4 *)(unaff_EBP + -0x70),0,0x6c);
    *(undefined4 *)(unaff_EBP + -0x70) = 0x6c;
    *(undefined4 *)(unaff_EBP + -0x6c) = 0x21;
    *(undefined4 *)(unaff_EBP + -0x5c) = 1;
    piVar1 = DAT_00438f2c;
    *(undefined4 *)(unaff_EBP + -8) = 0x218;
    iVar4 = (**(code **)(*piVar1 + 0x18))();
    if (iVar4 != 0) {
      FUN_0040bac8(iVar4);
    }
    FUN_00429fc4((undefined4 *)(unaff_EBP + -4),0,4);
    piVar1 = DAT_00438f30;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    iVar4 = (**(code **)(*piVar1 + 0x30))();
    if (iVar4 != 0) {
      FUN_0040bac8(iVar4);
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
    iVar4 = FUN_0040b690();
    if (iVar4 == 0xf) {
      DAT_00439f58 = 1;
    }
    else {
      DAT_00439f58 = 2;
    }
    FUN_0040790c();
  }
  return DAT_004c2688;
}

