/* Ghidra address: 0040bed0; FUN_0040bed0 */

void __stdcall FUN_0040bed0(void)

{
  if (DAT_00438f28 == 0) {
    FUN_0042361c(DAT_004c2688);
    return;
  }
  if (DAT_00438f40 != (int *)0x0) {
    (**(code **)(*DAT_00438f40 + 8))();
    DAT_00438f40 = (int *)0x0;
  }
  if (DAT_00438f30 != (int *)0x0) {
    (**(code **)(*DAT_00438f30 + 8))();
    DAT_00438f30 = (int *)0x0;
  }
  if (DAT_00438f2c != (int *)0x0) {
    (**(code **)(*DAT_00438f2c + 8))();
    DAT_00438f2c = (int *)0x0;
  }
  return;
}

