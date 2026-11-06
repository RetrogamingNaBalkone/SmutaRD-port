/* Ghidra address: 00430c98; FUN_00430c98 */

bool __cdecl FUN_00430c98(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[2] = 0;
  if (*(int *)(*param_1 + 0xc) != 0) {
    FUN_0043201c(*param_1,2);
    return false;
  }
  if (*(int *)(*param_1 + 8) != 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(*param_1 + 4);
      if (*(uint *)(iVar1 + 0x20) < *(uint *)(iVar1 + 0x24)) {
        iVar1 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
      }
      else {
        iVar1 = 0;
      }
      if (param_2 <= iVar1) goto LAB_00430cf2;
    }
    FUN_004314b4(*(int **)(*param_1 + 8));
  }
LAB_00430cf2:
  if ((param_2 == 0) && ((*(byte *)(*param_1 + 0x11) & 1) != 0)) {
    FUN_00430d9c(param_1);
    if (*(int *)(*param_1 + 0xc) != 0) {
      FUN_0043201c(*param_1,2);
    }
  }
  return *(int *)(*param_1 + 0xc) == 0;
}

