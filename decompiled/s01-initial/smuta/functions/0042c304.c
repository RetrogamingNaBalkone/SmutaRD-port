/* Ghidra address: 0042c304; FUN_0042c304 */

uint FUN_0042c304(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte in_stack_00000004;
  int *in_stack_00000008;
  
  if (in_stack_00000008[2] < -1) {
    in_stack_00000008[2] = in_stack_00000008[2] + 1;
    pbVar1 = (byte *)*in_stack_00000008;
    *in_stack_00000008 = *in_stack_00000008 + 1;
    *pbVar1 = in_stack_00000004;
    if ((((*(byte *)((int)in_stack_00000008 + 0x12) & 8) != 0) &&
        ((in_stack_00000004 == 10 || (in_stack_00000004 == 0xd)))) &&
       (iVar2 = FUN_0042bad4(), iVar2 != 0)) {
      return 0xffffffff;
    }
    uVar3 = (uint)in_stack_00000004;
  }
  else if (((*(ushort *)((int)in_stack_00000008 + 0x12) & 0x90) == 0) &&
          ((*(ushort *)((int)in_stack_00000008 + 0x12) & 2) != 0)) {
    *(ushort *)((int)in_stack_00000008 + 0x12) = *(ushort *)((int)in_stack_00000008 + 0x12) | 0x100;
    if (in_stack_00000008[3] == 0) {
      iVar2 = FUN_0042dc08();
      if ((iVar2 == 1) || ((*(byte *)((int)in_stack_00000008 + 0x13) & 2) != 0)) {
        uVar3 = (uint)in_stack_00000004;
      }
      else {
        *(ushort *)((int)in_stack_00000008 + 0x12) =
             *(ushort *)((int)in_stack_00000008 + 0x12) | 0x10;
        uVar3 = 0xffffffff;
      }
    }
    else {
      if ((in_stack_00000008[2] != 0) && (iVar2 = FUN_0042bad4(), iVar2 != 0)) {
        return 0xffffffff;
      }
      in_stack_00000008[2] = -in_stack_00000008[3];
      pbVar1 = (byte *)*in_stack_00000008;
      *in_stack_00000008 = *in_stack_00000008 + 1;
      *pbVar1 = in_stack_00000004;
      if (((*(byte *)((int)in_stack_00000008 + 0x12) & 8) != 0) &&
         (((in_stack_00000004 == 10 || (in_stack_00000004 == 0xd)) &&
          (iVar2 = FUN_0042bad4(), iVar2 != 0)))) {
        return 0xffffffff;
      }
      uVar3 = (uint)in_stack_00000004;
    }
  }
  else {
    *(ushort *)((int)in_stack_00000008 + 0x12) = *(ushort *)((int)in_stack_00000008 + 0x12) | 0x10;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

