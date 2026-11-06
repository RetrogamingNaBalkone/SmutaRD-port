/* Ghidra address: 004103f4; FUN_004103f4 */

void FUN_004103f4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int in_stack_00000004;
  int *local_20;
  int local_14;
  
  local_14 = 0;
  piVar5 = &DAT_0044ff60;
  local_20 = &DAT_0044f9c0;
  do {
    FUN_0042fd14();
    uVar1 = FUN_0042fc2c();
    FUN_0042fa9c();
    uVar2 = FUN_0042fc2c();
    uVar3 = (int)uVar1 >> 0x1f;
    uVar4 = (int)uVar2 >> 0x1f;
    if ((int)((uVar2 ^ uVar4) - uVar4) < (int)((uVar1 ^ uVar3) - uVar3)) {
      *local_20 = in_stack_00000004 * 0x10000;
      if ((int)uVar1 < 0) {
        *local_20 = in_stack_00000004 * -0x10000;
      }
      *piVar5 = ((int)uVar2 / (int)(((int)uVar1 >> 0x10 ^ uVar3) - uVar3)) * in_stack_00000004;
    }
    else {
      *piVar5 = in_stack_00000004 * 0x10000;
      if ((int)uVar2 < 0) {
        *piVar5 = in_stack_00000004 * -0x10000;
      }
      *local_20 = ((int)uVar1 / (int)(((int)uVar2 >> 0x10 ^ uVar4) - uVar4)) * in_stack_00000004;
    }
    local_14 = local_14 + 1;
    piVar5 = piVar5 + 1;
    local_20 = local_20 + 1;
  } while (local_14 < 0x168);
  return;
}

