/* Ghidra address: 0042015c; FUN_0042015c */

void __cdecl FUN_0042015c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (iVar2 = iVar2 >> 1, iVar3 = iVar2, 0 < iVar2) {
    for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
      iVar4 = iVar3 - iVar2;
      while ((-1 < iVar4 &&
             (*(short *)(*(int *)(param_1 + iVar4 * 4) + 0x17) <
              *(short *)(*(int *)(param_1 + (iVar2 + iVar4) * 4) + 0x17)))) {
        uVar1 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + (iVar2 + iVar4) * 4);
        *(undefined4 *)(param_1 + (iVar2 + iVar4) * 4) = uVar1;
        iVar4 = iVar4 - iVar2;
      }
    }
  }
  return;
}

