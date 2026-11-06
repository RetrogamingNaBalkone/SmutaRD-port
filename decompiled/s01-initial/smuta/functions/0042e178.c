/* Ghidra address: 0042e178; FUN_0042e178 */

undefined4 FUN_0042e178(void)

{
  undefined4 uVar1;
  BOOL BVar2;
  uint in_stack_00000004;
  
  if (DAT_00437f24 <= in_stack_00000004) {
    uVar1 = FUN_0042dfc8();
    return uVar1;
  }
  BVar2 = CloseHandle(*(HANDLE *)(&DAT_0049ab1c + in_stack_00000004 * 4));
  if (BVar2 == 1) {
    (&DAT_00437f28)[in_stack_00000004] = 0;
    *(undefined4 *)(&DAT_0049ab1c + in_stack_00000004 * 4) = 0xffffffff;
    return 0;
  }
  uVar1 = FUN_0042e02c();
  return uVar1;
}

