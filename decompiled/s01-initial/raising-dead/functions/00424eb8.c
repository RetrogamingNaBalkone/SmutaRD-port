/* Ghidra address: 00424eb8; FUN_00424eb8 */

undefined4 * __cdecl
FUN_00424eb8(undefined4 *param_1,undefined2 *param_2,short param_3,short param_4,undefined1 param_5,
            undefined4 param_6,undefined2 param_7)

{
  *param_1 = &PTR_FUN_0043a0ac;
  *param_1 = &PTR_FUN_0043a048;
  FUN_00435394((int *)((int)param_1 + 0x19),0xc,4,1,FUN_004096bc);
  DAT_0053c910 = param_4;
  *(undefined2 *)((int)param_1 + 0x51) = *param_2;
  *(undefined2 *)((int)param_1 + 0x53) = param_2[2];
  *(undefined2 *)((int)param_1 + 0x55) = param_2[4];
  *(undefined4 *)((int)param_1 + 0x12) = 2;
  *(int *)((int)param_1 + 6) = (int)*(short *)((int)param_1 + 0x51) + ((int)param_4 >> 1);
  *(int *)((int)param_1 + 10) = (int)*(short *)((int)param_1 + 0x53) - (int)param_3;
  *(int *)((int)param_1 + 0xe) = (int)*(short *)((int)param_1 + 0x55) + ((int)param_4 >> 1);
  *(short *)((int)param_1 + 0x57) = param_3;
  *(undefined1 *)((int)param_1 + 0x16) = param_5;
  *(undefined4 *)((int)param_1 + 0x49) = param_6;
  *(undefined2 *)(param_1 + 1) = param_7;
  return param_1;
}

