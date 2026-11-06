/* Ghidra address: 004124f8; FUN_004124f8 */

undefined4 __cdecl FUN_004124f8(int *param_1,short param_2,ushort param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined2 in_stack_0000000a;
  
  iVar3 = DAT_004f1434;
  if (param_2 == 0) {
    if ((short)param_3 < 0) {
      *(undefined1 *)((int)param_1 + 0x12d) = 1;
    }
    if ((0 < (short)param_3) && (*(short *)((int)param_1 + 0x7f) == *(short *)((int)param_1 + 0x83))
       ) {
      return 0;
    }
    *(short *)((int)param_1 + 0x7f) = *(short *)((int)param_1 + 0x7f) + param_3;
    if (*(short *)((int)param_1 + 0x7f) < 0) {
      *(undefined2 *)((int)param_1 + 0x7f) = 0;
    }
    else if (*(short *)((int)param_1 + 0x83) < *(short *)((int)param_1 + 0x7f)) {
      *(short *)((int)param_1 + 0x7f) = *(short *)((int)param_1 + 0x83);
    }
    _param_2 = FUN_00404a24(DAT_004385a0,*(short *)((int)param_1 + 0x7f));
  }
  else if ((param_2 < 0x3c) || (0x45 < param_2)) {
    if ((param_2 < 0x32) || (0x3b < param_2)) {
      if (param_2 == 1) {
        if ((0 < (short)param_3) &&
           (*(short *)((int)param_1 + 0x81) == *(short *)((int)param_1 + 0x85))) {
          return 0;
        }
        *(short *)((int)param_1 + 0x81) = *(short *)((int)param_1 + 0x81) + param_3;
        if (*(short *)((int)param_1 + 0x81) < 0) {
          *(undefined2 *)((int)param_1 + 0x81) = 0;
        }
        else if (*(short *)((int)param_1 + 0x85) < *(short *)((int)param_1 + 0x81)) {
          *(short *)((int)param_1 + 0x81) = *(short *)((int)param_1 + 0x85);
        }
        _param_2 = FUN_00404a48(DAT_004385a0,*(undefined2 *)((int)param_1 + 0x81));
      }
      else if (param_2 == 2) {
        *(ushort *)((int)param_1 + 0x83) = param_3;
        *(ushort *)((int)param_1 + 0x7f) = param_3;
        FUN_00404a24(DAT_004385a0,param_3);
        _param_2 = FUN_00404a70(DAT_004385a0,*(undefined2 *)((int)param_1 + 0x83));
      }
      else if (param_2 == 3) {
        *(short *)((int)param_1 + 0x85) = *(short *)((int)param_1 + 0x85) + param_3;
        *(undefined2 *)((int)param_1 + 0x81) = *(undefined2 *)((int)param_1 + 0x85);
        FUN_00404a48(DAT_004385a0,*(undefined2 *)((int)param_1 + 0x85));
        _param_2 = FUN_00404a88(DAT_004385a0,*(undefined2 *)((int)param_1 + 0x85));
      }
      else if (param_2 == 10) {
        *(ushort *)((int)param_1 + 0x93) = *(ushort *)((int)param_1 + 0x93) | param_3;
        _param_2 = FUN_00404ac8(DAT_004385a0,*(short *)((int)param_1 + 0x93));
      }
      else if (param_2 == 100) {
        _param_2 = FUN_00411238((int)param_1,(int)(short)param_3 + *(int *)((int)param_1 + 0x31),
                                *(int *)((int)param_1 + 0x39));
      }
      else if (param_2 == 0x65) {
        _param_2 = FUN_00411238((int)param_1,(int)(short)param_3 + *(int *)((int)param_1 + 0x31),
                                *(int *)((int)param_1 + 0x39));
      }
      else if (param_2 == 0x66) {
        _param_2 = FUN_00411238((int)param_1,*(int *)((int)param_1 + 0x31),
                                (int)(short)param_3 + *(int *)((int)param_1 + 0x39));
      }
      else {
        if (param_2 == 1000) {
          DAT_00438210 = 1;
          return 0;
        }
        if (param_2 == 99) {
          *(short *)((int)param_1 + 0x123) = *(short *)((int)param_1 + 0x123) + param_3;
          _param_2 = FUN_00404aa0(DAT_004385a0,*(undefined2 *)((int)param_1 + 0x123));
        }
        else if (param_2 == 200) {
          *(undefined2 *)(DAT_004f1434 + 0xc) = 1;
          _param_2 = iVar3;
        }
        else {
          psVar1 = (short *)((int)param_1 + param_2 * 2 + 0x7f);
          *psVar1 = *psVar1 + param_3;
        }
      }
    }
    else {
      iVar3 = param_2 + -0x32;
      sVar2 = *(short *)((int)param_1 + iVar3 * 2 + 0xf1);
      if ((0 < sVar2) && (sVar2 == *(short *)((int)param_1 + iVar3 * 2 + 0x105))) {
        return 0;
      }
      sVar2 = *(short *)((&DAT_004d0c04)[iVar3] + 0x77);
      *(short *)((int)param_1 + iVar3 * 2 + 0xf1) = sVar2;
      if (sVar2 < 0) {
        *(undefined2 *)((int)param_1 + iVar3 * 2 + 0xf1) = 0;
      }
      _param_2 = FUN_004124f8(param_1,(short)iVar3 + 0x3c,param_3);
    }
  }
  else {
    iVar3 = param_2 + -0x3c;
    if ((0 < (short)param_3) &&
       (*(short *)((int)param_1 + iVar3 * 2 + 0x105) == *(short *)((int)param_1 + iVar3 * 2 + 0xf1))
       ) {
      return 0;
    }
    psVar1 = (short *)((int)param_1 + iVar3 * 2 + 0x105);
    *psVar1 = *psVar1 + param_3;
    if (*(short *)((int)param_1 + iVar3 * 2 + 0x105) < 0) {
      *(undefined2 *)((int)param_1 + iVar3 * 2 + 0x105) = 0;
    }
    else {
      sVar2 = *(short *)((int)param_1 + iVar3 * 2 + 0xf1);
      if (sVar2 < *(short *)((int)param_1 + iVar3 * 2 + 0x105)) {
        *(short *)((int)param_1 + iVar3 * 2 + 0x105) = sVar2;
      }
    }
    if (((*(int *)((int)param_1 + iVar3 * 4 + 0xc9) == 0) &&
        (0 < *(short *)((int)param_1 + iVar3 * 2 + 0x105))) ||
       (*(short *)((int)param_1 + 0x125) == 1)) {
      *(undefined4 *)((int)param_1 + iVar3 * 4 + 0xc9) = (&DAT_004d0c04)[iVar3];
      *(undefined2 *)((int)param_1 + 0x125) = 0;
      FUN_00412a7c(param_1,(short)iVar3);
    }
    else if (*(short *)((int)param_1 + iVar3 * 2 + 0x105) < 1) {
      if (*(short *)((int)param_1 + iVar3 * 2 + 0x105) == 0) {
        FUN_004129f4(param_1);
      }
    }
    else {
      FUN_00412a7c(param_1,(short)iVar3);
    }
    _param_2 = (int)*(short *)((int)param_1 + 0x119);
    if (iVar3 == *(short *)((int)param_1 + 0x119)) {
      _param_2 = FUN_00404a48(DAT_004385a0,*(undefined2 *)((int)param_1 + iVar3 * 2 + 0x105));
    }
  }
  return CONCAT22((short)((uint)_param_2 >> 0x10),1);
}

