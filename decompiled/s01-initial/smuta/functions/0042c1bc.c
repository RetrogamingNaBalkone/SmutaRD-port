/* Ghidra address: 0042c1bc; FUN_0042c1bc */

undefined4 FUN_0042c1bc(void)

{
  char *pcVar1;
  undefined4 *in_stack_00000004;
  
  if ((*(byte *)((int)in_stack_00000004 + 0x13) & 2) != 0) {
    FUN_0042c188();
  }
  *in_stack_00000004 = in_stack_00000004[1];
  pcVar1 = FUN_0042da20();
  in_stack_00000004[2] = pcVar1;
  if (0 < (int)pcVar1) {
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) & 0xffdf
    ;
    return 0;
  }
  if (in_stack_00000004[2] == 0) {
    *(ushort *)((int)in_stack_00000004 + 0x12) =
         *(ushort *)((int)in_stack_00000004 + 0x12) & 0xfe7f | 0x20;
  }
  else {
    in_stack_00000004[2] = 0;
    *(ushort *)((int)in_stack_00000004 + 0x12) = *(ushort *)((int)in_stack_00000004 + 0x12) | 0x10;
  }
  return 0xffffffff;
}

