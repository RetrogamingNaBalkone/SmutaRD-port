/* Ghidra address: 00436258; FUN_00436258 */

undefined4 __cdecl FUN_00436258(LPVOID param_1)

{
  BOOL BVar1;
  
  BVar1 = VirtualFree(param_1,0,0x8000);
  if (BVar1 != 1) {
    return 0;
  }
  return 1;
}

