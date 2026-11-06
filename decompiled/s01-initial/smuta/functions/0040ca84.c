/* Ghidra address: 0040ca84; FUN_0040ca84 */

void FUN_0040ca84(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int *in_stack_00000004;
  short sStack00000008;
  short sStack0000000c;
  short in_stack_00000010;
  short in_stack_00000014;
  short *in_stack_00000018;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  short local_16;
  short *local_8;
  
  local_8 = in_stack_00000018 + 2;
  sVar1 = *in_stack_00000018;
  sVar2 = in_stack_00000018[1];
  if (in_stack_00000010 < 1) {
    in_stack_00000010 = 1;
  }
  if (in_stack_00000014 < 1) {
    in_stack_00000014 = 1;
  }
  if (*(int *)((int)in_stack_00000004 + 0x32) - _sStack00000008 < (int)in_stack_00000010) {
    in_stack_00000010 = *(short *)((int)in_stack_00000004 + 0x32) - sStack00000008;
  }
  if (*(int *)((int)in_stack_00000004 + 0x36) - _sStack0000000c < (int)in_stack_00000014) {
    in_stack_00000014 = *(short *)((int)in_stack_00000004 + 0x36) - sStack0000000c;
  }
  local_16 = in_stack_00000014;
  if (sVar1 < in_stack_00000010) {
    for (local_18 = 0; (int)(uint)local_18 < (int)sVar2; local_18 = local_18 + 1) {
      for (; sVar2 <= local_16; local_16 = local_16 + -sVar2) {
        psVar4 = local_8;
        sVar3 = in_stack_00000010;
        for (local_1a = 0; (int)(uint)local_1a < (int)sVar1; local_1a = local_1a + 1) {
          for (; sVar1 <= sVar3; sVar3 = sVar3 + -sVar1) {
            if ((char)*psVar4 != -1) {
              (**(code **)(*in_stack_00000004 + 4))();
            }
          }
          sVar3 = sVar3 + in_stack_00000010;
          psVar4 = (short *)((int)psVar4 + 1);
        }
      }
      local_16 = local_16 + in_stack_00000014;
      local_8 = (short *)((int)local_8 + (int)sVar1);
    }
  }
  else {
    for (local_1c = 0; (int)(uint)local_1c < (int)in_stack_00000014; local_1c = local_1c + 1) {
      for (; local_16 < sVar2; local_16 = local_16 + in_stack_00000014) {
        local_8 = (short *)((int)local_8 + (int)sVar1);
      }
      psVar4 = local_8;
      sVar3 = in_stack_00000010;
      for (local_1e = 0; (int)(uint)local_1e < (int)in_stack_00000010; local_1e = local_1e + 1) {
        for (; sVar3 < sVar1; sVar3 = sVar3 + in_stack_00000010) {
          psVar4 = (short *)((int)psVar4 + 1);
        }
        if ((char)*psVar4 != -1) {
          (**(code **)(*in_stack_00000004 + 4))();
        }
        sVar3 = sVar3 + -sVar1;
      }
      local_16 = local_16 + -sVar2;
    }
  }
  return;
}

