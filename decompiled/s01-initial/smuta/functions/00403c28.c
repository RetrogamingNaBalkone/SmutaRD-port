/* Ghidra address: 00403c28; FUN_00403c28 */

void FUN_00403c28(void)

{
  int iVar1;
  int *in_stack_00000004;
  undefined4 local_70;
  
  FUN_00429054();
  (**(code **)(*in_stack_00000004 + 0x58))();
  FUN_00429054();
  do {
    (**(code **)(*in_stack_00000004 + 100))();
    iVar1 = FUN_00403b80();
  } while (iVar1 != 0);
  iVar1 = 0;
  if (0 < local_70) {
    do {
      FUN_00429054();
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_70);
  }
  (**(code **)(*in_stack_00000004 + 0x80))();
  return;
}

