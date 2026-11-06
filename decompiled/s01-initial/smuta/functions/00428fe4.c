/* Ghidra address: 00428fe4; FUN_00428fe4 */

undefined4 * FUN_00428fe4(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  uint in_stack_0000000c;
  
  puVar2 = in_stack_00000004;
  for (uVar1 = in_stack_0000000c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = in_stack_0000000c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)in_stack_00000008;
    in_stack_00000008 = (undefined4 *)((int)in_stack_00000008 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return in_stack_00000004;
}

