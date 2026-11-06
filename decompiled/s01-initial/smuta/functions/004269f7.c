/* Ghidra address: 004269f7; FUN_004269f7 */

undefined4 FUN_004269f7(void)

{
  undefined2 *puVar1;
  short sVar2;
  short *in_stack_00000004;
  short in_stack_00000008;
  undefined2 *in_stack_0000000c;
  short in_stack_00000010;
  
  if (in_stack_00000008 < 0) {
    in_stack_00000008 = 0;
  }
  else if (in_stack_00000004[1] <= in_stack_00000008) {
    in_stack_00000008 = in_stack_00000004[1] + -1;
  }
  sVar2 = 0;
  if (*in_stack_00000004 != 0) {
    sVar2 = (short)((((int)in_stack_00000010 + ((int)*in_stack_00000004 >> 1)) % 0x168) /
                   (int)*in_stack_00000004) * in_stack_00000004[1];
  }
  sVar2 = sVar2 + in_stack_00000008;
  if ((in_stack_00000004[2] <= sVar2) || (sVar2 < 0)) {
    FUN_0042a068();
  }
  puVar1 = (undefined2 *)(sVar2 * 10 + *(int *)(in_stack_00000004 + 4));
  *in_stack_0000000c = *puVar1;
  return *(undefined4 *)(puVar1 + 3);
}

