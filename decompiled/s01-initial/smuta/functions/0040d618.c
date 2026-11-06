/* Ghidra address: 0040d618; FUN_0040d618 */

undefined4 FUN_0040d618(void)

{
  int iVar1;
  LPVOID pvVar2;
  int in_stack_00000004;
  undefined2 *in_stack_0000000c;
  int in_stack_00000010;
  
  iVar1 = FUN_0040d47c();
  if ((*(byte *)(*(int *)(in_stack_00000004 + 2) + 0x18 + iVar1 * 0x1e) & 2) == 0) {
    if (in_stack_00000010 == 0) {
      pvVar2 = FUN_00410304();
      *(LPVOID *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e) = pvVar2;
    }
    else {
      *(int *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e) = in_stack_00000010;
    }
    (**(code **)(*(int *)(in_stack_00000004 + 6) + 0x14))();
    (**(code **)(*(int *)(in_stack_00000004 + 6) + 0xc))();
    *(undefined2 *)(*(int *)(in_stack_00000004 + 2) + 0x18 + iVar1 * 0x1e) = 2;
  }
  *in_stack_0000000c = *(undefined2 *)(*(int *)(in_stack_00000004 + 2) + 0x10 + iVar1 * 0x1e);
  return *(undefined4 *)(*(int *)(in_stack_00000004 + 2) + 0x1a + iVar1 * 0x1e);
}

