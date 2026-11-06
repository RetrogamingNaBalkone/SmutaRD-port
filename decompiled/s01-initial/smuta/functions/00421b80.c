/* Ghidra address: 00421b80; FUN_00421b80 */

void FUN_00421b80(void)

{
  int *piVar1;
  undefined2 extraout_CX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)(in_stack_00000004 + 0xad);
  if (in_stack_00000008 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(in_stack_00000008 + 0x3e);
  }
  piVar1 = FUN_0042ec88(puVar2,in_stack_00000004 + 0xab,(short)piVar1,piVar1,
                        (undefined2 *)(in_stack_00000004 + 0xab));
  FUN_0042ec88(piVar1,extraout_EDX,extraout_CX,piVar1,puVar2);
  (&DAT_00499dfc)[*(short *)(in_stack_00000004 + 0xab)] = in_stack_00000004;
  FUN_00422058();
  *(undefined2 *)(in_stack_00000004 + 0xb5) = 0;
  *(undefined2 *)(in_stack_00000004 + 0xb3) = 0;
  return;
}

