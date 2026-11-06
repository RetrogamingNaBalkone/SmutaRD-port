/* Ghidra address: 00432e70; FUN_00432e70 */

void __cdecl FUN_00432e70(undefined4 param_1,undefined2 param_2,double *param_3)

{
  ushort uVar1;
  byte bVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  
  *(byte *)((int)param_3 + 7) = *(byte *)((int)param_3 + 7) & 0x7f;
  lVar3 = (longdouble)*param_3;
  uVar1 = *(short *)((int)param_3 + 6) * 2;
  bVar2 = (byte)param_2;
  if (uVar1 == 0) {
    if (bVar2 != 0xff) {
      return;
    }
  }
  else {
    if (uVar1 < 0x7fe0) {
      lVar4 = SQRT((longdouble)1 - lVar3 * lVar3);
      lVar5 = lVar4;
      if (lVar4 < lVar3 || (lVar4 == lVar3) != 0) {
        if ((short)((ushort)(byte)((lVar4 < lVar3 |
                                   (byte)((ushort)((ushort)(lVar4 == lVar3) << 0xe) >> 8)) * '\x02')
                   << 8) < 0) {
          fscale((longdouble)3.141592653589793,(longdouble)-2);
          return;
        }
        bVar2 = ~bVar2;
        lVar5 = lVar3;
        lVar3 = lVar4;
      }
      fpatan(lVar3,lVar5);
      if (bVar2 == 0) {
        return;
      }
      fscale((longdouble)3.141592653589793,(longdouble)-1);
      return;
    }
    if ((0x7fe0 < uVar1) ||
       ((*(short *)((int)param_3 + 4) != 0 || *(short *)((int)param_3 + 2) != 0) ||
        *(short *)param_3 != 0)) {
      *(byte *)((int)param_3 + 7) =
           *(byte *)((int)param_3 + 7) |
           (byte)((ushort)param_2 >> 9) | (*(short *)((int)param_3 + 6) < 0) << 7;
      FUN_00434c3c(1,param_1,param_3,(undefined8 *)0x0,DAT_0043c39e,DAT_0043c3a2);
      return;
    }
    if (bVar2 == 0xff) {
      return;
    }
  }
  fscale((longdouble)3.141592653589793,(longdouble)-1);
  return;
}

