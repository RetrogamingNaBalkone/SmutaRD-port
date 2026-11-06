/* Ghidra address: 004266d7; FUN_004266d7 */

void FUN_004266d7(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  byte in_stack_00000014;
  int in_stack_00000018;
  ushort local_6;
  
  if (in_stack_00000014 < 0x80) {
    local_6 = (ushort)in_stack_00000014;
  }
  else if ((in_stack_00000014 < 0xf0) && (0xb < in_stack_00000014)) {
    local_6 = in_stack_00000014 - 0x40;
  }
  else {
    local_6 = in_stack_00000014 - 0x10;
  }
  sVar1 = *in_stack_00000008;
  iVar4 = *(int *)(in_stack_00000008 + 7) + in_stack_00000010 * sVar1 + in_stack_0000000c;
  for (sVar3 = 0; sVar3 < *(short *)(in_stack_00000004 + 0x26); sVar3 = sVar3 + 1) {
    sVar2 = 0;
    do {
      if ((*(byte *)(*(int *)(in_stack_00000004 + 0x1c) +
                     (uint)local_6 * (int)*(short *)(in_stack_00000004 + 0x26) + (int)sVar3) &
          (&DAT_00437334)[sVar2]) == 0) {
        if (in_stack_00000018 != 1) {
          *(undefined1 *)(iVar4 + sVar2) = *(undefined1 *)(in_stack_00000004 + 0x22);
        }
      }
      else {
        *(undefined1 *)(iVar4 + sVar2) = *(undefined1 *)(in_stack_00000004 + 0x20);
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < 8);
    iVar4 = iVar4 + sVar1;
  }
  return;
}

