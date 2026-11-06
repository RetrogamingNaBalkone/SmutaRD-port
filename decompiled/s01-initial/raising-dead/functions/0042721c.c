/* Ghidra address: 0042721c; FUN_0042721c */

undefined4 __cdecl FUN_0042721c(int *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004270dc(param_1,param_2);
  if ((*(byte *)(param_1[1] + 0x108 + iVar1 * 0x10e) & 2) != 0) {
    return *(undefined4 *)(param_1[1] + 0x10a + iVar1 * 0x10e);
  }
  return 0;
}

