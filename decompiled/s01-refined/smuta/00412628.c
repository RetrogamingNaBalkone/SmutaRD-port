/* Targeted Ghidra research export; addresses use image base 0x00400000.
 * Not compilable or gameplay-verified source. Opaque types/names remain provisional.
 * x87 helper 0042fc2c: ST0 input, EDX:EAX signed 64-bit output.
 * IMPORTANT: helper sets x87 RC=11 (truncate toward zero), restores CW, pops ST0.
 * Ghidra ROUND(value) below does NOT express that control-word change.
 */

void __cdecl
FUN_00412628(short *arg1,int *arg2,int *arg3,int arg4,int arg5,short *arg6,int arg7,int arg8)

{
  int arg2_00;
  int arg3_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  arg2_00 = *arg2;
  arg3_00 = *arg3;
  if (0xff < arg8) {
    arg8 = 0xff;
  }
  local_8 = arg8;
  local_c = arg8;
  iVar2 = arg4 - arg2_00;
  local_10 = arg5 - arg3_00;
  if (*arg2 < arg4) {
    local_14 = (*arg2 / (int)arg1[0x3a7]) * (int)arg1[0x3a7] + ((int)arg1[0x3a7] >> 1);
    if ((arg4 < local_14) || (local_14 < *arg2)) {
      local_14 = *arg2;
    }
  }
  else {
    local_14 = (arg4 / (int)arg1[0x3a7]) * (int)arg1[0x3a7] + ((int)arg1[0x3a7] >> 1);
    if ((*arg2 < local_14) || (local_14 < arg4)) {
      local_14 = arg4;
    }
  }
  if (*arg3 < arg5) {
    local_18 = (*arg3 / (int)arg1[0x3a7]) * (int)arg1[0x3a7] + ((int)arg1[0x3a7] >> 1);
  }
  else {
    local_18 = (arg5 / (int)arg1[0x3a7]) * (int)arg1[0x3a7] + ((int)arg1[0x3a7] >> 1);
  }
  if (arg4 < arg2_00) {
    local_8 = -arg8;
    iVar2 = -iVar2;
  }
  if (arg5 < arg3_00) {
    local_c = -arg8;
    local_10 = -local_10;
  }
  iVar3 = arg4;
  iVar4 = arg5;
  if (local_10 < iVar2) {
    uVar1 = FUN_0041181c(arg1,arg4,arg3_00,(short)arg8,arg6,arg7);
    if ((short)uVar1 == 0) {
      uVar1 = FUN_0041181c(arg1,arg4,local_18,(short)arg8,arg6,arg7);
      iVar4 = local_18;
      if ((short)uVar1 == 0) {
        if (local_8 < 0) {
          iVar3 = (arg2_00 - arg2_00 % (int)arg1[0x3a7]) + arg8;
        }
        else {
          iVar3 = (((arg2_00 - arg2_00 % (int)arg1[0x3a7]) + (int)arg1[0x3a7]) - arg8) + -1;
        }
        uVar1 = FUN_0041181c(arg1,iVar3,arg5,(short)arg8,arg6,arg7);
        iVar4 = arg5;
        if ((short)uVar1 == 0) {
          if (local_c < 0) {
            iVar4 = (arg3_00 - arg3_00 % (int)arg1[0x3a7]) + arg8;
          }
          else {
            iVar4 = (((arg3_00 - arg3_00 % (int)arg1[0x3a7]) + (int)arg1[0x3a7]) - arg8) + -1;
          }
        }
      }
    }
    else {
      uVar1 = FUN_0041181c(arg1,arg4,arg5,(short)arg8,arg6,arg7);
      if ((short)uVar1 == 0) {
        if (local_c < 0) {
          iVar4 = (arg3_00 - arg3_00 % (int)arg1[0x3a7]) + arg8;
        }
        else {
          iVar4 = (((arg3_00 - arg3_00 % (int)arg1[0x3a7]) + (int)arg1[0x3a7]) - arg8) + -1;
        }
      }
    }
  }
  else {
    uVar1 = FUN_0041181c(arg1,arg2_00,arg5,(short)arg8,arg6,arg7);
    if ((short)uVar1 == 0) {
      uVar1 = FUN_0041181c(arg1,local_14,arg5,(short)arg8,arg6,arg7);
      iVar3 = local_14;
      if ((short)uVar1 == 0) {
        if (local_c < 0) {
          iVar4 = (arg3_00 - arg3_00 % (int)arg1[0x3a7]) + arg8;
        }
        else {
          iVar4 = (((arg3_00 - arg3_00 % (int)arg1[0x3a7]) + (int)arg1[0x3a7]) - arg8) + -1;
        }
        uVar1 = FUN_0041181c(arg1,arg4,iVar4,(short)arg8,arg6,arg7);
        iVar3 = arg4;
        if ((short)uVar1 == 0) {
          if (local_8 < 0) {
            iVar3 = (arg2_00 - arg2_00 % (int)arg1[0x3a7]) + arg8;
          }
          else {
            iVar3 = (((arg2_00 - arg2_00 % (int)arg1[0x3a7]) + (int)arg1[0x3a7]) - arg8) + -1;
          }
        }
      }
    }
    else {
      uVar1 = FUN_0041181c(arg1,arg4,arg5,(short)arg8,arg6,arg7);
      if ((short)uVar1 == 0) {
        if (local_8 < 0) {
          iVar3 = (arg2_00 - arg2_00 % (int)arg1[0x3a7]) + arg8;
        }
        else {
          iVar3 = (((arg2_00 - arg2_00 % (int)arg1[0x3a7]) + (int)arg1[0x3a7]) - arg8) + -1;
        }
      }
    }
  }
  *arg2 = iVar3;
  *arg3 = iVar4;
  return;
}

