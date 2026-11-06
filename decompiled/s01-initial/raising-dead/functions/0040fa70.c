/* Ghidra address: 0040fa70; FUN_0040fa70 */

void __cdecl FUN_0040fa70(int *param_1,short param_2)

{
  int iVar1;
  short local_6;
  
  if (param_1[7] != 0) {
    *(short *)(param_1 + 0xc) = param_2 + -1;
    param_1[0xb] = 0;
    if (*(short *)param_1[7] == 0) {
      iVar1 = FUN_0040f4b0((short *)param_1[7],0,&local_6,0);
      param_1[8] = iVar1;
    }
    else {
      iVar1 = FUN_0040f4b0((short *)param_1[7],0,&local_6,*(short *)((int)param_1 + 0x32));
      param_1[8] = iVar1;
    }
    FUN_0040e2bc(param_1,PTR_FUN_00439b3c,DAT_00439b40,DAT_00439b44,(int)local_6);
  }
  return;
}

