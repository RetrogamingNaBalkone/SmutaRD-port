/* Ghidra address: 00424d90; FUN_00424d90 */

void FUN_00424d90(void)

{
  short sVar1;
  short in_stack_00000004;
  
  DAT_00435498 = DAT_00435498 + in_stack_00000004;
  if (DAT_0049a32c < DAT_00435498) {
    DAT_00435498 = DAT_0049a32c;
  }
  sVar1 = DAT_0049a336;
  if (in_stack_00000004 != DAT_0049a184) {
    sVar1 = (short)(((int)DAT_0049a336 * (int)in_stack_00000004) / DAT_0049a184);
  }
  DAT_0049a334 = DAT_0049a334 + sVar1;
  if (DAT_0049a330 < DAT_0049a334) {
    DAT_0049a334 = DAT_0049a330;
  }
  return;
}

