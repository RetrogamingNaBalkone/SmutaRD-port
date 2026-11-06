/* Ghidra address: 004231d4; FUN_004231d4 */

bool FUN_004231d4(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar2 = (int)*(short *)(DAT_0048aab4 + 0x74e) + ((int)*(short *)(DAT_0048aab4 + 0x74e) >> 1);
  if (*(int *)(in_stack_00000004 + 0x13c) < iVar2) {
    iVar2 = *(int *)(in_stack_00000004 + 0x13c);
  }
  iVar1 = FUN_0042319c();
  return iVar1 <= iVar2;
}

