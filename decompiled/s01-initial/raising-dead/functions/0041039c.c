/* Ghidra address: 0041039c; FUN_0041039c */

int __cdecl FUN_0041039c(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f4b0(*(short **)(param_1 + 0x8b),param_2,(undefined2 *)(param_1 + 0x73),0);
  *(int *)(param_1 + 0x83) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}

