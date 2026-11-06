/* Ghidra address: 00403ed8; FUN_00403ed8 */

void FUN_00403ed8(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  uVar1 = in_stack_0000000c >> 2;
  puVar2 = in_stack_00000004;
  do {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *in_stack_00000004 = *in_stack_00000008;
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_00000004 = in_stack_00000004 + 1;
    }
    in_stack_00000004 = (undefined4 *)((int)puVar2 + in_stack_00000014);
    in_stack_00000010 = in_stack_00000010 + -1;
    uVar1 = in_stack_0000000c >> 2;
    puVar2 = in_stack_00000004;
  } while (in_stack_00000010 != 0);
  return;
}

