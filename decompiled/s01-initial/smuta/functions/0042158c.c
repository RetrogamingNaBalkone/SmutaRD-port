/* Ghidra address: 0042158c; FUN_0042158c */

undefined4 FUN_0042158c(void)

{
  int iVar1;
  undefined2 extraout_var;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)(in_stack_00000004 + 0x89) = in_stack_0000000c;
  *(ushort *)(in_stack_00000004 + 0x1b) = *(ushort *)(in_stack_00000004 + 0x1b) | 0x1000;
  *(undefined4 *)(in_stack_00000004 + 0x30) = *in_stack_00000008;
  *(undefined4 *)(in_stack_00000004 + 0x38) = in_stack_00000008[2];
  *(undefined4 *)(in_stack_00000004 + 0x34) = in_stack_00000008[1];
  FUN_0041da94();
  *(undefined2 *)(in_stack_00000004 + 0x3c) = 0;
  FUN_0041da94();
  *(undefined2 *)(in_stack_00000004 + 0x42) = 0;
  do {
    FUN_0041e4b4();
    iVar1 = FUN_00426946();
    *(int *)(in_stack_00000004 + 100) = iVar1;
  } while (iVar1 == 0);
  FUN_00427c8d();
  return CONCAT22(extraout_var,1);
}

