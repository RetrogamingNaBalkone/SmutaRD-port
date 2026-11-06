/* Ghidra address: 00413098; FUN_00413098 */

void __cdecl FUN_00413098(int param_1,int param_2)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)(param_1 + 0x7b);
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  piVar1 = FUN_00430ec4(piVar1,(int *)(param_1 + 0x49));
  FUN_00431258(piVar1,puVar3);
  *(int *)(param_1 + 0x49) = -*(int *)(param_1 + 0x49);
  *(int *)(param_1 + 0x35) = -(int)*(short *)(param_1 + 0x1f);
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar1,&DAT_004d0a00);
  pvVar2 = FUN_004160d8(&DAT_004d0a00);
  *(LPVOID *)(param_1 + 0x8e) = pvVar2;
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  FUN_00431258(piVar1,(undefined2 *)(param_1 + 0x7d));
  *(undefined4 *)(param_1 + 0x9a) = 0;
  if (*(short *)(param_1 + 0x7d) < 0) {
    *(undefined4 *)(param_1 + 0x9a) = 1;
    *(short *)(param_1 + 0x7d) = -*(short *)(param_1 + 0x7d);
  }
  *(short *)(param_1 + 0x7f) = *(short *)(param_1 + 0x7d) >> 1;
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  FUN_00430e00(piVar1,&DAT_004d0a00);
  pvVar2 = FUN_004160d8(&DAT_004d0a00);
  *(LPVOID *)(param_1 + 0x92) = pvVar2;
  return;
}

