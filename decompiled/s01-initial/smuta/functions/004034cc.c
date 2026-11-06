/* Ghidra address: 004034cc; FUN_004034cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004034cc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *in_stack_00000004;
  short in_stack_00000008;
  short in_stack_0000000c;
  short local_32;
  short local_16;
  short local_6;
  
  iVar4 = DAT_00439cfa + -1;
  if ((float)DAT_004435b8 < (float)*(int *)(DAT_00439d04 + 8 + in_stack_0000000c * 0xc)) {
    if ((float)*(int *)(DAT_00439d04 + 8 + in_stack_00000008 * 0xc) < (float)DAT_004435b8) {
      DAT_004435b0 = FUN_0042fc2c();
    }
    uVar1 = FUN_0042fc2c();
    local_16 = (short)uVar1;
    uVar1 = FUN_0042fc2c();
    DAT_004435f0 = (short)uVar1;
    local_6 = DAT_004435f0 - local_16;
    if (local_6 != 0) {
      if (local_6 < 0) {
        local_6 = -local_6;
      }
      if (local_16 < DAT_00434098) {
        local_16 = DAT_00434098;
      }
      else if (DAT_0043409a < local_16) {
        local_16 = DAT_0043409a;
      }
      if (DAT_004435f0 < DAT_00434098) {
        DAT_004435f0 = DAT_00434098;
      }
      else if (DAT_0043409a < DAT_004435f0) {
        DAT_004435f0 = DAT_0043409a;
      }
      _DAT_004435ee = local_16 + DAT_0044ebd0;
      DAT_004435e8 = local_6;
      local_32 = 0;
      if (0 < local_6) {
        do {
          uVar1 = FUN_0042fc2c();
          *in_stack_00000004 = (short)uVar1;
          iVar2 = FUN_0042fc2c();
          iVar3 = FUN_0042fc2c();
          iVar5 = iVar4;
          if ((iVar2 <= iVar4) && (iVar5 = iVar2, iVar2 < 0)) {
            iVar5 = 0;
          }
          iVar2 = iVar4;
          if ((iVar3 <= iVar4) && (iVar2 = iVar3, iVar3 < 0)) {
            iVar2 = 0;
          }
          *(int *)(in_stack_00000004 + 1) = iVar5;
          *(int *)(in_stack_00000004 + 3) = iVar2;
          local_32 = local_32 + 1;
          in_stack_00000004 = in_stack_00000004 + 5;
        } while (local_32 < local_6);
      }
    }
  }
  return;
}

