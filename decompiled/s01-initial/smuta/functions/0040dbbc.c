/* Ghidra address: 0040dbbc; FUN_0040dbbc */

void FUN_0040dbbc(void)

{
  ushort *puVar1;
  int in_stack_00000004;
  
  if ((*(byte *)(in_stack_00000004 + 0x16) & 1) != 0) {
    if (*(int *)(in_stack_00000004 + 0x29) < *(int *)(in_stack_00000004 + 0x1d)) {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 0x19) + 4);
      *puVar1 = *puVar1 | 0x20;
    }
    else {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + 0x19) + 4);
      *puVar1 = *puVar1 & 0xffdf;
    }
    DAT_00439da8 = 1;
    (**(code **)(*DAT_0044ec08 + 0x54))();
  }
  return;
}

