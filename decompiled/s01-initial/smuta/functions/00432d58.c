/* Ghidra address: 00432d58; FUN_00432d58 */

undefined4 FUN_00432d58(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  uVar1 = DAT_00438f18;
  DAT_00438f18 = in_stack_00000004;
  if (in_stack_00000004 == 0) {
    DAT_00438f18 = 1;
  }
  return uVar1;
}

