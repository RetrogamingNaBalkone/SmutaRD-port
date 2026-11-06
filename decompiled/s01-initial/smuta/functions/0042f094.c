/* Ghidra address: 0042f094; FUN_0042f094 */

uint FUN_0042f094(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int *in_stack_00000004;
  byte in_stack_00000008;
  
  if ((*(ushort *)(in_stack_00000004 + 0xc) & 3) == 1) {
    if (in_stack_00000004[2] == 0) {
      (**(code **)(*in_stack_00000004 + 0x30))();
    }
    if (in_stack_00000004[4] == 0) {
      FUN_0042f714();
    }
  }
  if (in_stack_00000004[4] != 0) {
    if (((uint)in_stack_00000004[6] <= (uint)in_stack_00000004[5]) &&
       ((*(ushort *)(in_stack_00000004 + 0xc) & 3) == 1)) {
      iVar1 = in_stack_00000004[2];
      iVar4 = FUN_004319bc();
      if (iVar4 == 0) {
        return 0xffffffff;
      }
      FUN_00428fe4();
      iVar4 = in_stack_00000004[5];
      iVar2 = in_stack_00000004[8];
      FUN_0042f678();
      FUN_0042f714();
      in_stack_00000004[5] = in_stack_00000004[5] + (iVar4 - iVar1);
      if (iVar2 != 0) {
        FUN_0042f6e0();
      }
      FUN_00431964();
    }
    if ((uint)in_stack_00000004[5] < (uint)in_stack_00000004[6]) {
      if ((uint)in_stack_00000004[6] <= (uint)in_stack_00000004[5]) {
        uVar5 = (**(code **)(*in_stack_00000004 + 0x18))();
        return uVar5;
      }
      pbVar3 = (byte *)in_stack_00000004[5];
      in_stack_00000004[5] = in_stack_00000004[5] + 1;
      *pbVar3 = in_stack_00000008;
      return (uint)in_stack_00000008;
    }
  }
  return 0xffffffff;
}

