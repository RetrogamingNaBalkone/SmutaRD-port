/* Ghidra address: 00436d38; FUN_00436d38 */

undefined4 __cdecl FUN_00436d38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0043ca4c == '\0') {
    DAT_0053e14c = FUN_00436ba0;
    SetConsoleCtrlHandler(FUN_00436d14,1);
    DAT_0043ca4c = '\x01';
  }
  iVar2 = FUN_00436b80(param_1);
  if (iVar2 == -1) {
    DAT_0043c8b4 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_0043ca50 + iVar2 * 4);
  *(undefined4 *)(&DAT_0043ca50 + iVar2 * 4) = param_2;
  return uVar1;
}

