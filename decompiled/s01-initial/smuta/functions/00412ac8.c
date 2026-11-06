/* Ghidra address: 00412ac8; FUN_00412ac8 */

void FUN_00412ac8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_stack_00000008;
  
  uVar1 = *in_stack_00000008;
  uVar2 = in_stack_00000008[2];
  FUN_00412628();
  *in_stack_00000008 = uVar1;
  in_stack_00000008[2] = uVar2;
  return;
}

