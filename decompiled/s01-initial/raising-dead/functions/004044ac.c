/* Ghidra address: 004044ac; FUN_004044ac */

void __cdecl FUN_004044ac(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_0040449c(param_1);
  uVar1 = *(int *)(DAT_0053d640 + 0x32) - (int)**(short **)(param_1 + 0x99);
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  *(short *)(param_1 + 0x5b) = (short)iVar2;
  *(undefined2 *)(param_1 + 0x5d) = *(undefined2 *)(DAT_0053d640 + 0x26);
  return;
}

