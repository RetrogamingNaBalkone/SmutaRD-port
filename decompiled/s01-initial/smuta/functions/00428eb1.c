/* Ghidra address: 00428eb1; FUN_00428eb1 */

undefined4 * FUN_00428eb1(void)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  undefined4 *in_stack_00000004;
  
  hMem = GlobalAlloc(0x2002,DAT_00437658);
  pvVar1 = GlobalLock(hMem);
  *in_stack_00000004 = pvVar1;
  FUN_00428c43();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

