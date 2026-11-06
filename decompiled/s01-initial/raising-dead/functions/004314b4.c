/* Ghidra address: 004314b4; FUN_004314b4 */

int * __cdecl FUN_004314b4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x24))();
  if (iVar1 == -1) {
    FUN_0043201c(*param_1,4);
  }
  return param_1;
}

