/* Ghidra address: 00412b64; FUN_00412b64 */

void __cdecl FUN_00412b64(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_2 + 0xac);
  *(short *)((int)param_1 + 0x11b) = sVar1;
  if (*(int *)((int)param_1 + sVar1 * 4 + 0xc9) == 0) {
    *(int *)((int)param_1 + sVar1 * 4 + 0xc9) = param_2;
    iVar2 = *(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9);
    if (iVar2 == 0) {
      *(short *)((int)param_1 + 0x119) = *(short *)((int)param_1 + 0x11b);
      FUN_00413dc4(*(int **)((int)param_1 + *(short *)((int)param_1 + 0x11b) * 4 + 0xc9));
    }
    else if (*(short *)(iVar2 + 0xb0) == 1) {
      FUN_00413e4c(iVar2);
      FUN_0040e2bc(param_1,PTR_FUN_00439bb8,DAT_00439bbc,DAT_00439bc0,0x29);
      return;
    }
  }
  return;
}

