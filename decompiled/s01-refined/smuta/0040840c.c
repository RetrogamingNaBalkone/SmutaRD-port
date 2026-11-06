/* Targeted Ghidra research export; addresses use image base 0x00400000.
 * Not compilable or gameplay-verified source. Opaque types/names remain provisional.
 * x87 helper 0042fc2c: ST0 input, EDX:EAX signed 64-bit output.
 * IMPORTANT: helper sets x87 RC=11 (truncate toward zero), restores CW, pops ST0.
 * Ghidra ROUND(value) below does NOT express that control-word change.
 */

void __cdecl FUN_0040840c(undefined4 arg1,ushort *arg2,short *arg3,short arg4,short arg5,short arg6)

{
  ushort arg6_00;
  ushort uVar1;
  short arg5_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  short local_a;
  
  PTR_0044f640->field_10 = DAT_00445f8e;
  (*(code *)PTR_0044f640->vtable[0xf])
            ((undefined1 *)PTR_0044f640,(uint)*arg2,(uint)arg2[1],(uint)arg2[2],(uint)arg2[3]);
  arg6_00 = arg2[5];
  lVar7 = FUN_0042fc2c((float10)(int)*arg3 * ((float10)(short)arg6_00 / (float10)(int)arg3[1]));
  arg5_00 = (short)lVar7;
  iVar4 = (int)arg6;
  local_a = (short)((longlong)(ulonglong)arg2[4] / (longlong)iVar4);
  if (local_a < 0) {
    local_a = 0;
  }
  if (arg5 != 0) {
    iVar2 = (arg5 * iVar4) / (int)arg4;
    if ((short)iVar2 == 0) {
      iVar2 = 1;
    }
    if (arg5_00 < local_a) {
      uVar3 = ((uint)arg2[4] - (int)local_a * (iVar4 + -1)) - (int)arg5_00;
      iVar4 = (int)uVar3 >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
      }
    }
    else {
      iVar4 = 0;
    }
    sVar6 = *arg2 + (short)iVar4;
    uVar1 = arg2[1];
    sVar5 = (short)iVar2;
    while (0 < sVar5) {
      (*(code *)PTR_0044f640->vtable[0x10])
                ((undefined1 *)PTR_0044f640,(int)sVar6,(int)(short)uVar1,arg3,arg5_00,arg6_00);
      iVar2 = iVar2 + -1;
      sVar6 = sVar6 + local_a;
      sVar5 = (short)iVar2;
    }
  }
  return;
}

