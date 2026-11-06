/* Ghidra address: 00423790; FUN_00423790 */

void FUN_00423790(void)

{
  int iVar1;
  int in_stack_00000004;
  
  FUN_0041e39c();
  if (*(short *)(*(int *)(DAT_0048aab4 + 0x30e + (uint)*(byte *)(in_stack_00000004 + 0x10f) * 4) +
                0x74) == 10) {
    FUN_0041e39c();
  }
  if (*(short *)(in_stack_00000004 + 0xfc) == 0) {
    iVar1 = FUN_0041fe80();
    if (*(short *)(iVar1 + 0x18) == 0) {
      iVar1 = FUN_0041fe80();
      if (*(short *)(iVar1 + 0x18) != 0xc) {
        FUN_0041e39c();
      }
    }
    else if (*(short *)(iVar1 + 0x18) == 7) {
      iVar1 = FUN_0041fe80();
      if (*(short *)(iVar1 + 0x79) != 0) {
        *(short *)(iVar1 + 0x79) = *(short *)(iVar1 + 0x79) + -1;
      }
    }
    DAT_0043649e = DAT_0043649e + 1;
  }
  *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x10;
  *(undefined4 *)(in_stack_00000004 + 0x16a) = 1;
  return;
}

