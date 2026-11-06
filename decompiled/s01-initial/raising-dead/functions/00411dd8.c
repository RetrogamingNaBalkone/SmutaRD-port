/* Ghidra address: 00411dd8; FUN_00411dd8 */

void __cdecl FUN_00411dd8(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439b98);
  if (param_1 != (int *)0x0) {
    param_1[5] = (int)&PTR_FUN_00439d1c;
    if (*(int **)((int)param_1 + 0xc1) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0xc1) + 4))();
    }
    if (*(int **)((int)param_1 + 0xc5) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0xc5) + 4))();
    }
    *(undefined2 *)((int)param_1 + 0x1b) = 0;
    DAT_004d09fc = 0;
    FUN_00410734(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

