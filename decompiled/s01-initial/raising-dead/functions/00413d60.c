/* Ghidra address: 00413d60; FUN_00413d60 */

void __cdecl FUN_00413d60(int param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(param_1 + 0xae);
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  piVar1 = FUN_00431258(piVar1,(undefined2 *)(param_1 + 0xac));
  FUN_00431258(piVar1,puVar2);
  (&DAT_004d0c04)[*(short *)(param_1 + 0xac)] = param_1;
  FUN_0041425c(param_1,param_2);
  *(undefined2 *)(param_1 + 0xb6) = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  return;
}

