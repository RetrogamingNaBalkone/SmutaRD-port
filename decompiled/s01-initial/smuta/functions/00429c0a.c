/* Ghidra address: 00429c0a; FUN_00429c0a */

void FUN_00429c0a(void)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_FS_OFFSET;
  undefined4 in_stack_00000004;
  code *in_stack_0000000c;
  uint in_stack_00000010;
  int in_stack_00000014;
  
  uVar5 = 2;
  if (in_stack_00000014 == 0) {
    uVar5 = 0;
  }
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    ___lockDebuggerData_qv();
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 3;
    *(code **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) =
         in_stack_0000000c;
    pcVar3 = FUN_0042966b();
    *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28) = pcVar3;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24) = 0;
    pcVar3 = *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28);
    while ((pcVar3 != (char *)0x0 && (cVar2 = *pcVar3, pcVar3 = pcVar3 + 1, cVar2 != '\0'))) {
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24);
      *piVar1 = *piVar1 + 1;
    }
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x1c) =
         in_stack_00000004;
    (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    ___unlockDebuggerData_qv();
  }
  uVar4 = in_stack_00000010 & 7;
  if (uVar4 == 1) {
    (*in_stack_0000000c)();
  }
  else if (uVar4 == 2) {
    (*in_stack_0000000c)();
  }
  else if (uVar4 == 3) {
    (*in_stack_0000000c)(uVar5,in_stack_00000004);
  }
  else if (uVar4 == 5) {
    (*in_stack_0000000c)();
  }
  return;
}

