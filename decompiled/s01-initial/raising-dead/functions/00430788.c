/* Ghidra address: 00430788; FUN_00430788 */

int * __cdecl FUN_00430788(int *param_1,int param_2,uint *param_3,char *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43bc7c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x4a;
    *(int *)((int)param_1 + 0x3e) = (int)param_1 + 0x4a;
    FUN_00431f08((undefined4 *)((int)param_1 + 0x4a));
  }
  FUN_00431a04(param_1,1,param_3,param_4,(char *)0x0);
  FUN_00430bb0((int *)((int)param_1 + 0x3e),1,param_1 + 2);
  param_1[1] = (int)&PTR_LAB_0043bcc0;
  *(undefined ***)((int)param_1 + 0x42) = &PTR_LAB_0043bccc;
  *(undefined ***)*param_1 = &PTR_LAB_0043bcd8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

