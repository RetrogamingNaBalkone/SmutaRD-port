/* Ghidra address: 0043743c; FUN_0043743c */

void __cdecl FUN_0043743c(int param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_30;
  undefined4 local_c;
  int local_8;
  
  FUN_0042c8f0(0x43cc30);
  if (*(uint *)(param_1 + 8) <= param_2) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
    puVar2 = &LAB_0043791c;
    uVar1 = 0;
    FUN_004370e8(&local_8,(uint *)s_String_reference_out_of_range_0043cd48);
    FUN_0042a68c(&local_c,&local_8);
    FUN_004372a8(&local_8,2);
    FUN_0042b3bd((uint *)&DAT_004378c0,&local_c,uVar1,puVar2,uVar3,uVar4,uVar5,uVar6);
  }
  *in_FS_OFFSET = local_30;
  return;
}

