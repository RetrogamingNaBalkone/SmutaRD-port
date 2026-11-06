/* Ghidra address: 0042a658; FUN_0042a658 */

int * FUN_0042a658(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int in_stack_00000004;
  
  piVar2 = (int *)(in_stack_00000004 + 8);
  while( true ) {
    if (*piVar2 == 0) {
      return (int *)0x0;
    }
    if (piVar2[1] == 0) break;
    bVar1 = FUN_00429ac1();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      return piVar2;
    }
    piVar2 = piVar2 + 5;
  }
  return piVar2;
}

