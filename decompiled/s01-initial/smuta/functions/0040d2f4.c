/* Ghidra address: 0040d2f4; FUN_0040d2f4 */

short * FUN_0040d2f4(void)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  short *in_stack_00000004;
  
  FUN_004096a4();
  (**(code **)(*(int *)(in_stack_00000004 + 3) + 0xc))();
  pvVar2 = FUN_00410304();
  *(LPVOID *)(in_stack_00000004 + 1) = pvVar2;
  (**(code **)(*(int *)(in_stack_00000004 + 3) + 0xc))();
  for (iVar3 = 0; iVar3 < *in_stack_00000004; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(in_stack_00000004 + 1);
    *(undefined4 *)(iVar1 + 0x1a + iVar3 * 0x1e) = 0;
    *(undefined2 *)(iVar1 + 0x18 + iVar3 * 0x1e) = 0;
  }
  DAT_0044f6c4 = in_stack_00000004;
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

