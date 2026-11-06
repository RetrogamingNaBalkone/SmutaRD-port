/* Ghidra address: 0042b51f; FUN_0042b51f */

void FUN_0042b51f(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_24;
  
  FUN_0042b4b4(0x4379bc);
  if ((**(int **)(*(int *)(in_FS_OFFSET[1] + -8) + 0xc) != 0) && (DAT_004377d0 == 0)) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x14) = 5;
    *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x18) =
         *(undefined4 *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x14);
    (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 8))();
    ___unlockDebuggerData_qv();
    DAT_004377d0 = 0;
  }
  thunk_FUN_0042d8dc();
  (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 0x14))();
  FUN_00431fd4();
  *in_FS_OFFSET = local_24;
  return;
}

