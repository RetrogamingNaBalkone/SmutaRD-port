/* Ghidra address: 00422004; FUN_00422004 */

undefined4 FUN_00422004(void)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  undefined4 uVar2;
  
  FUN_0040886c();
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x6c);
  uVar1 = FUN_0040a830();
  if ((short)uVar1 == 0) {
    uVar1 = FUN_0040a7a4(*(undefined4 *)(in_stack_00000004 + 0x6c),extraout_EDX,uVar2,
                         *(undefined4 *)(in_stack_00000004 + 0x6c),0);
  }
  if (*(short *)(in_stack_00000004 + 0x74) == 1000) {
    return 0;
  }
  return CONCAT22((short)((uint)uVar1 >> 0x10),1);
}

