/* Ghidra address: 00423a44; FUN_00423a44 */

undefined4 __stdcall FUN_00423a44(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_00548000();
  if (((iVar1 != 0x800) && (iVar1 != 0x200)) && (iVar1 != 0x4000)) {
    return 1;
  }
  FUN_0040dab4();
  if (iVar1 == 0x4000) {
    return 0;
  }
  FUN_0042392c();
  return 1;
}

