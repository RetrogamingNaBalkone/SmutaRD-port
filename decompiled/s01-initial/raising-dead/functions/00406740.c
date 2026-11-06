/* Ghidra address: 00406740; FUN_00406740 */

LPVOID __cdecl FUN_00406740(int *param_1,SIZE_T param_2)

{
  LPVOID pvVar1;
  SIZE_T SVar2;
  
  SVar2 = param_2;
  pvVar1 = FUN_004235d4(param_2);
  (**(code **)(*param_1 + 0xc))(param_1,*param_1,SVar2,param_1,pvVar1,param_2);
  *(int *)((int)pvVar1 + 0xe) = (int)pvVar1 + 0x12;
  *(undefined2 *)((int)pvVar1 + 8) = 0;
  *(undefined2 *)((int)pvVar1 + 6) = 1;
  return pvVar1;
}

