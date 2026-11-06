/* Ghidra address: 004104a4; FUN_004104a4 */

void __cdecl FUN_004104a4(int *param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  
  FUN_00410270((int)param_1,param_2);
  puVar2 = (undefined2 *)((int)param_1 + 0x92);
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  piVar1 = FUN_00431258(piVar1,(undefined2 *)(param_1 + 0x24));
  FUN_00431258(piVar1,puVar2);
  if ((short)param_1[0x24] != 1000) {
    *(undefined2 *)(*(int *)((int)param_1 + 0x83) + 4) = 0x400;
    FUN_0040e2bc(param_1,PTR_FUN_00439b5c,DAT_00439b60,DAT_00439b64,0x21);
  }
  return;
}

