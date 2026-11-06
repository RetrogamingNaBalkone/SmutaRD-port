/* Ghidra address: 0042f944; FUN_0042f944 */

uint FUN_0042f944(void)

{
  uint uVar1;
  uint in_stack_00000004;
  
  if (in_stack_00000004 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar1 = in_stack_00000004 & 0xff;
  if (((&DAT_00438815)[uVar1] & 8) != 0) {
    return uVar1 - 0x20;
  }
  return uVar1;
}

