/* Ghidra address: 0040c408; FUN_0040c408 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040c408(int param_1)

{
  int iVar1;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  iVar1 = FUN_00433130();
  *(int *)(param_1 + 0x8a) = iVar1;
  if (iVar1 < 0) {
    _DAT_004397cc = FUN_00433130();
  }
  else if (iVar1 < 1) {
    _DAT_004397cc = 0;
  }
  else {
    _DAT_004397cc = FUN_00433130();
  }
  iVar1 = FUN_00433130();
  *(int *)(param_1 + 0x8e) = iVar1;
  if (iVar1 < 0) {
    _DAT_004397d0 = FUN_00433130();
  }
  else if (iVar1 < 1) {
    _DAT_004397d0 = 0;
  }
  else {
    _DAT_004397d0 = FUN_00433130();
  }
  SetCursorPos(DAT_00439890,DAT_00439894);
  return;
}

