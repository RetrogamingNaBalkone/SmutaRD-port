/* Ghidra address: 0040a7dc; FUN_0040a7dc */

undefined4 FUN_0040a7dc(void)

{
  undefined4 uVar1;
  
  if (DAT_0043547c != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_0043547c + 0x14))();
    return uVar1;
  }
  return 0;
}

