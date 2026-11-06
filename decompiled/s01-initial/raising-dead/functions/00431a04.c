/* Ghidra address: 00431a04; FUN_00431a04 */

int * __cdecl FUN_00431a04(int *param_1,int param_2,uint *param_3,char *param_4,char *param_5)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43bdfc);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x3e;
    FUN_00431f08((undefined4 *)((int)param_1 + 0x3e));
  }
  param_1[1] = (int)&PTR_FUN_0043be1c;
  *(undefined ***)*param_1 = &PTR_LAB_0043be28;
  FUN_004314dc(param_1 + 2,param_3,param_4,param_5);
  FUN_00431fd4(*param_1,param_1 + 2);
  *in_FS_OFFSET = local_28;
  return param_1;
}

