/* Ghidra address: 00401e6c; FUN_00401e6c */

void FUN_00401e6c(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  int in_stack_00000004;
  short sStack00000008;
  short sStack0000000c;
  short *in_stack_00000010;
  short in_stack_00000014;
  short in_stack_00000018;
  int *local_34;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  short local_14;
  char *local_8;
  
  local_8 = *(char **)(in_stack_00000010 + 7);
  sVar1 = *in_stack_00000010;
  sVar2 = in_stack_00000010[1];
  if (in_stack_00000014 < 1) {
    in_stack_00000014 = 1;
  }
  if (in_stack_00000018 < 1) {
    in_stack_00000018 = 1;
  }
  if (*(int *)(in_stack_00000004 + 0x32) - _sStack00000008 < (int)in_stack_00000014) {
    in_stack_00000014 = *(short *)(in_stack_00000004 + 0x32) - sStack00000008;
  }
  if (*(int *)(in_stack_00000004 + 0x36) - _sStack0000000c < (int)in_stack_00000018) {
    in_stack_00000018 = *(short *)(in_stack_00000004 + 0x36) - sStack0000000c;
  }
  sVar3 = in_stack_00000010[2];
  local_14 = in_stack_00000018;
  if (sVar1 < in_stack_00000014) {
    for (local_1a = 0; (int)(uint)local_1a < (int)sVar2; local_1a = local_1a + 1) {
      piVar4 = &DAT_004390f0 + _sStack0000000c;
      for (; sVar2 <= local_14; local_14 = local_14 + -sVar2) {
        pcVar7 = local_8;
        sVar5 = in_stack_00000014;
        sVar6 = sStack00000008;
        for (local_1c = 0; (int)(uint)local_1c < (int)sVar1; local_1c = local_1c + 1) {
          for (; sVar1 <= sVar5; sVar5 = sVar5 + -sVar1) {
            if ((sVar3 != 8) || (*pcVar7 != '\0')) {
              *(char *)(*piVar4 + (int)sVar6) = *pcVar7;
            }
            sVar6 = sVar6 + 1;
          }
          sVar5 = sVar5 + in_stack_00000014;
          pcVar7 = pcVar7 + 1;
        }
        _sStack0000000c = _sStack0000000c + 1;
        piVar4 = piVar4 + 1;
      }
      local_14 = local_14 + in_stack_00000018;
      local_8 = local_8 + sVar1;
    }
  }
  else {
    local_34 = &DAT_004390f0 + _sStack0000000c;
    for (local_1e = 0; (int)(uint)local_1e < (int)in_stack_00000018; local_1e = local_1e + 1) {
      for (; local_14 < sVar2; local_14 = local_14 + in_stack_00000018) {
        local_8 = local_8 + sVar1;
      }
      pcVar7 = local_8;
      sVar5 = in_stack_00000014;
      sVar6 = sStack00000008;
      for (local_20 = 0; (int)(uint)local_20 < (int)in_stack_00000014; local_20 = local_20 + 1) {
        for (; sVar5 < sVar1; sVar5 = sVar5 + in_stack_00000014) {
          pcVar7 = pcVar7 + 1;
        }
        if ((sVar3 != 8) || (*pcVar7 != '\0')) {
          *(char *)(*local_34 + (int)sVar6) = *pcVar7;
        }
        sVar6 = sVar6 + 1;
        sVar5 = sVar5 + -sVar1;
      }
      local_14 = local_14 + -sVar2;
      local_34 = local_34 + 1;
    }
  }
  return;
}

