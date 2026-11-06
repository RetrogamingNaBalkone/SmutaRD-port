/* Ghidra address: 004103d4; FUN_004103d4 */

int __cdecl FUN_004103d4(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040f4b0(*(short **)(param_1 + 0x69),param_2,(undefined2 *)(param_1 + 0x73),0);
  *(int *)(param_1 + 0x65) = iVar1;
  *(undefined2 *)(iVar1 + 4) = 0;
  return iVar1;
}

