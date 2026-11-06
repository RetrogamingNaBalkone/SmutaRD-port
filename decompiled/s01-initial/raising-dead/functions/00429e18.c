/* Ghidra address: 00429e18; FUN_00429e18 */

undefined4 __stdcall FUN_00429e18(void)

{
  undefined4 uVar1;
  
  if (DAT_0043a1cc != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_0043a1cc + 0x30))();
    return uVar1;
  }
  return 0;
}

