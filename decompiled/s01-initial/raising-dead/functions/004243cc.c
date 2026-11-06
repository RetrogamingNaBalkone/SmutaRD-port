/* Ghidra address: 004243cc; FUN_004243cc */

undefined4 * __cdecl
FUN_004243cc(undefined4 *param_1,short *param_2,short param_3,short param_4,short param_5,
            byte param_6,undefined4 param_7,undefined2 param_8,undefined2 param_9)

{
  *param_1 = &PTR_FUN_0043a0ac;
  *param_1 = &PTR_FUN_0043a098;
  FUN_00435394((int *)((int)param_1 + 0x1d),0xc,4,1,FUN_004096bc);
  DAT_0053c910 = param_4;
  *(undefined2 *)((int)param_1 + 0x5d) = param_9;
  if (param_5 == 0) {
    *(short *)((int)param_1 + 0x51) = *param_2;
    *(short *)((int)param_1 + 0x53) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x55) = (DAT_0053c910 >> 1) + param_2[4];
    *(short *)((int)param_1 + 0x57) = *(short *)((int)param_1 + 0x51) + DAT_0053c910;
    *(short *)((int)param_1 + 0x59) = param_2[2];
    *(undefined2 *)((int)param_1 + 0x5b) = *(undefined2 *)((int)param_1 + 0x55);
    *(undefined4 *)((int)param_1 + 0x12) = 1;
    *(int *)((int)param_1 + 6) =
         (int)*(short *)((int)param_1 + 0x51) + (int)*(short *)((int)param_1 + 0x57) >> 1;
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x53);
    *(int *)((int)param_1 + 0xe) = (int)*(short *)((int)param_1 + 0x55);
  }
  else if (param_5 == 0x5a) {
    *(short *)((int)param_1 + 0x51) = (DAT_0053c910 >> 1) + *param_2;
    *(short *)((int)param_1 + 0x53) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x55) = param_2[4];
    *(undefined2 *)((int)param_1 + 0x57) = *(undefined2 *)((int)param_1 + 0x51);
    *(short *)((int)param_1 + 0x59) = param_2[2];
    *(short *)((int)param_1 + 0x5b) = *(short *)((int)param_1 + 0x55) + DAT_0053c910;
    *(undefined4 *)((int)param_1 + 0x12) = 0;
    *(int *)((int)param_1 + 6) = (int)*(short *)((int)param_1 + 0x51);
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x53);
    *(int *)((int)param_1 + 0xe) =
         (int)*(short *)((int)param_1 + 0x55) + (int)*(short *)((int)param_1 + 0x5b) >> 1;
  }
  else if (param_5 == 0xb4) {
    *(short *)((int)param_1 + 0x51) = *param_2 + DAT_0053c910;
    *(short *)((int)param_1 + 0x53) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x55) = (DAT_0053c910 >> 1) + param_2[4];
    *(short *)((int)param_1 + 0x57) = *param_2;
    *(short *)((int)param_1 + 0x59) = param_2[2];
    *(undefined2 *)((int)param_1 + 0x5b) = *(undefined2 *)((int)param_1 + 0x55);
    *(undefined4 *)((int)param_1 + 0x12) = 1;
    *(int *)((int)param_1 + 6) =
         (int)*(short *)((int)param_1 + 0x51) + (int)*(short *)((int)param_1 + 0x57) >> 1;
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x53);
    *(int *)((int)param_1 + 0xe) = (int)*(short *)((int)param_1 + 0x55);
  }
  else if (param_5 == 0x10e) {
    *(short *)((int)param_1 + 0x51) = (DAT_0053c910 >> 1) + *param_2;
    *(short *)((int)param_1 + 0x53) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x55) = param_2[4] + DAT_0053c910;
    *(undefined2 *)((int)param_1 + 0x57) = *(undefined2 *)((int)param_1 + 0x51);
    *(short *)((int)param_1 + 0x59) = param_2[2];
    *(short *)((int)param_1 + 0x5b) = param_2[4];
    *(undefined4 *)((int)param_1 + 0x12) = 0;
    *(int *)((int)param_1 + 6) = (int)*(short *)((int)param_1 + 0x51);
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x53);
    *(int *)((int)param_1 + 0xe) =
         (int)*(short *)((int)param_1 + 0x55) + (int)*(short *)((int)param_1 + 0x5b) >> 1;
  }
  *(undefined4 *)((int)param_1 + 0x12) = 3;
  *(undefined4 *)((int)param_1 + 0x19) = param_7;
  *(byte *)((int)param_1 + 0x16) = param_6 & 0xfd;
  *(undefined2 *)(param_1 + 1) = param_8;
  return param_1;
}

