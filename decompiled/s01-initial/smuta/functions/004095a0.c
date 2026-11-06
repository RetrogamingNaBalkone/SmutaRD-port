/* Ghidra address: 004095a0; FUN_004095a0 */

undefined4 FUN_004095a0(void)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort in_stack_00000004;
  int in_stack_00000008;
  short *in_stack_0000000c;
  
  *in_stack_0000000c = *(short *)(in_stack_00000008 + 8);
  uVar3 = 1;
  piVar1 = (int *)(in_stack_00000008 + 0x14);
  if (1 < in_stack_00000004) {
    do {
      if ((int)*in_stack_0000000c < *piVar1) {
        *in_stack_0000000c = (short)*piVar1;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 3;
    } while (uVar3 < in_stack_00000004);
  }
  if (*in_stack_0000000c < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT22((short)((uint)piVar1 >> 0x10),1);
  }
  return uVar2;
}

