/* Ghidra address: 00407e34; FUN_00407e34 */

void FUN_00407e34(void)

{
  byte *pbVar1;
  short sVar2;
  undefined1 *puVar3;
  byte *in_stack_00000004;
  undefined1 *in_stack_00000008;
  short in_stack_0000000c;
  
  puVar3 = &DAT_00445e8c;
  sVar2 = 0;
  do {
    *puVar3 = (char)(((longlong)(int)sVar2 * (longlong)((int)in_stack_0000000c << 8) & 0xffffffffU)
                    / 0x6400);
    sVar2 = sVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (sVar2 < 0x100);
  sVar2 = 0;
  do {
    sVar2 = sVar2 + 1;
    *in_stack_00000008 = (&DAT_00445e8c)[*in_stack_00000004];
    pbVar1 = in_stack_00000004 + 2;
    in_stack_00000008[1] = (&DAT_00445e8c)[in_stack_00000004[1]];
    in_stack_00000004 = in_stack_00000004 + 3;
    in_stack_00000008[2] = (&DAT_00445e8c)[*pbVar1];
    in_stack_00000008 = in_stack_00000008 + 3;
  } while (sVar2 < 0x100);
  return;
}

