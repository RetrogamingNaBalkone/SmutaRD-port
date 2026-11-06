/* Ghidra address: 00427c8d; FUN_00427c8d */

void FUN_00427c8d(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  uVar3 = (uint)(in_stack_00000014 * 0x18) / 1000;
  if (*in_stack_00000004 < in_stack_00000004[1] + -1) {
    if (*in_stack_00000004 == 0) {
      if (DAT_0043762c == 0) {
        DAT_00437634 = in_stack_00000004;
        in_stack_00000004[4] = (int)in_stack_00000004;
        in_stack_00000004[3] = (int)in_stack_00000004;
      }
      else {
        in_stack_00000004[3] = DAT_00437634[3];
        in_stack_00000004[4] = (int)DAT_00437634;
        *(int **)(in_stack_00000004[3] + 0x10) = in_stack_00000004;
        DAT_00437634[3] = (int)in_stack_00000004;
        DAT_00437634 = in_stack_00000004;
      }
      DAT_0043762c = DAT_0043762c + 1;
    }
    iVar1 = *in_stack_00000004;
    iVar2 = in_stack_00000004[2];
    *(undefined4 *)(iVar2 + 8 + iVar1 * 0x14) = in_stack_00000008;
    *(undefined4 *)(iVar2 + 0xc + iVar1 * 0x14) = in_stack_0000000c;
    *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x14) = in_stack_00000010;
    *(uint *)(in_stack_00000004[2] + 4 + *in_stack_00000004 * 0x14) = uVar3;
    *(uint *)(in_stack_00000004[2] + *in_stack_00000004 * 0x14) = uVar3;
    *in_stack_00000004 = *in_stack_00000004 + 1;
    DAT_00437630 = DAT_00437630 + 1;
  }
  return;
}

