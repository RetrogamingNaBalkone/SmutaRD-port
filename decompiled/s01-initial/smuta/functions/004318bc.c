/* Ghidra address: 004318bc; FUN_004318bc */

uint * FUN_004318bc(void)

{
  int iVar1;
  uint *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    FUN_00431320();
    in_stack_00000004 = (uint *)0x0;
  }
  else if (in_stack_00000004 == (uint *)0x0) {
    in_stack_00000004 = FUN_00431428();
  }
  else {
    iVar1 = FUN_00431794();
    if ((iVar1 == 0) && (in_stack_00000004 = FUN_00431428(), in_stack_00000004 != (uint *)0x0)) {
      FUN_00429008();
      FUN_00431320();
    }
  }
  return in_stack_00000004;
}

