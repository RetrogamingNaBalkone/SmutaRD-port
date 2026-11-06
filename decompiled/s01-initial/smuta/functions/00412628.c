/* Ghidra address: 00412628; FUN_00412628 */

void FUN_00412628(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000020;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *in_stack_00000008;
  iVar2 = *in_stack_0000000c;
  if (0xff < in_stack_00000020) {
    in_stack_00000020 = 0xff;
  }
  local_8 = in_stack_00000020;
  local_c = in_stack_00000020;
  iVar4 = in_stack_00000010 - iVar1;
  local_10 = in_stack_00000014 - iVar2;
  if (*in_stack_00000008 < in_stack_00000010) {
    local_14 = (*in_stack_00000008 / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
    if ((in_stack_00000010 < local_14) || (local_14 < *in_stack_00000008)) {
      local_14 = *in_stack_00000008;
    }
  }
  else {
    local_14 = (in_stack_00000010 / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
    if ((*in_stack_00000008 < local_14) || (local_14 < in_stack_00000010)) {
      local_14 = in_stack_00000010;
    }
  }
  if (*in_stack_0000000c < in_stack_00000014) {
    local_18 = (*in_stack_0000000c / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
  }
  else {
    local_18 = (in_stack_00000014 / (int)*(short *)(in_stack_00000004 + 0x74e)) *
               (int)*(short *)(in_stack_00000004 + 0x74e) +
               ((int)*(short *)(in_stack_00000004 + 0x74e) >> 1);
  }
  if (in_stack_00000010 < iVar1) {
    local_8 = -in_stack_00000020;
    iVar4 = -iVar4;
  }
  if (in_stack_00000014 < iVar2) {
    local_c = -in_stack_00000020;
    local_10 = -local_10;
  }
  iVar5 = in_stack_00000010;
  iVar6 = in_stack_00000014;
  if (local_10 < iVar4) {
    uVar3 = FUN_0041181c();
    if ((short)uVar3 == 0) {
      uVar3 = FUN_0041181c();
      iVar6 = local_18;
      if ((short)uVar3 == 0) {
        if (local_8 < 0) {
          iVar5 = (iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar5 = (((iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
        uVar3 = FUN_0041181c();
        iVar6 = in_stack_00000014;
        if ((short)uVar3 == 0) {
          if (local_c < 0) {
            iVar6 = (iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020
            ;
          }
          else {
            iVar6 = (((iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                     (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
          }
        }
      }
    }
    else {
      uVar3 = FUN_0041181c();
      if ((short)uVar3 == 0) {
        if (local_c < 0) {
          iVar6 = (iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar6 = (((iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
      }
    }
  }
  else {
    uVar3 = FUN_0041181c();
    if ((short)uVar3 == 0) {
      uVar3 = FUN_0041181c();
      iVar5 = local_14;
      if ((short)uVar3 == 0) {
        if (local_c < 0) {
          iVar6 = (iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar6 = (((iVar2 - iVar2 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
        uVar3 = FUN_0041181c();
        iVar5 = in_stack_00000010;
        if ((short)uVar3 == 0) {
          if (local_8 < 0) {
            iVar5 = (iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020
            ;
          }
          else {
            iVar5 = (((iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                     (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
          }
        }
      }
    }
    else {
      uVar3 = FUN_0041181c();
      if ((short)uVar3 == 0) {
        if (local_8 < 0) {
          iVar5 = (iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) + in_stack_00000020;
        }
        else {
          iVar5 = (((iVar1 - iVar1 % (int)*(short *)(in_stack_00000004 + 0x74e)) +
                   (int)*(short *)(in_stack_00000004 + 0x74e)) - in_stack_00000020) + -1;
        }
      }
    }
  }
  *in_stack_00000008 = iVar5;
  *in_stack_0000000c = iVar6;
  return;
}

