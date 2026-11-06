/* Ghidra address: 00424748; FUN_00424748 */

undefined4 * __cdecl
FUN_00424748(undefined4 *param_1,short *param_2,short param_3,short param_4,short param_5,
            undefined1 param_6,int param_7,undefined2 param_8,undefined2 param_9,short param_10,
            undefined4 param_11)

{
  *param_1 = &PTR_FUN_0043a0ac;
  *param_1 = &PTR_FUN_0043a084;
  *(int *)((int)param_1 + 0x19) = param_7;
  FUN_00435394((int *)((int)param_1 + 0x21),0xc,4,1,FUN_004096bc);
  DAT_0053c910 = param_4;
  if (param_5 == 0) {
    *(short *)((int)param_1 + 0x55) = *param_2;
    *(short *)((int)param_1 + 0x57) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x59) = param_2[4];
    *(short *)((int)param_1 + 0x5b) = *(short *)((int)param_1 + 0x55) + DAT_0053c910;
    *(short *)((int)param_1 + 0x5d) = param_2[2];
    *(undefined2 *)((int)param_1 + 0x5f) = *(undefined2 *)((int)param_1 + 0x59);
    *(undefined4 *)((int)param_1 + 0x12) = 1;
    *(int *)((int)param_1 + 6) =
         (int)*(short *)((int)param_1 + 0x55) + (int)*(short *)((int)param_1 + 0x5b) >> 1;
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x57);
    *(int *)((int)param_1 + 0xe) = (int)*(short *)((int)param_1 + 0x59);
  }
  else if (param_5 == 0x5a) {
    *(short *)((int)param_1 + 0x55) = *param_2;
    *(short *)((int)param_1 + 0x57) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x59) = param_2[4] + DAT_0053c910;
    *(undefined2 *)((int)param_1 + 0x5b) = *(undefined2 *)((int)param_1 + 0x55);
    *(short *)((int)param_1 + 0x5d) = param_2[2];
    *(short *)((int)param_1 + 0x5f) = param_2[4];
    *(undefined4 *)((int)param_1 + 0x12) = 0;
    *(int *)((int)param_1 + 6) = (int)*(short *)((int)param_1 + 0x55);
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x57);
    *(int *)((int)param_1 + 0xe) =
         (int)*(short *)((int)param_1 + 0x59) + (int)*(short *)((int)param_1 + 0x5f) >> 1;
  }
  else if (param_5 == 0xb4) {
    *(short *)((int)param_1 + 0x55) = *param_2 + param_4;
    *(short *)((int)param_1 + 0x57) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x59) = param_2[4] + DAT_0053c910;
    *(short *)((int)param_1 + 0x5b) = *param_2;
    *(short *)((int)param_1 + 0x5d) = param_2[2];
    *(undefined2 *)((int)param_1 + 0x5f) = *(undefined2 *)((int)param_1 + 0x59);
    *(undefined4 *)((int)param_1 + 0x12) = 1;
    *(int *)((int)param_1 + 6) =
         (int)*(short *)((int)param_1 + 0x55) + (int)*(short *)((int)param_1 + 0x5b) >> 1;
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x57);
    *(int *)((int)param_1 + 0xe) = (int)*(short *)((int)param_1 + 0x59);
  }
  else if (param_5 == 0x10e) {
    *(short *)((int)param_1 + 0x55) = *param_2 + param_4;
    *(short *)((int)param_1 + 0x57) = param_2[2] - param_3;
    *(short *)((int)param_1 + 0x59) = param_2[4];
    *(undefined2 *)((int)param_1 + 0x5b) = *(undefined2 *)((int)param_1 + 0x55);
    *(short *)((int)param_1 + 0x5d) = param_2[2];
    *(short *)((int)param_1 + 0x5f) = *(short *)((int)param_1 + 0x59) + DAT_0053c910;
    *(undefined4 *)((int)param_1 + 0x12) = 0;
    *(int *)((int)param_1 + 6) = (int)*(short *)((int)param_1 + 0x55);
    *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x57);
    *(int *)((int)param_1 + 0xe) =
         (int)*(short *)((int)param_1 + 0x59) + (int)*(short *)((int)param_1 + 0x5f) >> 1;
  }
  *(undefined2 *)((int)param_1 + 0x61) = param_9;
  if (param_10 == 0) {
    *(short *)((int)param_1 + 99) = *(short *)(param_7 + 2) + -1;
  }
  else {
    *(short *)((int)param_1 + 99) = param_10;
  }
  *(undefined4 *)((int)param_1 + 0x1d) = param_11;
  *(undefined2 *)(param_1 + 1) = param_8;
  *(undefined1 *)((int)param_1 + 0x16) = param_6;
  return param_1;
}

