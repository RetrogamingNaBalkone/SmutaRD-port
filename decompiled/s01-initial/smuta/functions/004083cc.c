/* Ghidra address: 004083cc; FUN_004083cc */

void FUN_004083cc(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  FUN_004083bc();
  uVar1 = *(int *)(DAT_0044f640 + 0x32) - (int)**(short **)(in_stack_00000004 + 0x99);
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  *(short *)(in_stack_00000004 + 0x5b) = (short)iVar2;
  *(undefined2 *)(in_stack_00000004 + 0x5d) = *(undefined2 *)(DAT_0044f640 + 0x26);
  return;
}

