/* Ghidra address: 0040754c; FUN_0040754c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040754c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  DAT_004c2688 = param_3;
  if (param_1 == 0x140) {
    _DAT_004c267c = 1.0;
  }
  else if (param_1 == 0x1900) {
    _DAT_004c267c = 2.0;
  }
  else {
    _DAT_004c267c = (float)(_DAT_0040760c * (longdouble)param_1);
  }
  if ((param_2 == 400) || (param_2 == 0x1e0)) {
    _DAT_004c2680 = 2.0;
  }
  else {
    _DAT_004c2680 = (float)(_DAT_00407618 * (longdouble)param_2);
  }
  uVar1 = FUN_00433130();
  DAT_0043a030 = (undefined2)uVar1;
  FUN_00407514((short)param_1,(short)param_2);
  return;
}

