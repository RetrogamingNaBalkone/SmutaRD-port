/* Ghidra address: 00413eb4; FUN_00413eb4 */

void __cdecl FUN_00413eb4(int *param_1)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  
  if ((short)param_1[0x2c] == 2) {
    *(short *)((int)param_1 + 0xb2) = *(short *)((int)param_1 + 0xb2) + -1;
    if (*(short *)((int)param_1 + 0xb2) == 0) {
      *(undefined2 *)(param_1 + 0x2c) = 1;
    }
    FUN_0040e3b8(param_1,0x14);
  }
  else if ((short)param_1[0x2c] == 3) {
    *(short *)((int)param_1 + 0xb2) = *(short *)((int)param_1 + 0xb2) + 1;
    if (*(short *)((int)param_1 + 0xb2) == 3) {
      *(undefined2 *)(param_1 + 0x2c) = 0;
      FUN_0040e374(param_1);
    }
    FUN_0040e3b8(param_1,0x14);
  }
  else {
    if ((short)param_1[0x2c] == 4) {
      *(undefined2 *)((int)param_1 + 0xb2) = 0;
      *(short *)((int)param_1 + 0x71) = *(short *)((int)param_1 + 0x71) + 1;
      if (*(short *)((int)param_1 + 0x71) == *(short *)((int)param_1 + 0xae)) {
        (**(code **)(*(int *)(DAT_004d09fc + 0x14) + 0x24))();
      }
      if (*(short *)(*(int *)((int)param_1 + 0x69) + 4) == *(short *)((int)param_1 + 0x71)) {
        *(undefined2 *)(param_1 + 0x2c) = 1;
        *(undefined2 *)((int)param_1 + 0x71) = 0;
        if (*(short *)(*(int *)((int)param_1 + 0x69) + 4) < *(short *)((int)param_1 + 0xae)) {
          (**(code **)(*(int *)(DAT_004d09fc + 0x14) + 0x24))();
        }
      }
    }
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 8;
    psVar1 = *(short **)((int)param_1 + 0x69);
    sVar2 = FUN_004100cc((int)param_1,psVar1);
    uVar3 = FUN_0040f554(psVar1,(undefined2 *)(param_1 + 0x2d),(undefined2 *)((int)param_1 + 0xb6),
                         *(short *)((int)param_1 + 0x71),(undefined2 *)((int)param_1 + 0x73),sVar2);
    *(undefined4 *)((int)param_1 + 0x65) = uVar3;
    FUN_0040e3b8(param_1,(int)*(short *)((int)param_1 + 0x73));
  }
  return;
}

