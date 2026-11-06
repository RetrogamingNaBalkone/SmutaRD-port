/* Ghidra address: 0040d830; FUN_0040d830 */

undefined4 __cdecl FUN_0040d830(int param_1)

{
  SHORT SVar1;
  
  SVar1 = GetAsyncKeyState(param_1);
  if (SVar1 != 0) {
    (&DAT_004d01f4)[param_1] = 1;
    return 0;
  }
  if ((&DAT_004d01f4)[param_1] == '\x01') {
    (&DAT_004d01f4)[param_1] = 0;
    return 1;
  }
  return 0;
}

