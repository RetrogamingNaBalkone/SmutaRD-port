/* Ghidra address: 00412c04; FUN_00412c04 */

void __cdecl FUN_00412c04(int *param_1)

{
  short sVar1;
  
  if (*(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9) == 0) {
    FUN_0040e374(param_1);
    return;
  }
  if (*(short *)(*(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9) + 0xb0) == 0)
  {
    sVar1 = *(short *)((int)param_1 + 0x11b);
    *(short *)((int)param_1 + 0x119) = sVar1;
    if (sVar1 != 0) {
      FUN_00413dc4(*(int **)((int)param_1 + sVar1 * 4 + 0xc9));
      FUN_00404a48(DAT_004385a0,
                   *(undefined2 *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 2 + 0x105));
    }
    FUN_0040e374(param_1);
  }
  return;
}

