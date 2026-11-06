/* Ghidra address: 00429684; FUN_00429684 */

void FUN_00429684(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int in_FS_OFFSET;
  
  if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x30) = 0;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x2c) = 0;
    if (**(int **)(*(int *)(in_FS_OFFSET + 4) + -8) == 0) {
      ___lockDebuggerData_qv();
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = 0xb;
      (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
      ___unlockDebuggerData_qv();
      return;
    }
    ___lockDebuggerData_qv();
    for (piVar3 = (int *)**(undefined4 **)(*(int *)(in_FS_OFFSET + 4) + -8); piVar3 != (int *)0x0;
        piVar3 = (int *)*piVar3) {
      uVar4 = 10;
      if (*piVar3 == 0) {
        uVar4 = 9;
      }
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x14) = uVar4;
      if ((char)piVar3[0x11] == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)piVar3 + 0x46;
      }
      *(int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x18) = iVar5;
      if (piVar3[1] == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = FUN_0042966b();
      }
      *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28) = pcVar6;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24) = 0;
      pcVar6 = *(char **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x28);
      while ((pcVar6 != (char *)0x0 && (cVar2 = *pcVar6, pcVar6 = pcVar6 + 1, cVar2 != '\0'))) {
        piVar1 = (int *)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x24);
        *piVar1 = *piVar1 + 1;
      }
      *(int **)(*(int *)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x10) + 0x20) = piVar3;
      (**(code **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 8))();
    }
    ___unlockDebuggerData_qv();
  }
  return;
}

