/* Ghidra address: 0040425c; FUN_0040425c */

undefined4 * __cdecl FUN_0040425c(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  
  FUN_0040e220(param_1,4);
  FUN_00429fc4((undefined4 *)&DAT_0043fac4,0x20,0x28);
  DAT_0043faed = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 100;
  *(undefined2 *)((int)param_1 + 0x91) = 0;
  *(undefined4 *)((int)param_1 + 0x95) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  uVar3 = FUN_004051e0(DAT_0053d640,0x34);
  sVar5 = (short)uVar3 * 3;
  uVar3 = FUN_004051f8(DAT_0053d640,0x37);
  uVar4 = FUN_004065e0(sVar5,(short)uVar3,8);
  *(undefined4 *)((int)param_1 + 0x69) = uVar4;
  uVar3 = FUN_004065e0(sVar5,(short)uVar3,8);
  *(undefined4 *)((int)param_1 + 0x71) = uVar3;
  iVar2 = DAT_0053d640;
  uVar1 = DAT_004c3294;
  DAT_0043faa4 = DAT_004c329a;
  DAT_0043faa6 = DAT_004c3294;
  *(undefined2 *)(DAT_0053d640 + 0x20) = DAT_004c329a;
  *(undefined2 *)(iVar2 + 0x22) = uVar1;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined2 *)((int)param_1 + 0x93) = 0;
  DAT_0043faa8 = 0;
  DAT_0043faac = 0;
  DAT_0043fab0 = 0;
  DAT_0043fab4 = 0;
  DAT_0043fab8 = 0;
  DAT_0043fabc = 0;
  DAT_0043fac0 = 0;
  uVar3 = FUN_004065e0(*(short *)(DAT_0053d640 + 0x32),*(short *)(DAT_0053d640 + 0x26) * 10,1);
  *(undefined4 *)((int)param_1 + 0x99) = uVar3;
  FUN_004044ac((int)param_1);
  DAT_004385a0 = param_1;
  return param_1;
}

