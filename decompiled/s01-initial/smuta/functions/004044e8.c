/* Ghidra address: 004044e8; FUN_004044e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004044e8(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  
  if (*(int *)(in_stack_00000004 + 0x5c) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x54) = in_stack_00000010;
    DAT_00443c34 = in_stack_00000010;
    *(int *)(in_stack_00000004 + 0x58) = in_stack_00000014;
    _DAT_00443c38 = in_stack_00000014;
    *(int *)(in_stack_00000004 + 0x5c) = *(int *)(in_stack_00000004 + 0x54) * in_stack_00000014;
    DAT_00443c3c = FUN_00410304();
    *(LPVOID *)(in_stack_00000004 + 0x8e) = DAT_00443c3c;
    _DAT_0043428c = *(undefined4 *)(in_stack_00000004 + 0x54);
    _DAT_00434290 = *(undefined4 *)(in_stack_00000004 + 0x58);
    FUN_0040396c();
    FUN_004039f0();
  }
  return;
}

