/* Ghidra address: 0043340c; FUN_0043340c */

void __cdecl FUN_0043340c(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_1 == 0) {
    uVar1 = 0x407e;
    uVar3 = 0x3f6a;
  }
  else {
    uVar1 = 0x43fe;
    uVar3 = 0x3bcd;
  }
  uVar2 = param_4 & 0x7fff;
  if (uVar2 == 0x7fff) {
    return;
  }
  if (uVar2 <= uVar1) {
    if (uVar1 == uVar2) {
      FUN_00432fe4();
      FUN_00432fe4();
      FUN_00432fe4();
      return;
    }
    if (((((short)param_2 == 0 && uVar2 == 0) && param_2._2_2_ == 0) && (short)param_3 == 0) &&
        param_3._2_2_ == 0) {
      return;
    }
    if (uVar3 <= uVar2) {
      return;
    }
  }
  DAT_0043c8b4 = 0x22;
  return;
}

