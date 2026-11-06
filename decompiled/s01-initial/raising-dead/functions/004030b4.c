/* Ghidra address: 004030b4; FUN_004030b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __stdcall FUN_004030b4(void)

{
  DAT_00438334 = (DAT_00438334 + 1) % (DAT_00438328 + 1);
  if (DAT_00438334 == 0) {
    DAT_00438334 = 1;
  }
  _DAT_0043f464 = DAT_00438334;
  if (DAT_0043832c == 0) {
    FUN_0042ed78(&DAT_0043f670,(byte *)s__sdata_DEMO_ld_004383ea);
  }
  else {
    FUN_0042ed78(&DAT_0043f670,(byte *)s__sdata_DEMO_ld__d_004383f9);
  }
  return &DAT_0043f670;
}

