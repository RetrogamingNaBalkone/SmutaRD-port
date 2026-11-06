/* Ghidra address: 0042c108; FUN_0042c108 */

DWORD FUN_0042c108(void)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  int in_stack_00000004;
  
  DVar1 = FUN_0042e20c();
  if (DVar1 != 0xffffffff) {
    if (*(int *)(in_stack_00000004 + 8) < 0) {
      if ((*(byte *)((int)&DAT_00437f28 + *(char *)(in_stack_00000004 + 0x16) * 4 + 1) & 8) != 0) {
        DVar1 = FUN_0042e20c();
        if (DVar1 == 0xffffffff) {
          return 0xffffffff;
        }
        DVar2 = FUN_0042e20c();
        if (DVar2 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      iVar3 = FUN_0042c048();
      DVar1 = DVar1 + iVar3;
    }
    else {
      iVar3 = FUN_0042c048();
      DVar1 = DVar1 - iVar3;
    }
  }
  return DVar1;
}

