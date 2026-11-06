/* Ghidra address: 0040dc54; FUN_0040dc54 */

undefined4 * FUN_0040dc54(void)

{
  undefined4 *in_stack_00000004;
  short *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  undefined1 in_stack_00000018;
  int in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000024;
  short in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435772;
  *(int *)((int)in_stack_00000004 + 0x19) = in_stack_0000001c;
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_00000010;
  if (in_stack_00000014 == 0) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4];
    *(short *)((int)in_stack_00000004 + 0x5b) =
         *(short *)((int)in_stack_00000004 + 0x55) + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5f) = *(undefined2 *)((int)in_stack_00000004 + 0x59);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x59);
  }
  else if (in_stack_00000014 == 0x5a) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4] + DAT_0044f6c8;
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5f) = in_stack_00000008[4];
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x55);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x59) +
         (int)*(short *)((int)in_stack_00000004 + 0x5f) >> 1;
  }
  else if (in_stack_00000014 == 0xb4) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008 + in_stack_00000010;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4] + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x5b) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5f) = *(undefined2 *)((int)in_stack_00000004 + 0x59);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x59);
  }
  else if (in_stack_00000014 == 0x10e) {
    *(short *)((int)in_stack_00000004 + 0x55) = *in_stack_00000008 + in_stack_00000010;
    *(short *)((int)in_stack_00000004 + 0x57) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[4];
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(short *)((int)in_stack_00000004 + 0x5d) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5f) =
         *(short *)((int)in_stack_00000004 + 0x59) + DAT_0044f6c8;
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x55);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x57);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x59) +
         (int)*(short *)((int)in_stack_00000004 + 0x5f) >> 1;
  }
  *(undefined2 *)((int)in_stack_00000004 + 0x61) = in_stack_00000024;
  if (in_stack_00000028 == 0) {
    *(short *)((int)in_stack_00000004 + 99) = *(short *)(in_stack_0000001c + 2) + -1;
  }
  else {
    *(short *)((int)in_stack_00000004 + 99) = in_stack_00000028;
  }
  *(undefined4 *)((int)in_stack_00000004 + 0x1d) = in_stack_0000002c;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_00000020;
  *(undefined1 *)((int)in_stack_00000004 + 0x16) = in_stack_00000018;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

