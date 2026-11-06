/* Ghidra address: 00411c80; FUN_00411c80 */

int * __cdecl FUN_00411c80(int *param_1,undefined2 *param_2,undefined1 param_3)

{
  FUN_00410768(param_1,param_2,param_3);
  param_1[5] = (int)&PTR_FUN_00439d1c;
  *(undefined2 *)((int)param_1 + 0x7b) = 1;
  *(undefined2 *)((int)param_1 + 0x7d) = 0x14;
  *(undefined2 *)((int)param_1 + 0x121) = DAT_00438214;
  FUN_00429fc4((undefined4 *)((int)param_1 + 0xc9),0,0x28);
  FUN_00429fc4((undefined4 *)((int)param_1 + 0x105),0,0x14);
  *(undefined2 *)((int)param_1 + 0xf1) = 0;
  *(undefined2 *)((int)param_1 + 0xf3) = 0;
  *(undefined2 *)((int)param_1 + 0xf5) = 0;
  *(undefined2 *)((int)param_1 + 0xf7) = 0;
  *(undefined2 *)((int)param_1 + 0xf9) = 0;
  *(undefined2 *)((int)param_1 + 0xfb) = 0;
  *(undefined2 *)((int)param_1 + 0xfd) = 0;
  *(undefined2 *)((int)param_1 + 0xff) = 0;
  *(undefined2 *)((int)param_1 + 0x101) = 0;
  *(undefined2 *)((int)param_1 + 0x103) = 0;
  *(undefined2 *)((int)param_1 + 0x11b) = 0;
  *(undefined2 *)((int)param_1 + 0x119) = 0;
  *(undefined4 *)((int)param_1 + 0x129) = 0;
  *(undefined2 *)((int)param_1 + 0x123) = 0;
  *(undefined4 *)((int)param_1 + 0x51) = 0xee;
  FUN_0040e2bc(param_1,PTR_FUN_00439b8c,DAT_00439b90,DAT_00439b94,0x29);
  *(undefined2 *)((int)param_1 + 0x125) = 1;
  DAT_004d09fc = param_1;
  *(undefined4 *)((int)param_1 + 0xb5) = 0x1e;
  *(undefined1 *)((int)param_1 + 0x12d) = 0;
  *(undefined1 *)((int)param_1 + 0x12e) = 0;
  *(undefined2 *)((int)param_1 + 0xbf) = 0xff9c;
  param_1[0x4d] = 0;
  return param_1;
}

