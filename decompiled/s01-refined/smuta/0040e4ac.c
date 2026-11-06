/* Targeted Ghidra research export; addresses use image base 0x00400000.
 * Not compilable or gameplay-verified source. Opaque types/names remain provisional.
 * x87 helper 0042fc2c: ST0 input, EDX:EAX signed 64-bit output.
 * IMPORTANT: helper sets x87 RC=11 (truncate toward zero), restores CW, pops ST0.
 * Ghidra ROUND(value) below does NOT express that control-word change.
 */

void __cdecl FUN_0040e4ac(undefined1 *arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_18;
  int local_10;
  int local_c;
  
  iVar7 = *(short *)(arg1 + 0x51) - DAT_0044ebf8;
  iVar5 = DAT_0044f6c8 + iVar7;
  iVar1 = *(short *)(arg1 + 0x55) - DAT_0044ec00;
  iVar2 = DAT_0044f6c8 + iVar1;
  local_c = iVar2 * DAT_0044ebf4 - iVar7 * DAT_0044ebf0 >> 0xf;
  local_10 = iVar2 * DAT_0044ebf4 - iVar5 * DAT_0044ebf0 >> 0xf;
  local_18 = iVar1 * DAT_0044ebf4 - iVar5 * DAT_0044ebf0 >> 0xf;
  local_20 = iVar1 * DAT_0044ebf4 - iVar7 * DAT_0044ebf0 >> 0xf;
  if ((((DAT_0044ebc8 < local_c) || (DAT_0044ebc8 < local_10)) || (DAT_0044ebc8 < local_18)) ||
     (DAT_0044ebc8 < local_20)) {
    iVar3 = iVar2 * DAT_0044ebf0;
    iVar6 = iVar5 * DAT_0044ebf4;
    iVar5 = iVar5 * DAT_0044ebf4 + iVar1 * DAT_0044ebf0 >> 0xf;
    iVar4 = iVar7 * DAT_0044ebf4 + iVar1 * DAT_0044ebf0 >> 0xf;
    iVar1 = ((int)*(short *)(arg1 + 0x53) - (int)*(short *)(arg1 + 0x57)) - DAT_0044ebfc;
    iVar7 = iVar7 * DAT_0044ebf4 + iVar2 * DAT_0044ebf0 >> 0xf;
    *(int *)(arg1 + 0x19) = iVar7;
    *(int *)(arg1 + 0x1d) = iVar1;
    *(int *)(arg1 + 0x21) = local_c;
    iVar2 = iVar6 + iVar3 >> 0xf;
    *(int *)(arg1 + 0x25) = iVar2;
    *(int *)(arg1 + 0x29) = iVar1;
    *(int *)(arg1 + 0x2d) = local_10;
    *(int *)(arg1 + 0x31) = iVar5;
    *(int *)(arg1 + 0x35) = iVar1;
    *(int *)(arg1 + 0x39) = local_18;
    *(int *)(arg1 + 0x3d) = iVar4;
    *(int *)(arg1 + 0x41) = iVar1;
    *(int *)(arg1 + 0x45) = local_20;
    if (local_c < DAT_0044ebc8) {
      local_c = DAT_0044ebc8;
    }
    if (local_10 < DAT_0044ebc8) {
      local_10 = DAT_0044ebc8;
    }
    if (local_18 < DAT_0044ebc8) {
      local_18 = DAT_0044ebc8;
    }
    if (local_20 < DAT_0044ebc8) {
      local_20 = DAT_0044ebc8;
    }
    iVar7 = ((DAT_0044f6cc / local_c) * iVar7 >> 0xf) + (int)DAT_0044ebd0;
    iVar2 = ((DAT_0044f6cc / local_10) * iVar2 >> 0xf) + (int)DAT_0044ebd0;
    iVar5 = ((DAT_0044f6cc / local_18) * iVar5 >> 0xf) + (int)DAT_0044ebd0;
    iVar3 = ((DAT_0044f6cc / local_20) * iVar4 >> 0xf) + (int)DAT_0044ebd0;
    iVar1 = iVar7;
    if (iVar2 < iVar7) {
      iVar1 = iVar2;
    }
    if (iVar5 < iVar1) {
      iVar1 = iVar5;
    }
    if (iVar3 < iVar1) {
      iVar1 = iVar3;
    }
    if (iVar7 < iVar2) {
      iVar7 = iVar2;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    arg1[0x16] = arg1[0x16] | 1;
    *(short *)(arg1 + 0x4d) = (short)iVar1;
    *(short *)(arg1 + 0x4f) = (short)iVar7;
    *(short *)(arg1 + 0x17) = (short)(local_c + local_10 + local_18 + local_20 >> 2);
    if (*(short *)(arg1 + 0x17) < 0) {
      *(undefined2 *)(arg1 + 0x17) = 0;
    }
  }
  else {
    arg1[0x16] = arg1[0x16] & 0xfe;
    *(undefined2 *)(arg1 + 0x17) = 0;
  }
  return;
}

