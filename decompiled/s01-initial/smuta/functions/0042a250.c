/* Ghidra address: 0042a250; FUN_0042a250 */

undefined4 FUN_0042a250(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_00000010;
  int *local_8;
  
  while( true ) {
    iVar2 = *in_stack_00000004;
    if (iVar2 == 0) {
      return 0;
    }
    local_8 = (int *)(*in_stack_00000010 + in_stack_00000004[1]);
    if (in_stack_00000008 != 0) {
      local_8 = (int *)*local_8;
    }
    iVar1 = FUN_004297d6();
    if (iVar1 != 0) break;
    if ((((*(byte *)(iVar2 + 4) & 2) != 0) && ((uint)*(ushort *)(iVar2 + 0x10) + iVar2 != 0)) &&
       (iVar2 = FUN_0042a250(), iVar2 != 0)) {
      *in_stack_00000010 = (int)local_8;
      return 1;
    }
    in_stack_00000004 = in_stack_00000004 + 3;
  }
  *in_stack_00000010 = (int)local_8;
  return 1;
}

