/* Ghidra address: 00407b9c; FUN_00407b9c */

void __cdecl FUN_00407b9c(undefined4 param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)((&DAT_004c2690)[param_3] + param_2 * 2);
  puVar2 = puVar1 + (param_4 - param_2) + 1;
  for (; puVar2 != puVar1; puVar1 = puVar1 + 1) {
    *puVar1 = param_5;
  }
  return;
}

