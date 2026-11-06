/* Ghidra address: 0042b603; FUN_0042b603 */

void FUN_0042b603(void)

{
  int in_FS_OFFSET;
  
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 4;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) =
         *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18);
    DAT_004377d0 = 1;
    (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    ___unlockDebuggerData_qv();
  }
  (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x18))();
  FUN_00431fd4();
  return;
}

