/* Ghidra address: 00420ed0; FUN_00420ed0 */

void FUN_00420ed0(void)

{
  int iVar1;
  int in_stack_00000004;
  short in_stack_00000008;
  
  if ((((*(int *)(in_stack_00000004 + 200 + in_stack_00000008 * 4) != 0) &&
       (*(int *)(in_stack_00000004 + 200 + in_stack_00000008 * 4) !=
        *(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4))) &&
      (*(short *)(in_stack_00000004 + 0x104 + in_stack_00000008 * 2) != 0)) &&
     (in_stack_00000008 != *(short *)(in_stack_00000004 + 0x11a))) {
    *(short *)(in_stack_00000004 + 0x11a) = in_stack_00000008;
    iVar1 = *(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4);
    if ((iVar1 == 0) || ((*(ushort *)(iVar1 + 0xaf) & 4) == 0)) {
      *(undefined2 *)(in_stack_00000004 + 0x118) = *(undefined2 *)(in_stack_00000004 + 0x11a);
      FUN_00421be4();
    }
    else {
      FUN_00421c74();
      FUN_00427c8d();
    }
  }
  return;
}

