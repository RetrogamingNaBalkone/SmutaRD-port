/* Ghidra address: 0040e3d4; FUN_0040e3d4 */

undefined4 * FUN_0040e3d4(void)

{
  undefined4 *in_stack_00000004;
  undefined2 *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined2 in_stack_0000001c;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435712;
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_00000010;
  *(undefined2 *)((int)in_stack_00000004 + 0x51) = *in_stack_00000008;
  *(undefined2 *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2];
  *(undefined2 *)((int)in_stack_00000004 + 0x55) = in_stack_00000008[4];
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 2;
  *(int *)((int)in_stack_00000004 + 6) =
       (int)*(short *)((int)in_stack_00000004 + 0x51) + ((int)in_stack_00000010 >> 1);
  *(int *)((int)in_stack_00000004 + 10) =
       (int)*(short *)((int)in_stack_00000004 + 0x53) - (int)in_stack_0000000c;
  *(int *)((int)in_stack_00000004 + 0xe) =
       (int)*(short *)((int)in_stack_00000004 + 0x55) + ((int)in_stack_00000010 >> 1);
  *(short *)((int)in_stack_00000004 + 0x57) = in_stack_0000000c;
  *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000014;
  *(undefined4 *)((int)in_stack_00000004 + 0x49) = in_stack_00000018;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_0000001c;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

