/* Ghidra address: 00411138; FUN_00411138 */

void FUN_00411138(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  short *in_stack_00000004;
  undefined4 local_28;
  
  FUN_0042b4b4(0x435a48);
  DAT_00436378 = 0;
  DAT_0043637c = 0;
  DAT_0048aaac = 0x40;
  DAT_0043408c = 0x200;
  DAT_00434090 = 0x180;
  DAT_0048e514 = 0;
  DAT_0048aab4 = in_stack_00000004;
  in_stack_00000004[0x3aa] = 0;
  in_stack_00000004[0x3ab] = 0;
  in_stack_00000004[6] = 0;
  in_stack_00000004[0x25b9] = 0;
  in_stack_00000004[0x388] = 0;
  FUN_00429054();
  FUN_00429054();
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00426e8c();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  *in_stack_00000004 = DAT_0048aab8;
  in_stack_00000004[1] = DAT_0048aaba;
  in_stack_00000004[2] = DAT_0048aabc;
  in_stack_00000004[0x3a7] = DAT_0048aabe;
  in_stack_00000004[0x3a8] = DAT_0048aac0;
  in_stack_00000004[5] = DAT_0048aac6;
  in_stack_00000004[3] = DAT_0048aac2;
  in_stack_00000004[4] = DAT_0048aac4;
  FUN_00407db8();
  FUN_00428fe4();
  FUN_00428fe4();
  FUN_00428fe4();
  in_stack_00000004[0x25b4] = 1;
  in_stack_00000004[0x25b5] = 0;
  *(int *)(in_stack_00000004 + 0x25b6) = (int)*in_stack_00000004;
  in_stack_00000004[0x387] = *in_stack_00000004 * in_stack_00000004[2];
  FUN_00428fe4();
  in_stack_00000004[0x3a9] = 0;
  FUN_00412b74();
  if (puVar1 != (uint *)0x0) {
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    FUN_00426cf8();
  }
  *in_FS_OFFSET = local_28;
  return;
}

