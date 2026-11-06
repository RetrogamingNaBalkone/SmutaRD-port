/* Ghidra address: 00420d5c; FUN_00420d5c */

void FUN_00420d5c(void)

{
  int iVar1;
  short *psVar2;
  int in_stack_00000004;
  
  iVar1 = 9;
  psVar2 = (short *)(in_stack_00000004 + 0x116);
  do {
    if (0 < *psVar2) {
      FUN_00420ed0();
      FUN_0040895c();
      return;
    }
    iVar1 = iVar1 + -1;
    psVar2 = psVar2 + -1;
  } while (0 < iVar1);
  FUN_00421c74();
  FUN_00427c8d();
  *(undefined2 *)(in_stack_00000004 + 0x11a) = 0;
  *(undefined2 *)(in_stack_00000004 + 0x124) = 1;
  return;
}

