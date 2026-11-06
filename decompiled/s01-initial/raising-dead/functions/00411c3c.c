/* Ghidra address: 00411c3c; FUN_00411c3c */

void __cdecl FUN_00411c3c(int param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)(param_1 + 0x3f);
  puVar2 = (undefined2 *)(param_1 + 0x3d);
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  piVar1 = FUN_00430ec4(piVar1,(int *)(param_1 + 0x45));
  piVar1 = FUN_00431258(piVar1,puVar2);
  FUN_00431258(piVar1,puVar3);
  return;
}

