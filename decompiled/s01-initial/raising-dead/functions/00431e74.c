/* Ghidra address: 00431e74; FUN_00431e74 */

undefined4 __cdecl FUN_00431e74(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x24)) {
    iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}

