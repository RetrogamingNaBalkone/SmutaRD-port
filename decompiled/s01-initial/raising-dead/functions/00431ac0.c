/* Ghidra address: 00431ac0; FUN_00431ac0 */

void __cdecl FUN_00431ac0(undefined4 *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43be3c);
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = &PTR_FUN_0043be1c;
    *(undefined ***)*param_1 = &PTR_LAB_0043be28;
    FUN_004315bc(param_1 + 2,2);
    if ((param_2 & 2) != 0) {
      FUN_00431f5c((undefined4 *)((int)param_1 + 0x3e),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

