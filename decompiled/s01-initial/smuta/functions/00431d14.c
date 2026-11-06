/* Ghidra address: 00431d14; FUN_00431d14 */

undefined4 FUN_00431d14(void)

{
  BOOL BVar1;
  LPVOID in_stack_00000004;
  
  BVar1 = VirtualFree(in_stack_00000004,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

