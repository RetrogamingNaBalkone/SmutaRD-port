/* Ghidra address: 00408384; FUN_00408384 */

int FUN_00408384(void)

{
  undefined1 uVar1;
  int in_stack_00000004;
  
  uVar1 = 0xcc;
  if ((*(byte *)(in_stack_00000004 + 0x1e) & 1) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(in_stack_00000004 + 0x57) = uVar1;
  uVar1 = 0xc6;
  if ((*(byte *)(in_stack_00000004 + 0x1e) & 2) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(in_stack_00000004 + 0x58) = uVar1;
  uVar1 = 199;
  if ((*(byte *)(in_stack_00000004 + 0x1e) & 4) == 0) {
    uVar1 = 0x20;
  }
  *(undefined1 *)(in_stack_00000004 + 0x59) = uVar1;
  return in_stack_00000004 + 0x57;
}

