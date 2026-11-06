/* Ghidra address: 00401c88; FUN_00401c88 */

void FUN_00401c88(void)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  byte *in_stack_00000014;
  
  pbVar1 = (byte *)((&DAT_004390f0)[in_stack_0000000c] + in_stack_00000008);
  for (sVar3 = 0; sVar3 < in_stack_00000010; sVar3 = sVar3 + 1) {
    bVar2 = *pbVar1;
    if ((ushort)bVar2 == *(ushort *)(in_stack_00000004 + 0x14)) {
      bVar2 = 0xff;
    }
    *in_stack_00000014 = bVar2;
    in_stack_00000014 = in_stack_00000014 + 1;
    pbVar1 = pbVar1 + 1;
  }
  return;
}

