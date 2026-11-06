/* Ghidra address: 00426946; FUN_00426946 */

undefined4 FUN_00426946(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  short sVar4;
  short *in_stack_00000004;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  undefined2 *in_stack_00000010;
  short *in_stack_00000014;
  short in_stack_00000018;
  
  *in_stack_00000014 = *in_stack_00000014 + 1;
  if (*in_stack_00000014 < in_stack_00000004[1]) {
    sVar4 = 0;
    if (*in_stack_00000004 != 0) {
      sVar4 = (short)((((int)in_stack_00000018 + ((int)*in_stack_00000004 >> 1)) % 0x168) /
                     (int)*in_stack_00000004) * in_stack_00000004[1];
    }
    sVar1 = *in_stack_00000014;
    if (in_stack_00000004[2] <= (short)(sVar4 + sVar1)) {
      FUN_0042a068();
    }
    puVar3 = (undefined2 *)((short)(sVar4 + sVar1) * 10 + *(int *)(in_stack_00000004 + 4));
    *in_stack_00000008 = puVar3[1];
    *in_stack_0000000c = puVar3[2];
    *in_stack_00000010 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 3);
  }
  else {
    *in_stack_00000014 = -1;
    uVar2 = 0;
  }
  return uVar2;
}

