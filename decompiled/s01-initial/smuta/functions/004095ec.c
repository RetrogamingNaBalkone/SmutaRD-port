/* Ghidra address: 004095ec; FUN_004095ec */

undefined4 FUN_004095ec(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  ushort local_8;
  ushort local_6;
  
  local_8 = 0;
  local_6 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar1 = 0;
  uVar2 = 0;
  if (in_stack_00000004 != 0) {
    do {
      uVar6 = uVar2;
      uVar5 = uVar1;
      if (*in_stack_00000008 < in_stack_0000000c) {
        uVar5 = uVar5 + 1;
      }
      if (in_stack_00000014 < *in_stack_00000008) {
        uVar6 = uVar6 + 1;
      }
      if (in_stack_00000008[1] < in_stack_00000010) {
        local_6 = local_6 + 1;
      }
      if (in_stack_00000018 < in_stack_00000008[1]) {
        local_8 = local_8 + 1;
      }
      in_stack_00000008 = in_stack_00000008 + 3;
      uVar4 = uVar4 + 1;
      uVar1 = uVar5;
      uVar2 = uVar6;
    } while (uVar4 < in_stack_00000004);
  }
  if ((((in_stack_00000004 == uVar5) || (in_stack_00000004 == uVar6)) ||
      (in_stack_00000004 == local_6)) || (in_stack_00000004 == local_8)) {
    uVar3 = CONCAT22((short)((uint)in_stack_00000008 >> 0x10),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

