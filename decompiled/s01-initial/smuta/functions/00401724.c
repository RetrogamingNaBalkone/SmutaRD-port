/* Ghidra address: 00401724; FUN_00401724 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401724(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short in_stack_00000008;
  short in_stack_0000000c;
  
  FUN_00406b50();
  iVar3 = DAT_004390e8;
  piVar1 = &DAT_004390f0;
  _DAT_00443fa0 = (int)in_stack_00000008;
  for (iVar2 = 0; iVar2 < in_stack_0000000c; iVar2 = iVar2 + 1) {
    if (DAT_00435924 == 0) {
      *piVar1 = in_stack_00000008 * iVar2 + iVar3;
    }
    else {
      *piVar1 = in_stack_00000008 * iVar2 * 2 + iVar3;
    }
    piVar1 = piVar1 + 1;
  }
  for (iVar3 = 0; iVar3 < in_stack_0000000c; iVar3 = iVar3 + 1) {
    if (DAT_00435924 == 0) {
      FUN_00429054();
    }
    else {
      FUN_00429054();
    }
  }
  _DAT_00439cf0 = 1;
  return;
}

