/* Ghidra address: 0042e47c; FUN_0042e47c */

undefined4 FUN_0042e47c(void)

{
  BOOL BVar1;
  undefined4 uVar2;
  LPCSTR in_stack_00000004;
  
  BVar1 = DeleteFileA(in_stack_00000004);
  if (BVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0042e02c();
  }
  return uVar2;
}

