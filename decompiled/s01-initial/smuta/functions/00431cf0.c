/* Ghidra address: 00431cf0; FUN_00431cf0 */

undefined4 FUN_00431cf0(void)

{
  BOOL BVar1;
  LPVOID in_stack_00000004;
  SIZE_T in_stack_00000008;
  
  BVar1 = VirtualFree(in_stack_00000004,in_stack_00000008,0x4000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

