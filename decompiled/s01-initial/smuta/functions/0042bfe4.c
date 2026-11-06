/* Ghidra address: 0042bfe4; FUN_0042bfe4 */

uint FUN_0042bfe4(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000004;
  
  if ((in_stack_00000004 != 0) && (iVar1 = FUN_00429114(), iVar1 != 0)) {
    uVar2 = FUN_0042bf08();
    if (uVar2 != 0) {
      return (uint)*(byte *)(in_stack_00000004 + -1 + iVar1);
    }
    return 0xffffffff;
  }
  return 0;
}

