/* Ghidra address: 00411064; FUN_00411064 */

void FUN_00411064(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte in_stack_00000008;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435a18);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  if (in_stack_00000004 != 0) {
    sVar4 = 0;
    do {
      FUN_00411394();
      sVar4 = sVar4 + 1;
    } while (sVar4 < 0x100);
    piVar5 = (int *)(in_stack_00000004 + 0x758);
    for (sVar4 = 0; sVar4 < *(short *)(in_stack_00000004 + 0x70e); sVar4 = sVar4 + 1) {
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)0x0) {
        for (; puVar1 = (undefined4 *)*puVar3, puVar1 != (undefined4 *)0x0; puVar3 = puVar3 + 1) {
          if (puVar1 != (undefined4 *)0x0) {
            iVar2 = FUN_0042b677();
            *DAT_0049aa2c = *DAT_0049aa2c + iVar2;
            (**(code **)*puVar1)();
          }
        }
        FUN_00431964();
      }
      piVar5 = piVar5 + 1;
    }
    if ((in_stack_00000008 & 1) != 0) {
      FUN_00431954();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

