/* Ghidra address: 0042fb2a; FUN_0042fb2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fb2a(void)

{
  float10 fVar1;
  byte bVar2;
  float10 in_ST0;
  float10 fVar3;
  byte bStack_3;
  
  if (in_ST0 != (float10)0) {
    fVar1 = (float10)0;
    bVar2 = NAN(_DAT_00439024) | (byte)((ushort)((ushort)(_DAT_00439024 < fVar1) << 9) >> 8);
    bStack_3 = bVar2 | (byte)((ushort)((ushort)(_DAT_00439024 != fVar1) << 10) >> 8) |
               (byte)((ushort)((ushort)(_DAT_00439024 == fVar1) << 0xe) >> 8);
    fVar3 = ABS(in_ST0) - (float10)(unkint10)(ABS(in_ST0) / _DAT_00439024) * _DAT_00439024;
    if ((_DAT_00439024 != fVar1) == 0) {
      if (3 < (byte)(bVar2 << 1 | (char)(bStack_3 << 1) < '\0')) {
        fVar3 = _DAT_00439024 - fVar3;
      }
      fptan(fVar3);
    }
  }
  return;
}

