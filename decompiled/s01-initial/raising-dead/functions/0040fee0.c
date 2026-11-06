/* Ghidra address: 0040fee0; FUN_0040fee0 */

int * __cdecl FUN_0040fee0(int *param_1,undefined2 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  
  FUN_0040e220(param_1,4);
  param_1[5] = (int)&PTR_FUN_00439dec;
  *(undefined2 *)(param_1 + 6) = *param_2;
  *(undefined1 *)((int)param_1 + 0x1a) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0x69) = *(undefined4 *)((int)param_2 + 0xb);
  *(undefined2 *)((int)param_1 + 0x1b) = *(undefined2 *)((int)param_2 + 0x13);
  *(undefined4 *)((int)param_1 + 0x65) = *(undefined4 *)((int)param_2 + 7);
  *(undefined2 *)((int)param_1 + 0x1d) = *(undefined2 *)((int)param_2 + 3);
  *(undefined2 *)((int)param_1 + 0x1f) = *(undefined2 *)((int)param_2 + 5);
  *(undefined2 *)((int)param_1 + 0x21) = *(undefined2 *)((int)param_2 + 0x15);
  *(undefined4 *)((int)param_1 + 0x6d) = *(undefined4 *)((int)param_2 + 0xf);
  *(undefined2 *)((int)param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0x71) = 0;
  if ((*(byte *)(param_1 + 7) & 8) != 0) {
    if (**(short **)((int)param_1 + 0x69) == 0) {
      uVar3 = FUN_0040f4b0(*(short **)((int)param_1 + 0x69),0,(undefined2 *)((int)param_1 + 0x73),0)
      ;
      *(undefined4 *)((int)param_1 + 0x65) = uVar3;
      FUN_0040e2bc(param_1,PTR_FUN_00439b50,DAT_00439b54,DAT_00439b58,
                   (int)*(short *)((int)param_1 + 0x73));
    }
    else {
      psVar1 = *(short **)((int)param_1 + 0x69);
      sVar2 = FUN_004100cc((int)param_1,psVar1);
      uVar3 = FUN_0040f4b0(psVar1,0,(undefined2 *)((int)param_1 + 0x73),sVar2);
      *(undefined4 *)((int)param_1 + 0x65) = uVar3;
    }
  }
  return param_1;
}

