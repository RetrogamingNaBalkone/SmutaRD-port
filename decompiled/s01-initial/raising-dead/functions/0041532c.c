/* Ghidra address: 0041532c; FUN_0041532c */

undefined4 __cdecl FUN_0041532c(int param_1)

{
  undefined4 uVar1;
  short local_6;
  
  FUN_00415160(&local_6,param_1,*(int *)(DAT_004f1434 + 0x754));
  FUN_0040f8c4(&local_6,*(short *)(param_1 + 0x3d) - local_6);
  if ((local_6 < 0x2e) || (0x13a < local_6)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

