/* Ghidra address: 00427390; FUN_00427390 */

undefined4 * __cdecl FUN_00427390(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0043a12c;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00435394((int *)((int)param_1 + 0x4a),3,0x100,1,FUN_00422604);
  *(undefined2 *)(param_1 + 8) = 0xf;
  *(undefined2 *)(param_1 + 4) = 0xf;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 1;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x34a) = 1;
  *(undefined1 *)((int)param_1 + 0x34b) = 0;
  FUN_00427430((int)param_1,0x280,400,2);
  FUN_00405210();
  DAT_0053d640 = param_1;
  return param_1;
}

