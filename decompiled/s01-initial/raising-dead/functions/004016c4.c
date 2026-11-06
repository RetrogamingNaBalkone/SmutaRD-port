/* Ghidra address: 004016c4; FUN_004016c4 */

void __cdecl FUN_004016c4(short param_1)

{
  short sVar1;
  
  DAT_0043a18c = DAT_0043a18c - param_1;
  if (DAT_0043a18c < DAT_0043dc72) {
    DAT_0043a18c = DAT_0043dc72;
  }
  sVar1 = DAT_0043dc7a;
  if (param_1 != DAT_0043da18) {
    sVar1 = (short)(((int)DAT_0043dc7a * (int)param_1) / DAT_0043da18);
  }
  DAT_0043dc78 = DAT_0043dc78 - sVar1;
  if (DAT_0043dc78 < DAT_0043dc76) {
    DAT_0043dc78 = DAT_0043dc76;
  }
  return;
}

