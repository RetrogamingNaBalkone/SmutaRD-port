/* Ghidra address: 00420218; FUN_00420218 */

void __cdecl FUN_00420218(int *param_1)

{
  if ((*param_1 == 0) && ((int *)param_1[2] != (int *)0x0)) {
    FUN_00420218((int *)param_1[2]);
  }
  if ((*(byte *)(param_1[3] + 0x16) & 1) != 0) {
    (**(code **)(*(int *)param_1[3] + 8))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    FUN_00420218((int *)param_1[1]);
  }
  return;
}

