/* Ghidra address: 00431988; FUN_00431988 */

uint * FUN_00431988(void)

{
  uint *puVar1;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  if (in_stack_00000004 == 0) {
    in_stack_00000004 = 1;
  }
  while( true ) {
    puVar1 = FUN_00431428();
    if ((puVar1 != (uint *)0x0) || (DAT_0049ac08 == (code *)0x0)) break;
    (*DAT_0049ac08)(0,extraout_EDX,in_stack_00000004);
  }
  return puVar1;
}

