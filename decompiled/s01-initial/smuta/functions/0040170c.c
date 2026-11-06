/* Ghidra address: 0040170c; FUN_0040170c */

void FUN_0040170c(void)

{
  if (DAT_00434074 != (HMIXER)0x0) {
    mixerClose(DAT_00434074);
    DAT_00434074 = (HMIXER)0x0;
  }
  return;
}

