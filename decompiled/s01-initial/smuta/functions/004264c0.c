/* Ghidra address: 004264c0; FUN_004264c0 */

void FUN_004264c0(void)

{
  LPVOID pvVar1;
  int in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_0041034c();
  pvVar1 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 0x1c) = pvVar1;
  (**(code **)(*in_stack_00000008 + 0xc))
            (in_stack_00000008,*in_stack_00000008,in_stack_0000000c,in_stack_00000008,
             *(undefined4 *)(in_stack_00000004 + 0x1c));
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = in_stack_0000000c + 0xff;
  }
  *(short *)(in_stack_00000004 + 0x26) = (short)((uint)in_stack_0000000c >> 8);
  *(undefined2 *)(in_stack_00000004 + 0x24) = *(undefined2 *)(in_stack_00000004 + 0x26);
  return;
}

