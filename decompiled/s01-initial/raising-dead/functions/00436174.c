/* Ghidra address: 00436174; FUN_00436174 */

undefined4 __cdecl FUN_00436174(int param_1,undefined4 *param_2,uint *param_3)

{
  LPVOID pvVar1;
  uint dwSize;
  
  if (DAT_0043c88c == 0) {
    if ((DAT_0053e530 == 2) || (DAT_0053e530 == 1)) {
      DAT_0043c88c = 0x100000;
    }
    else {
      DAT_0043c88c = 0x400000;
    }
  }
  dwSize = (param_1 + DAT_0043c88c) - 1U & ~(DAT_0043c88c - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *param_2 = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    return 0;
  }
  *param_3 = dwSize;
  return 1;
}

