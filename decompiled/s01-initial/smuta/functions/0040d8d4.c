/* Ghidra address: 0040d8d4; FUN_0040d8d4 */

undefined4 * FUN_0040d8d4(void)

{
  undefined4 *in_stack_00000004;
  short *in_stack_00000008;
  short in_stack_0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  byte in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000024;
  
  *in_stack_00000004 = &PTR_LAB_0043550a;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  *in_stack_00000004 = &PTR_LAB_00435792;
  FUN_00431b68();
  DAT_0044f6c8 = in_stack_00000010;
  *(undefined2 *)((int)in_stack_00000004 + 0x5d) = in_stack_00000024;
  if (in_stack_00000014 == 0) {
    *(short *)((int)in_stack_00000004 + 0x51) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = (DAT_0044f6c8 >> 1) + in_stack_00000008[4];
    *(short *)((int)in_stack_00000004 + 0x57) =
         *(short *)((int)in_stack_00000004 + 0x51) + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x51) +
         (int)*(short *)((int)in_stack_00000004 + 0x57) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x55);
  }
  else if (in_stack_00000014 == 0x5a) {
    *(short *)((int)in_stack_00000004 + 0x51) = (DAT_0044f6c8 >> 1) + *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = in_stack_00000008[4];
    *(undefined2 *)((int)in_stack_00000004 + 0x57) = *(undefined2 *)((int)in_stack_00000004 + 0x51);
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5b) =
         *(short *)((int)in_stack_00000004 + 0x55) + DAT_0044f6c8;
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x51);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
  }
  else if (in_stack_00000014 == 0xb4) {
    *(short *)((int)in_stack_00000004 + 0x51) = *in_stack_00000008 + DAT_0044f6c8;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = (DAT_0044f6c8 >> 1) + in_stack_00000008[4];
    *(short *)((int)in_stack_00000004 + 0x57) = *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(undefined2 *)((int)in_stack_00000004 + 0x5b) = *(undefined2 *)((int)in_stack_00000004 + 0x55);
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 1;
    *(int *)((int)in_stack_00000004 + 6) =
         (int)*(short *)((int)in_stack_00000004 + 0x51) +
         (int)*(short *)((int)in_stack_00000004 + 0x57) >> 1;
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) = (int)*(short *)((int)in_stack_00000004 + 0x55);
  }
  else if (in_stack_00000014 == 0x10e) {
    *(short *)((int)in_stack_00000004 + 0x51) = (DAT_0044f6c8 >> 1) + *in_stack_00000008;
    *(short *)((int)in_stack_00000004 + 0x53) = in_stack_00000008[2] - in_stack_0000000c;
    *(short *)((int)in_stack_00000004 + 0x55) = in_stack_00000008[4] + DAT_0044f6c8;
    *(undefined2 *)((int)in_stack_00000004 + 0x57) = *(undefined2 *)((int)in_stack_00000004 + 0x51);
    *(short *)((int)in_stack_00000004 + 0x59) = in_stack_00000008[2];
    *(short *)((int)in_stack_00000004 + 0x5b) = in_stack_00000008[4];
    *(undefined4 *)((int)in_stack_00000004 + 0x12) = 0;
    *(int *)((int)in_stack_00000004 + 6) = (int)*(short *)((int)in_stack_00000004 + 0x51);
    *(int *)((int)in_stack_00000004 + 10) = (int)*(short *)((int)in_stack_00000004 + 0x53);
    *(int *)((int)in_stack_00000004 + 0xe) =
         (int)*(short *)((int)in_stack_00000004 + 0x55) +
         (int)*(short *)((int)in_stack_00000004 + 0x5b) >> 1;
  }
  *(undefined4 *)((int)in_stack_00000004 + 0x12) = 3;
  *(undefined4 *)((int)in_stack_00000004 + 0x19) = in_stack_0000001c;
  *(byte *)((int)in_stack_00000004 + 0x16) = in_stack_00000018 & 0xfd;
  *(undefined2 *)(in_stack_00000004 + 1) = in_stack_00000020;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

