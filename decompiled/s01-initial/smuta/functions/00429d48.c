/* Ghidra address: 00429d48; FUN_00429d48 */

void FUN_00429d48(void)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  uint *in_stack_00000004;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  ULONG_PTR local_40 [2];
  uint *local_38;
  undefined4 local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  undefined4 local_24;
  undefined2 local_14;
  
  FUN_0042b4b4(0x437814);
  local_28 = in_stack_00000004;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x24) =
       (uint)*(ushort *)((int)in_stack_00000004 + 6) + (int)in_stack_00000004;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x20) = in_stack_0000001c;
  *(uint *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x1c) = in_stack_00000020;
  uVar5 = *in_stack_00000004;
  uVar3 = (ushort)in_stack_00000004[1];
  if ((uVar3 & 2) == 0) {
    local_2c = 0;
  }
  else {
    local_2c = in_stack_00000004[3];
  }
  if ((uVar3 & 0x30) != 0) {
    in_stack_00000004 = (uint *)in_stack_00000004[2];
  }
  local_30 = FUN_00429a45();
  *local_30 = **(uint **)(in_FS_OFFSET[1] + -8);
  **(undefined4 **)(in_FS_OFFSET[1] + -8) = local_30;
  local_30[1] = (uint)local_28;
  local_30[3] = in_stack_00000018;
  local_30[4] = uVar5;
  *(ushort *)(local_30 + 6) = uVar3;
  *(undefined2 *)((int)local_30 + 0x1a) = (undefined2)local_2c;
  local_30[5] = (uint)in_stack_00000004;
  local_30[2] = in_stack_0000000c;
  local_30[10] = 0;
  local_30[0xb] = 0;
  local_30[7] = (uint)FUN_00429a94;
  local_30[0xd] = in_stack_0000001c;
  local_30[0xe] = in_stack_00000020;
  local_30[8] = in_stack_00000010;
  local_30[9] = in_stack_00000014;
  *(undefined1 *)((int)local_30 + 0x45) = 0;
  *(undefined1 *)(local_30 + 0x11) = 1;
  FUN_00428fe4();
  if (**(int **)(*(int *)(in_FS_OFFSET[1] + -8) + 0xc) != 0) {
    FUN_00429684();
    if (in_stack_00000028 == 0) {
      ___lockDebuggerData_qv();
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x30) = 0;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x2c) = 0;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x14) = 1;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x18) = in_stack_00000024;
      *(uint **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x20) = local_30;
      pcVar4 = FUN_0042966b();
      *(char **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x28) = pcVar4;
      if ((char)local_30[0x11] == '\0') {
        uVar5 = local_30[0x10];
      }
      else {
        uVar5 = (int)local_30 + 0x46;
      }
      *(uint *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x1c) = uVar5;
      *(undefined4 *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x24) = 0;
      pcVar4 = *(char **)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x28);
      while (pcVar4 != (char *)0x0) {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if (cVar2 == '\0') break;
        piVar1 = (int *)(*(int *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x10) + 0x24);
        *piVar1 = *piVar1 + 1;
      }
      (**(code **)(*(int *)(in_FS_OFFSET[1] + -8) + 8))();
      ___unlockDebuggerData_qv();
    }
  }
  if ((local_2c & 1) != 0) {
    local_34 = *DAT_0049aa2c;
    local_14 = 8;
    FUN_00429b83();
    local_14 = 0;
    *DAT_0049aa2c = local_34;
  }
  if ((in_stack_00000028 == 0) && ((local_2c & 2) != 0)) {
    local_14 = 0x14;
    FUN_00429c0a();
    local_14 = 0;
  }
  local_40[0] = *(ULONG_PTR *)(*(int *)(in_FS_OFFSET[1] + -8) + 0x24);
  local_38 = local_30;
  RaiseException(0xeefface,1,3,local_40);
  *in_FS_OFFSET = local_24;
  return;
}

