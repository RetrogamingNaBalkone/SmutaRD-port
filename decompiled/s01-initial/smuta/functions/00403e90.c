/* Ghidra address: 00403e90; FUN_00403e90 */

void FUN_00403e90(void)

{
  if (DAT_00434138 != (int *)0x0) {
    (**(code **)(*DAT_00434138 + 8))();
    DAT_00434138 = (int *)0x0;
  }
  if (DAT_0043412c != (int *)0x0) {
    (**(code **)(*DAT_0043412c + 8))();
    DAT_0043412c = (int *)0x0;
  }
  if (DAT_00434128 != (int *)0x0) {
    (**(code **)(*DAT_00434128 + 8))();
    DAT_00434128 = (int *)0x0;
  }
  return;
}

