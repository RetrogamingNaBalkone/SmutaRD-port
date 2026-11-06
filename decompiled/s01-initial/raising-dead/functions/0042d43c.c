/* Ghidra address: 0042d43c; thunk_FUN_004301bc */

undefined4 __cdecl thunk_FUN_004301bc(uint param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  
  if (DAT_0043b4c0 <= param_1) {
    uVar1 = FUN_0043000c(6);
    return uVar1;
  }
  BVar2 = CloseHandle(*(HANDLE *)(&DAT_0053e22c + param_1 * 4));
  if (BVar2 == 1) {
    (&DAT_0043b4c4)[param_1] = 0;
    *(undefined4 *)(&DAT_0053e22c + param_1 * 4) = 0xffffffff;
    return 0;
  }
  uVar1 = FUN_00430070();
  return uVar1;
}

