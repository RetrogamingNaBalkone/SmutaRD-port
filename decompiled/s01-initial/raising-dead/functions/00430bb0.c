/* Ghidra address: 00430bb0; FUN_00430bb0 */

int * __cdecl FUN_00430bb0(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43bd10);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 3);
    FUN_00431f08(param_1 + 3);
  }
  param_1[1] = (int)&PTR_FUN_0043bd30;
  puVar1 = (undefined4 *)*param_1;
  *puVar1 = &PTR_LAB_0043bd3c;
  FUN_00431fd4((int)puVar1,param_3);
  param_1[2] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

