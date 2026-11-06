/* Ghidra address: 00413dc4; FUN_00413dc4 */

void __cdecl FUN_00413dc4(int *param_1)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  
  if (((short)param_1[0x2c] != 2) && ((short)param_1[0x2c] != 1)) {
    *(undefined2 *)(param_1 + 0x2c) = 2;
    *(undefined2 *)((int)param_1 + 0x71) = 0;
    *(undefined2 *)((int)param_1 + 0xb6) = 0;
    *(undefined2 *)(param_1 + 0x2d) = 0;
    psVar1 = *(short **)((int)param_1 + 0x69);
    sVar2 = FUN_004100cc((int)param_1,psVar1);
    uVar3 = FUN_0040f4b0(psVar1,*(short *)((int)param_1 + 0x71),(undefined2 *)((int)param_1 + 0x73),
                         sVar2);
    *(undefined4 *)((int)param_1 + 0x65) = uVar3;
    FUN_0040e2bc(param_1,PTR_FUN_00439bd0,DAT_00439bd4,DAT_00439bd8,0x14);
    *(undefined2 *)((int)param_1 + 0xb2) = 2;
  }
  return;
}

