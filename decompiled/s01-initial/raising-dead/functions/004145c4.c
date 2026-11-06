/* Ghidra address: 004145c4; FUN_004145c4 */

void __cdecl FUN_004145c4(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x75) == '\x01') && (*(short *)((int)param_1 + 0x7a) < 1)) {
    FUN_0040e2bc(param_1,PTR_FUN_00439bdc,DAT_00439be0,DAT_00439be4,*(int *)((int)param_1 + 0x8a));
    FUN_0040e374(param_1);
  }
  return;
}

