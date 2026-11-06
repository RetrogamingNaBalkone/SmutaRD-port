/* Ghidra address: 004143a8; FUN_004143a8 */

void __cdecl FUN_004143a8(int param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x8a);
  puVar2 = (undefined2 *)(param_1 + 0x82);
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x3e);
  }
  piVar1 = FUN_00431258(piVar1,(undefined2 *)(param_1 + 0x80));
  piVar1 = FUN_00431258(piVar1,puVar2);
  FUN_0043109c(piVar1,piVar3);
  return;
}

