/* Ghidra address: 00429850; FUN_00429850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00429850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short in_stack_00000020;
  short in_stack_00000022;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  short in_stack_00000030;
  undefined2 in_stack_00000032;
  undefined2 in_stack_00000034;
  int in_stack_00000036;
  undefined2 in_stack_0000003a;
  
  DAT_0053d6c4 = param_2;
  iVar1 = (int)param_3._2_2_ >> 1;
  DAT_0053d6e0 = in_stack_00000020;
  iVar3 = (int)(short)param_3 >> 1;
  _DAT_0053d6e2 = in_stack_0000003a;
  iVar3 = iVar3 - (in_stack_00000020 * iVar3 >> 5);
  DAT_0053d6d0 = iVar3 >> 1;
  DAT_0053d6d8 = ((short)param_3 - DAT_0053d6d0) + -1;
  iVar2 = in_stack_00000020 * iVar1 >> 5;
  DAT_0053d6d4 = iVar1 - iVar2;
  DAT_0053d6dc = iVar2 + -1 + iVar1;
  DAT_0053d6cc = (short)(iVar3 >> 2) + (short)(DAT_0053d6d8 >> 1);
  DAT_0053d6ce = (short)(DAT_0053d6d4 >> 1) + (short)(DAT_0053d6dc >> 1) +
                 (short)((int)DAT_0043a18c * (int)in_stack_00000020 >> 5);
  DAT_0053d6e4 = in_stack_00000022;
  DAT_0053d6e6 = 0;
  DAT_0053d6f4 = in_stack_00000024;
  DAT_0053d6f8 = in_stack_00000028;
  DAT_0053d6fc = in_stack_0000002c;
  DAT_0053d6f0 = (&DAT_0053cfc0)[in_stack_00000030];
  DAT_0053d6ec = (&DAT_0053ca1c)[in_stack_00000030];
  _DAT_0053d700 = in_stack_00000032;
  _DAT_0053d702 = in_stack_00000034;
  DAT_0053d704 = in_stack_00000036;
  if (in_stack_00000036 != 0) {
    _DAT_0053d6c8 = param_3;
    FUN_004274c0(in_stack_00000036,DAT_0053d6d0,DAT_0053d6d4,DAT_0053d6d8,DAT_0053d6dc);
    param_3 = _DAT_0053d6c8;
  }
  if (DAT_0053d6e4 < 1) {
    DAT_0053d6e8 = 0;
  }
  else {
    _DAT_0053d6c8 = param_3;
    DAT_0053d6e8 = FUN_00435154((int)DAT_0053d6e4 << 2);
    param_3 = _DAT_0053d6c8;
  }
  _DAT_0053d6ca = (undefined2)((uint)param_3 >> 0x10);
  _DAT_0053d6c8 = (undefined2)param_3;
  return;
}

