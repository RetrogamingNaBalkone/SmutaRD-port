/* Ghidra address: 0040a830; FUN_0040a830 */

undefined4 FUN_0040a830(void)

{
  undefined4 uVar1;
  
  if (DAT_0043547c != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_0043547c + 0x30))();
    return uVar1;
  }
  return 0;
}

