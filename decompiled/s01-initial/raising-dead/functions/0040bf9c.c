/* Ghidra address: 0040bf9c; FUN_0040bf9c */

int __cdecl FUN_0040bf9c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) && (*(short *)(param_1 + 0xe) == 8)) {
    iVar1 = 0x100;
  }
  return param_1 + iVar1 * 4 + 0x28;
}

