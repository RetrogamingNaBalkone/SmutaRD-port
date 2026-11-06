/* Ghidra address: 00410440; FUN_00410440 */

void __cdecl FUN_00410440(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x71) < 0x1d) {
    *(short *)(param_1 + 0x71) = *(short *)(param_1 + 0x71) + 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x71) = 0;
  }
  FUN_00406c38(*(int *)(param_1 + 0x65),0,0x1e,*(short *)(param_1 + 0x71));
  iVar1 = *(int *)(param_1 + 0x83);
  *(undefined2 *)(iVar1 + 4) = 0x400;
  FUN_00406c38(iVar1,0,0x1e,*(short *)(param_1 + 0x71));
  return;
}

