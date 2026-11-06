/* Ghidra address: 0040d4dc; FUN_0040d4dc */

int FUN_0040d4dc(void)

{
  int iVar1;
  int *piVar2;
  short *in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  piVar2 = (int *)(*(int *)(in_stack_00000004 + 1) + 0x1a);
  while( true ) {
    if (*in_stack_00000004 <= iVar1) {
      FUN_00427b9f();
      return 0;
    }
    if (in_stack_00000008 == *piVar2) break;
    iVar1 = iVar1 + 1;
    piVar2 = (int *)((int)piVar2 + 0x1e);
  }
  return *(int *)(in_stack_00000004 + 1) + iVar1 * 0x1e;
}

