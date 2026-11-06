/* Ghidra address: 00407d18; FUN_00407d18 */

void __cdecl FUN_00407d18(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00407888((undefined4 *)(param_1 + 4));
  while (iVar1 != 0) {
    if (*(short *)(iVar1 + 0xc) < 0) {
      *(short *)(iVar1 + 0xc) = -*(short *)(iVar1 + 0xc);
      iVar1 = FUN_00407898(param_1 + 4);
    }
    else {
      *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + -1;
      if (*(short *)(iVar1 + 0xc) == 0) {
        iVar1 = FUN_0040781c((int *)(param_1 + 4));
      }
      else {
        iVar1 = FUN_00407898(param_1 + 4);
      }
    }
  }
  return;
}

