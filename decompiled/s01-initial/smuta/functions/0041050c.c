/* Ghidra address: 0041050c; FUN_0041050c */

void FUN_0041050c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_stack_00000004;
  
  uVar2 = *in_stack_00000004 - in_stack_00000004[2] >> 0x1f;
  uVar3 = in_stack_00000004[1] - in_stack_00000004[3] >> 0x1f;
  iVar1 = ((in_stack_00000004[1] - in_stack_00000004[3] ^ uVar3) - uVar3) * 0x10000;
  iVar4 = ((*in_stack_00000004 - in_stack_00000004[2] ^ uVar2) - uVar2) * 0x10000;
  if (iVar1 < iVar4) {
    in_stack_00000004[8] = 0x10000;
    iVar4 = iVar4 >> 0x10;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    in_stack_00000004[9] = iVar1 / iVar4;
  }
  else {
    iVar1 = iVar1 >> 0x10;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    in_stack_00000004[8] = iVar4 / iVar1;
    in_stack_00000004[9] = 0x10000;
  }
  if (in_stack_00000004[2] < *in_stack_00000004) {
    in_stack_00000004[8] = -in_stack_00000004[8];
  }
  if (in_stack_00000004[3] < in_stack_00000004[1]) {
    in_stack_00000004[9] = -in_stack_00000004[9];
  }
  in_stack_00000004[6] = *in_stack_00000004 << 0x10;
  in_stack_00000004[7] = in_stack_00000004[1] << 0x10;
  return;
}

