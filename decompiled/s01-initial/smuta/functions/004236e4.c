/* Ghidra address: 004236e4; FUN_004236e4 */

void FUN_004236e4(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(short *)(in_stack_00000004 + 0xfc) != 0) {
    iVar1 = 0;
    do {
      FUN_0041fba0();
      iVar1 = iVar1 + 0x1e;
    } while (iVar1 < 0x168);
  }
  return;
}

