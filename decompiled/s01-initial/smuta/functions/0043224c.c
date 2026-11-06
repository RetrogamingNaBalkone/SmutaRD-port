/* Ghidra address: 0043224c; FUN_0043224c */

undefined4 FUN_0043224c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000008;
  
  if (DAT_00438cf0 == '\0') {
    DAT_0049aa4c = FUN_004320b4;
    SetConsoleCtrlHandler(FUN_00432228,1);
    DAT_00438cf0 = '\x01';
  }
  iVar2 = FUN_00432094();
  if (iVar2 == -1) {
    DAT_00438c44 = 0x13;
    return 0xffffffff;
  }
  uVar1 = *(undefined4 *)(&DAT_00438cf4 + iVar2 * 4);
  *(undefined4 *)(&DAT_00438cf4 + iVar2 * 4) = in_stack_00000008;
  return uVar1;
}

