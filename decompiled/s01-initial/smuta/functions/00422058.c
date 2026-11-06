/* Ghidra address: 00422058; FUN_00422058 */

void FUN_00422058(void)

{
  int *piVar1;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(in_stack_00000004 + 0x76);
  if (in_stack_00000008 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(in_stack_00000008 + 0x3e);
  }
  piVar1 = FUN_0042ec88(puVar2,in_stack_00000004 + 0x74,(short)piVar1,piVar1,
                        (undefined2 *)(in_stack_00000004 + 0x74));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar2);
  FUN_0042ed84();
  return;
}

