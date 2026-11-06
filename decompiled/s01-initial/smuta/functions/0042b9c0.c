/* Ghidra address: 0042b9c0; FUN_0042b9c0 */

undefined4 FUN_0042b9c0(void)

{
  int *in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  if ((*(byte *)((int)in_stack_00000004 + 0x12) & 4) != 0) {
    FUN_00431320();
  }
  *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfff3;
  in_stack_00000004[3] = 0;
  in_stack_00000004[1] = (int)in_stack_00000004 + 0x17;
  *in_stack_00000004 = (int)in_stack_00000004 + 0x17;
  if ((in_stack_0000000c != 2) && (in_stack_00000010 != 0)) {
    PTR_FUN_00438ce4 = &LAB_0042d8a0;
    if (in_stack_00000008 == (uint *)0x0) {
      in_stack_00000008 = FUN_00431428();
      if (in_stack_00000008 == (uint *)0x0) {
        return 0xffffffff;
      }
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 4;
    }
    *in_stack_00000004 = (int)in_stack_00000008;
    in_stack_00000004[1] = (int)in_stack_00000008;
    in_stack_00000004[3] = in_stack_00000010;
    if (in_stack_0000000c == 1) {
      *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 8;
    }
  }
  return 0;
}

