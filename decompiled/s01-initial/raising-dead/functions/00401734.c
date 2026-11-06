/* Ghidra address: 00401734; FUN_00401734 */

void __cdecl FUN_00401734(short param_1)

{
  short sVar1;
  
  DAT_0043a18c = DAT_0043a18c + param_1;
  if (DAT_0043dc70 < DAT_0043a18c) {
    DAT_0043a18c = DAT_0043dc70;
  }
  sVar1 = DAT_0043dc7a;
  if (param_1 != DAT_0043da18) {
    sVar1 = (short)(((int)DAT_0043dc7a * (int)param_1) / DAT_0043da18);
  }
  DAT_0043dc78 = DAT_0043dc78 + sVar1;
  if (DAT_0043dc74 < DAT_0043dc78) {
    DAT_0043dc78 = DAT_0043dc74;
  }
  return;
}

