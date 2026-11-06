/* Ghidra address: 0040d388; FUN_0040d388 */

void FUN_0040d388(void)

{
  int iVar1;
  short *in_stack_00000004;
  
  for (iVar1 = 0; iVar1 < *in_stack_00000004; iVar1 = iVar1 + 1) {
    if ((*(byte *)(*(int *)(in_stack_00000004 + 1) + 0x18 + iVar1 * 0x1e) & 2) != 0) {
      *(undefined2 *)(*(int *)(in_stack_00000004 + 1) + 0x18 + iVar1 * 0x1e) = 0;
      FUN_0041034c();
      *(undefined4 *)(*(int *)(in_stack_00000004 + 1) + 0x1a + iVar1 * 0x1e) = 0;
    }
  }
  return;
}

