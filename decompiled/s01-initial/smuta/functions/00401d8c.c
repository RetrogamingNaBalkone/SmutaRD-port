/* Ghidra address: 00401d8c; FUN_00401d8c */

void FUN_00401d8c(void)

{
  int iVar1;
  
  iVar1 = FUN_00401b58();
  while (iVar1 != 0) {
    if (*(short *)(iVar1 + 0xc) < 0) {
      *(short *)(iVar1 + 0xc) = -*(short *)(iVar1 + 0xc);
      iVar1 = FUN_00401b68();
    }
    else {
      *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + -1;
      if (*(short *)(iVar1 + 0xc) == 0) {
        iVar1 = FUN_00401aec();
      }
      else {
        iVar1 = FUN_00401b68();
      }
    }
  }
  return;
}

