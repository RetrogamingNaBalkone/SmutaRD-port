/* Ghidra address: 0040cb64; FUN_0040cb64 */

void __cdecl FUN_0040cb64(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  tagRECT local_28;
  float local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  GetClientRect(DAT_004cff1c,&local_28);
  local_8 = (float)local_28.right;
  local_c = (float)local_28.bottom;
  local_14 = *(int *)(param_1 + 0x16);
  if (local_c < ((float)local_14 * local_8) / (float)*(int *)(param_1 + 0x12)) {
    local_18 = local_c / (float)local_14;
    iVar1 = FUN_00433130();
    local_10 = FUN_00433130();
    iVar3 = FUN_00433130();
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    iVar2 = 0;
  }
  else {
    local_18 = local_8 / (float)*(int *)(param_1 + 0x12);
    iVar1 = FUN_00433130();
    local_10 = FUN_00433130();
    iVar3 = 0;
    iVar2 = FUN_00433130();
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
  }
  FUN_0040bfc4((BITMAPINFO *)(param_1 + 0xe),iVar3,iVar2,iVar1,local_10);
  return;
}

