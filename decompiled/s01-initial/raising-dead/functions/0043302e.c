/* Ghidra address: 0043302e; FUN_0043302e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0043302e(void)

{
  longdouble lVar1;
  byte bVar2;
  longdouble in_ST0;
  longdouble lVar3;
  byte bStack_3;
  
  if (in_ST0 != (longdouble)0) {
    lVar1 = (longdouble)0;
    bVar2 = NAN(_DAT_0043c3bc) | (byte)((ushort)((ushort)(_DAT_0043c3bc < lVar1) << 9) >> 8);
    bStack_3 = bVar2 | (byte)((ushort)((ushort)(_DAT_0043c3bc != lVar1) << 10) >> 8) |
               (byte)((ushort)((ushort)(_DAT_0043c3bc == lVar1) << 0xe) >> 8);
    lVar3 = ABS(in_ST0) - (longdouble)(unkint10)(ABS(in_ST0) / _DAT_0043c3bc) * _DAT_0043c3bc;
    if ((_DAT_0043c3bc != lVar1) == 0) {
      if (3 < (byte)(bVar2 << 1 | (char)(bStack_3 << 1) < '\0')) {
        lVar3 = _DAT_0043c3bc - lVar3;
      }
      fptan(lVar3);
    }
  }
  return;
}

