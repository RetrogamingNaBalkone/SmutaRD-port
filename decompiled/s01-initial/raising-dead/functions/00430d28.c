/* Ghidra address: 00430d28; FUN_00430d28 */

void __cdecl FUN_00430d28(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43bd50);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_0043bd30;
    *(undefined ***)*param_1 = &PTR_LAB_0043bd3c;
    if ((param_2 & 2) != 0) {
      FUN_00431f5c(param_1 + 3,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

