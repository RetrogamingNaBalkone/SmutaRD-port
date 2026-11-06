/* Ghidra address: 00414610; FUN_00414610 */

void __cdecl FUN_00414610(int *param_1)

{
  int iVar1;
  
  if ((int)*(short *)((int)param_1 + 0x71) == *(short *)(*(int *)((int)param_1 + 0x69) + 4) + -1) {
    FUN_0040e374(param_1);
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 0x10;
    return;
  }
  do {
    iVar1 = FUN_0040f3f8(*(short **)((int)param_1 + 0x69),(undefined2 *)(param_1 + 0x1f),
                         (undefined2 *)((int)param_1 + 0x7e),(undefined2 *)((int)param_1 + 0x73),
                         (short *)((int)param_1 + 0x71),0);
    *(int *)((int)param_1 + 0x65) = iVar1;
  } while (iVar1 == 0);
  FUN_0040e3b8(param_1,(int)*(short *)((int)param_1 + 0x73));
  return;
}

