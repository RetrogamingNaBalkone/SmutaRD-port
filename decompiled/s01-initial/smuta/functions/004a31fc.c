/* Ghidra address: 004a31fc; FUN_004a31fc */

void FUN_004a31fc(void)

{
  int vKey;
  code *unaff_EBX;
  
  vKey = (*unaff_EBX)();
  if (vKey != 0) {
    GetAsyncKeyState(vKey);
  }
  return;
}

