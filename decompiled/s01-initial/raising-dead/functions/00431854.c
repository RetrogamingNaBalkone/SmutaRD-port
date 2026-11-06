/* Ghidra address: 00431854; FUN_00431854 */

int __cdecl FUN_00431854(int param_1,int param_2,int param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 == 2) {
    if (((*(byte *)(param_1 + 0x30) & 4) == 0) && (param_2 < 1)) {
      iVar4 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) + param_2;
    }
    else {
      iVar4 = -1;
    }
  }
  else {
    iVar4 = -1;
    if (param_3 == 0) {
      iVar4 = param_2;
    }
  }
  if ((param_4 & 1) != 0) {
    if (param_3 == 1) {
      if (*(int *)(param_1 + 0x20) == 0) {
        iVar4 = param_2;
        if (*(int *)(param_1 + 0x14) != 0) {
          iVar4 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 8)) + param_2;
        }
      }
      else {
        iVar4 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 8)) + param_2;
      }
    }
    if ((iVar4 < 0) || (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) < iVar4)) {
      iVar4 = -1;
    }
    else {
      uVar1 = *(int *)(param_1 + 8) + iVar4;
      uVar2 = uVar1;
      if ((*(uint *)(param_1 + 0x1c) != 0) && (*(uint *)(param_1 + 0x1c) < uVar1)) {
        uVar2 = *(uint *)(param_1 + 0x1c);
      }
      uVar3 = uVar1;
      if ((*(int *)(param_1 + 0x24) != 0) && (uVar1 < *(uint *)(param_1 + 0x24))) {
        uVar3 = *(uint *)(param_1 + 0x24);
      }
      FUN_00431df4(param_1,uVar2,uVar1,uVar3);
    }
  }
  if ((param_4 & 2) != 0) {
    if (param_3 == 1) {
      if (*(int *)(param_1 + 0x14) == 0) {
        iVar4 = param_2;
        if (*(int *)(param_1 + 0x20) != 0) {
          iVar4 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 8)) + param_2;
        }
      }
      else {
        iVar4 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 8)) + param_2;
      }
    }
    if ((iVar4 < 0) || (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) < iVar4)) {
      iVar4 = -1;
    }
    else {
      uVar2 = *(int *)(param_1 + 8) + iVar4;
      if ((*(uint *)(param_1 + 0x18) == 0) || (*(uint *)(param_1 + 0x18) <= uVar2)) {
        uVar1 = *(uint *)(param_1 + 0xc);
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x18);
      }
      FUN_00431e28(param_1,uVar2,uVar1);
    }
  }
  return iVar4;
}

