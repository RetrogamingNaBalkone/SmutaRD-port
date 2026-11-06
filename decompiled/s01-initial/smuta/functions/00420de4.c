/* Ghidra address: 00420de4; FUN_00420de4 */

void FUN_00420de4(void)

{
  short sVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  sVar1 = *(short *)(in_stack_00000008 + 0xab);
  *(short *)(in_stack_00000004 + 0x11a) = sVar1;
  if (*(int *)(in_stack_00000004 + 200 + sVar1 * 4) == 0) {
    *(int *)(in_stack_00000004 + 200 + sVar1 * 4) = in_stack_00000008;
    iVar2 = *(int *)(in_stack_00000004 + 200 + *(short *)(in_stack_00000004 + 0x118) * 4);
    if (iVar2 == 0) {
      *(undefined2 *)(in_stack_00000004 + 0x118) = *(undefined2 *)(in_stack_00000004 + 0x11a);
      FUN_00421be4();
    }
    else if ((*(ushort *)(iVar2 + 0xaf) & 4) != 0) {
      FUN_00421c74();
      FUN_00427c8d();
      return;
    }
  }
  return;
}

