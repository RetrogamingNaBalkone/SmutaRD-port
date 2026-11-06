/* Ghidra address: 004046b0; FUN_004046b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004046b0(int param_1)

{
  short *psVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 uVar4;
  short local_10 [2];
  short local_c [3];
  undefined2 local_6;
  
  piVar3 = DAT_0053d640;
  uVar2 = DAT_0043faa6;
  local_6 = DAT_0043faa4;
  *(undefined2 *)(DAT_0053d640 + 8) = DAT_0043faa4;
  *(undefined2 *)((int)piVar3 + 0x22) = uVar2;
  if ((*(byte *)(param_1 + 0x14) & 4) != 0) {
    FUN_00406590((int)piVar3,*(short **)(param_1 + 0x69),0,0,&DAT_004385b5);
  }
  if ((*(byte *)(param_1 + 0x14) & 8) != 0) {
    FUN_00406590((int)DAT_0053d640,*(short **)(param_1 + 0x71),0,0,&DAT_004385b8);
  }
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    (**(code **)(*DAT_0053d640 + 0x40))();
  }
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    (**(code **)(*DAT_0053d640 + 0x40))();
  }
  uVar4 = FUN_00404614();
  *(short *)(*(int *)(param_1 + 0x69) + 4) = (short)uVar4;
  uVar4 = FUN_00404614();
  *(short *)(*(int *)(param_1 + 0x71) + 4) = (short)uVar4;
  if ((*(ushort *)(param_1 + 0x14) & 0x20) != 0) {
    if ((*(ushort *)(param_1 + 0x14) & 0x100) == 0) {
      FUN_00404620((byte *)(param_1 + 0x30),(int *)local_c,(int *)local_10);
      psVar1 = *(short **)(param_1 + 0x99);
      *psVar1 = local_c[0];
      psVar1[1] = local_10[0];
      if (*(int *)((int)DAT_0053d640 + 0x32) < (int)*psVar1) {
        *psVar1 = *(short *)((int)DAT_0053d640 + 0x32);
      }
      FUN_00406590((int)DAT_0053d640,*(short **)(param_1 + 0x99),0,0,&DAT_004385c5);
    }
    else {
      psVar1 = *(short **)(param_1 + 0x99);
      *psVar1 = (short)DAT_0053d640[9] * 6;
      psVar1[1] = *(short *)((int)DAT_0053d640 + 0x26) + 2;
      FUN_00406590((int)DAT_0053d640,psVar1,0,0,(byte *)s__2_0f_fps_004385bb);
    }
    *(undefined4 *)(param_1 + 0x95) = 0x60;
  }
  if (-1 < *(int *)(param_1 + 0x95)) {
    if (*(int *)(param_1 + 0x95) < 2) {
      FUN_00406590((int)DAT_0053d640,*(short **)(DAT_004385a0 + 0x99),0,0,&DAT_0043fac4);
    }
    uVar4 = FUN_00404614();
    *(short *)(*(int *)(param_1 + 0x99) + 4) = (short)uVar4;
    (**(code **)(*DAT_0053d640 + 0x40))();
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(int *)(param_1 + 0x95) = *(int *)(param_1 + 0x95) + -1;
  }
  return;
}

