/* Ghidra address: 0040fe84; FUN_0040fe84 */

void __cdecl FUN_0040fe84(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439b48);
  if (param_1 != (int *)0x0) {
    param_1[5] = (int)&PTR_FUN_00439dec;
    piVar1 = *(int **)((int)param_1 + 0x6d);
    if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    FUN_0040e250(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

