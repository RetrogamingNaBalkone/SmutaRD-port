/* Ghidra address: 00411e60; FUN_00411e60 */

void __cdecl FUN_00411e60(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  FUN_00411c3c(param_1,param_2);
  sVar3 = 0;
  do {
    if (param_2 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(param_2 + 0x3e);
    }
    FUN_00431258(piVar2,(undefined2 *)(sVar3 * 2 + param_1 + 0x7f));
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0xb);
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  puVar1 = FUN_0041614c((uint *)&DAT_004d0a00);
  *(undefined4 **)(param_1 + 0xc1) = puVar1;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  puVar1 = FUN_0041614c((uint *)&DAT_004d0a00);
  *(undefined4 **)(param_1 + 0xc5) = puVar1;
  puVar5 = (undefined2 *)(param_1 + 0x9b);
  puVar4 = (undefined2 *)(param_1 + 0x99);
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  piVar2 = FUN_00431258(piVar2,(undefined2 *)(param_1 + 0x97));
  piVar2 = FUN_00431258(piVar2,puVar4);
  FUN_00431258(piVar2,puVar5);
  FUN_00404a24(DAT_004385a0,*(short *)(param_1 + 0x7f));
  FUN_00404a48(DAT_004385a0,*(undefined2 *)(param_1 + 0x105));
  return;
}

