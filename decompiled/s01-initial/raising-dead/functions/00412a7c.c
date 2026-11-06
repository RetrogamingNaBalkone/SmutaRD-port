/* Ghidra address: 00412a7c; FUN_00412a7c */

void __cdecl FUN_00412a7c(int *param_1,short param_2)

{
  int iVar1;
  
  if ((((*(int *)((int)param_1 + param_2 * 4 + 0xc9) != 0) &&
       (*(int *)((int)param_1 + param_2 * 4 + 0xc9) !=
        *(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9))) &&
      (*(short *)((int)param_1 + param_2 * 2 + 0x105) != 0)) &&
     (param_2 != *(short *)((int)param_1 + 0x11b))) {
    *(short *)((int)param_1 + 0x11b) = param_2;
    iVar1 = *(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9);
    if ((iVar1 == 0) || (*(short *)(iVar1 + 0xb0) == 3)) {
      if (*(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9) == 0) {
        *(short *)((int)param_1 + 0x119) = *(short *)((int)param_1 + 0x11b);
        FUN_00413dc4(*(int **)((int)param_1 + *(short *)((int)param_1 + 0x11b) * 4 + 0xc9));
      }
    }
    else {
      FUN_00413e4c(iVar1);
      FUN_0040e2bc(param_1,PTR_FUN_00439bac,DAT_00439bb0,DAT_00439bb4,0x29);
    }
  }
  return;
}

