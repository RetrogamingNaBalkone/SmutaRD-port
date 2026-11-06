/* Ghidra address: 00407628; FUN_00407628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00407628(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00427390(param_1);
  *param_1 = &PTR_FUN_00438eac;
  DAT_004c2688 = param_2;
  *(int *)((int)param_1 + 0x32) = DAT_004cff0c;
  *(int *)((int)param_1 + 0x36) = DAT_004cff10;
  _DAT_004c2678 = *(undefined2 *)((int)param_1 + 0x32);
  if (DAT_004cff0c == 0x140) {
    _DAT_004c267c = 1.0;
  }
  else {
    _DAT_004c267c = (float)(_DAT_00407724 * (longdouble)DAT_004cff0c);
  }
  if ((DAT_004cff10 == 200) || (DAT_004cff10 == 0xf0)) {
    _DAT_004c2680 = 1.0;
  }
  else if ((DAT_004cff10 == 400) || (DAT_004cff10 == 0x1e0)) {
    _DAT_004c2680 = 2.0;
  }
  else {
    _DAT_004c2680 = (float)(_DAT_00407730 * (longdouble)DAT_004cff10);
  }
  uVar1 = FUN_00433130();
  DAT_0043a030 = (undefined2)uVar1;
  FUN_00427430((int)param_1,*(undefined4 *)((int)param_1 + 0x32),
               *(undefined4 *)((int)param_1 + 0x36),2);
  FUN_004074e0(param_1,*(short *)((int)param_1 + 0x32),*(short *)((int)param_1 + 0x36));
  return param_1;
}

