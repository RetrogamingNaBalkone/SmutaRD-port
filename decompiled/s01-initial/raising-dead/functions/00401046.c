/* Ghidra address: 00401046; __GetExceptDLLinfo */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __GetExceptDLLinfo(undefined4 *param_1)

{
                    /* 0x1046  5  __GetExceptDLLinfo */
  _DAT_0043a374 = FUN_004010f9();
  _DAT_0043a374 = _DAT_0043a374 + 0x30;
  _DAT_0043a358 = &DAT_0043a444;
  _DAT_0043a35c = &__DebuggerHookData;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_0043a34c;
  return;
}

