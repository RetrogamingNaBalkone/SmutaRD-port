/* Ghidra address: 004282d6; FUN_004282d6 */

void FUN_004282d6(void)

{
  int iVar1;
  int *piVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int local_18 [3];
  short local_c;
  undefined2 local_a;
  
  piVar2 = local_18;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    piVar2 = piVar2 + 1;
  }
  *(short *)piVar2 = (short)*in_stack_00000008;
  if (*in_stack_00000004 == 0x10) {
    local_18[2] = local_18[2] << 1;
    local_c = local_c << 1;
    local_a = 0x10;
  }
  waveopen();
  iVar1 = 0;
  do {
    FUN_00428c43();
    FUN_00428c7c();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}

