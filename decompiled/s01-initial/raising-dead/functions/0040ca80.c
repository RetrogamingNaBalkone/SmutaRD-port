/* Ghidra address: 0040ca80; FUN_0040ca80 */

void __cdecl FUN_0040ca80(int param_1)

{
  int iVar1;
  short local_10 [6];
  
  if (*(int *)(param_1 + 0x92) != 0) {
    FUN_00429e84(local_10);
    FUN_00429e9c(local_10);
    FUN_0040bf30((BITMAPINFO *)&DAT_004393a0,*(void **)(param_1 + 0x92));
    FUN_00429ef0(local_10);
    iVar1 = FUN_00429ebc(local_10);
    DAT_0043dc68 = iVar1 + DAT_0043dc68 >> 1;
  }
  return;
}

