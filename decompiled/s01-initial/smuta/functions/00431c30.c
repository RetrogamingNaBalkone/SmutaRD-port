/* Ghidra address: 00431c30; FUN_00431c30 */

undefined4 FUN_00431c30(void)

{
  LPVOID pvVar1;
  uint dwSize;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint *in_stack_0000000c;
  
  if (DAT_00438c40 == 0) {
    if ((DAT_0049ac24 == 1) || (DAT_0049ac24 == 2)) {
      DAT_00438c40 = 0x100000;
    }
    else {
      DAT_00438c40 = 0x400000;
    }
  }
  dwSize = (in_stack_00000004 + DAT_00438c40) - 1U & ~(DAT_00438c40 - 1U);
  pvVar1 = VirtualAlloc((LPVOID)0x0,dwSize,0x2000,1);
  *in_stack_00000008 = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    return 0;
  }
  *in_stack_0000000c = dwSize;
  return 1;
}

