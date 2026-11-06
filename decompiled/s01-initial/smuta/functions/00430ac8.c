/* Ghidra address: 00430ac8; FUN_00430ac8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430ac8(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = (*(code *)PTR_FUN_004389f8)();
  if (iVar1 == 0) {
    FUN_0042cfc4();
    if (in_stack_00000004 - 2U < 3) {
      DAT_00438c44 = 0x22;
    }
    else {
      DAT_00438c44 = 0x21;
    }
    FUN_00431da8();
  }
  return;
}

