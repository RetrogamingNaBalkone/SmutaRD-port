/* Ghidra address: 0040df10; FUN_0040df10 */

uint __cdecl FUN_0040df10(int param_1)

{
  undefined2 extraout_var;
  undefined2 in_CX;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
  return CONCAT22(extraout_var,in_CX) & 0xffff0001;
}

