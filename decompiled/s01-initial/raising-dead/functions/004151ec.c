/* Ghidra address: 004151ec; FUN_004151ec */

undefined4 __cdecl FUN_004151ec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004150ec(param_1);
  if ((*(int *)(param_1 + 0x13d) <= iVar1) && (*(char *)(param_1 + 0xff) == '\0')) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xff) = 0;
  return 1;
}

