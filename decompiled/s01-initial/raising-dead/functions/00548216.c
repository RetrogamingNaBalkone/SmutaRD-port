/* Ghidra address: 00548216; FUN_00548216 */

void __stdcall FUN_00548216(void)

{
  int vKey;
  code *unaff_EBX;
  
  vKey = (*unaff_EBX)();
  if (vKey != 0) {
    GetAsyncKeyState(vKey);
  }
  return;
}

