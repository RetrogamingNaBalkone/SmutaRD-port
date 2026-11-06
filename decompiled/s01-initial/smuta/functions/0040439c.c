/* Ghidra address: 0040439c; FUN_0040439c */

undefined1 * FUN_0040439c(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *in_stack_00000004;
  
  iVar2 = 0;
  puVar3 = &DAT_00443934;
  do {
    uVar1 = (uint)*in_stack_00000004 + ((int)(uint)*in_stack_00000004 >> 1);
    if (0x3f < uVar1) {
      uVar1 = 0x3f;
    }
    *puVar3 = (char)uVar1;
    puVar3[1] = in_stack_00000004[1] - (char)((int)(uint)in_stack_00000004[1] >> 2);
    iVar2 = iVar2 + 3;
    puVar3[2] = in_stack_00000004[2] - (char)((int)(uint)in_stack_00000004[2] >> 2);
    puVar3 = puVar3 + 3;
    in_stack_00000004 = in_stack_00000004 + 3;
  } while (iVar2 < 0x300);
  return &DAT_00443934;
}

