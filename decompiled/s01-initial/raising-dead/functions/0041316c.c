/* Ghidra address: 0041316c; FUN_0041316c */

undefined4 __cdecl FUN_0041316c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined2 extraout_var;
  ushort in_CX;
  undefined4 uStack_8;
  
  *(undefined4 *)((int)param_1 + 0x8a) = param_3;
  *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 0x1000;
  *(undefined4 *)((int)param_1 + 0x31) = *param_2;
  *(undefined4 *)((int)param_1 + 0x39) = param_2[2];
  *(undefined4 *)((int)param_1 + 0x35) = param_2[1];
  uStack_8 = (uint)in_CX;
  FUN_0040f8c4((short *)((int)&uStack_8 + 2),*(short *)(param_2 + 3));
  *(undefined2 *)((int)param_1 + 0x3d) = uStack_8._2_2_;
  FUN_0040f8c4((short *)((int)&uStack_8 + 2),*(short *)((int)param_2 + 0x12));
  *(undefined2 *)((int)param_1 + 0x43) = uStack_8._2_2_;
  do {
    psVar1 = *(short **)((int)param_1 + 0x69);
    sVar2 = FUN_004100cc((int)param_1,psVar1);
    iVar3 = FUN_0040f3f8(psVar1,(undefined2 *)((int)param_1 + 0x75),
                         (undefined2 *)((int)param_1 + 0x77),(undefined2 *)((int)param_1 + 0x73),
                         (short *)((int)param_1 + 0x71),sVar2);
    *(int *)((int)param_1 + 0x65) = iVar3;
  } while (iVar3 == 0);
  FUN_0040e2bc(param_1,PTR_FUN_00439bc4,DAT_00439bc8,DAT_00439bcc,0x29);
  return CONCAT22(extraout_var,1);
}

