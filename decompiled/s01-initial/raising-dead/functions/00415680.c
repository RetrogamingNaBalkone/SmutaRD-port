/* Ghidra address: 00415680; FUN_00415680 */

void __cdecl FUN_00415680(int *param_1)

{
  *(int *)((int)param_1 + 0x139) = *(short *)((int)param_1 + 0x135) * 0x18;
  *(undefined2 *)((int)param_1 + 0x137) = 0;
  *(undefined2 *)((int)param_1 + 0x111) = *(undefined2 *)((int)param_1 + 0x113);
  *(undefined4 *)((int)param_1 + 0x16b) = 0;
  FUN_0040e2bc(param_1,PTR_FUN_00439c0c,DAT_00439c10,DAT_00439c14,0x29);
  return;
}

