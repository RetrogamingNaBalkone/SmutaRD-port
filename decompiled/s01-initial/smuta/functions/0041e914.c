/* Ghidra address: 0041e914; FUN_0041e914 */

undefined4 FUN_0041e914(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  undefined4 uVar2;
  
  if (*(short *)(in_stack_00000004 + 0x8f) == 1000) {
    uVar2 = *(undefined4 *)(in_stack_00000004 + 0x6c);
    uVar1 = FUN_0040a818();
    FUN_0040a7a4(uVar1,*(undefined4 *)(in_stack_00000004 + 0x6c),uVar2,
                 *(undefined4 *)(in_stack_00000004 + 0x6c),0);
  }
  return 0;
}

