/* Ghidra address: 00426a95; FUN_00426a95 */

undefined4 FUN_00426a95(void)

{
  undefined2 *puVar1;
  short sVar2;
  short *in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  short in_stack_00000010;
  undefined2 *in_stack_00000014;
  short in_stack_00000018;
  
  if (in_stack_00000010 < 0) {
    in_stack_00000010 = 0;
  }
  else if (in_stack_00000004[1] <= in_stack_00000010) {
    in_stack_00000010 = in_stack_00000004[1] + -1;
  }
  sVar2 = 0;
  if (*in_stack_00000004 != 0) {
    sVar2 = (short)((((int)in_stack_00000018 + ((int)*in_stack_00000004 >> 1)) % 0x168) /
                   (int)*in_stack_00000004) * in_stack_00000004[1];
  }
  if (in_stack_00000004[2] <= (short)(sVar2 + in_stack_00000010)) {
    FUN_0042a068();
  }
  puVar1 = (undefined2 *)((short)(sVar2 + in_stack_00000010) * 10 + *(int *)(in_stack_00000004 + 4))
  ;
  *in_stack_00000008 = puVar1[1];
  *in_stack_0000000c = puVar1[2];
  *in_stack_00000014 = *puVar1;
  return *(undefined4 *)(puVar1 + 3);
}

