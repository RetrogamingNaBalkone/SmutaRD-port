/* Ghidra address: 00410270; FUN_00410270 */

void __cdecl FUN_00410270(int param_1,int param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00431258(piVar2,(undefined2 *)(param_1 + 0x75));
  if (*(short *)(param_1 + 0x75) < 0) {
    *(short *)(param_1 + 0x75) = -*(short *)(param_1 + 0x75);
    *(undefined1 *)(param_1 + 0x8f) = 0;
  }
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  pvVar1 = FUN_0041606c(&DAT_004d0a00);
  *(LPVOID *)(param_1 + 0x77) = pvVar1;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  pvVar1 = FUN_0041606c(&DAT_004d0a00);
  *(LPVOID *)(param_1 + 0x7b) = pvVar1;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  pvVar1 = FUN_004160d8(&DAT_004d0a00);
  *(LPVOID *)(param_1 + 0x87) = pvVar1;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar2,&DAT_004d0a00);
  puVar3 = &DAT_004d0a00;
  pvVar1 = FUN_004160d8(&DAT_004d0a00);
  *(LPVOID *)(param_1 + 0x8b) = pvVar1;
  (**(code **)(*(int *)(param_1 + 0x14) + 0x34))(pvVar1,*(int *)(param_1 + 0x14),puVar3,param_1,0);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x38))();
  return;
}

