/* Ghidra address: 00410368; FUN_00410368 */

int __cdecl FUN_00410368(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f4b0(*(short **)(param_1 + 0x87),param_2,(undefined2 *)(param_1 + 0x73),0);
  *(int *)(param_1 + 0x7f) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}

