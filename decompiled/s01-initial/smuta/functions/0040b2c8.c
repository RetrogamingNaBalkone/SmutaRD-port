/* Ghidra address: 0040b2c8; FUN_0040b2c8 */

void FUN_0040b2c8(void)

{
  byte bVar1;
  short sVar2;
  undefined4 *in_stack_00000004;
  int in_stack_00000010;
  byte *in_stack_00000014;
  
  for (sVar2 = 0; sVar2 < in_stack_00000010; sVar2 = sVar2 + 1) {
    bVar1 = (**(code **)*in_stack_00000004)();
    if ((ushort)bVar1 == *(ushort *)(in_stack_00000004 + 5)) {
      bVar1 = 0xff;
    }
    *in_stack_00000014 = bVar1;
    in_stack_00000014 = in_stack_00000014 + 1;
  }
  return;
}

