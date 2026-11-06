/* Ghidra address: 00426592; FUN_00426592 */

void FUN_00426592(void)

{
  short sVar1;
  short sVar2;
  int in_stack_00000004;
  byte in_stack_00000010;
  int in_stack_00000014;
  uint uStack_8;
  
  if (in_stack_00000010 < 0x80) {
    uStack_8 = (uint)in_stack_00000010 << 0x10;
  }
  else if ((in_stack_00000010 < 0xf0) && (0xb < in_stack_00000010)) {
    uStack_8 = (uint)(ushort)(in_stack_00000010 - 0x40) << 0x10;
  }
  else {
    uStack_8 = (uint)(ushort)(in_stack_00000010 - 0x10) << 0x10;
  }
  for (sVar2 = 0; sVar2 < *(short *)(in_stack_00000004 + 0x26); sVar2 = sVar2 + 1) {
    sVar1 = 0;
    do {
      if ((*(byte *)(*(int *)(in_stack_00000004 + 0x1c) +
                     (uStack_8 >> 0x10) * (int)*(short *)(in_stack_00000004 + 0x26) + (int)sVar2) &
          (&DAT_0043732c)[sVar1]) == 0) {
        if (in_stack_00000014 != 1) {
          FUN_0042689e();
        }
      }
      else {
        FUN_0042689e();
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < 8);
  }
  return;
}

