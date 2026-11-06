/* Ghidra address: 0041425c; FUN_0041425c */

void __cdecl FUN_0041425c(int param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(param_1 + 0x77);
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  piVar1 = FUN_00431258(piVar1,(undefined2 *)(param_1 + 0x75));
  FUN_00431258(piVar1,puVar2);
  FUN_00431354((int *)(param_2 + 0x3e),(undefined1 *)(param_1 + 0x79),0x28,10);
  return;
}

