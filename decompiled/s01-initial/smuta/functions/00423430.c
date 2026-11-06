/* Ghidra address: 00423430; FUN_00423430 */

undefined4 FUN_00423430(void)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  int in_stack_00000004;
  int local_54 [2];
  int local_4c;
  int local_3c;
  undefined2 local_1e;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  short local_a;
  undefined4 local_8;
  
  bVar6 = 0;
  local_8 = 1;
  sVar1 = *(short *)(in_stack_00000004 + 0x110);
  *(short *)(in_stack_00000004 + 0x110) = *(short *)(in_stack_00000004 + 0x110) + 1;
  if (*(short *)(in_stack_00000004 + 0x112) <= sVar1) {
    *(undefined2 *)(in_stack_00000004 + 0x110) = 0;
    local_8 = 1;
    FUN_0041e39c();
    piVar4 = (int *)(in_stack_00000004 + 0x30);
    piVar5 = local_54;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    local_10 = *(int *)(in_stack_00000004 + 0x38);
    local_14 = *(int *)(in_stack_00000004 + 0x30);
    sVar1 = (short)(local_10 / (int)DAT_0048aab4[0x3a7]);
    local_a = (short)(local_14 / (int)DAT_0048aab4[0x3a7]);
    if (local_a < 0) {
      local_a = 0;
    }
    if (*DAT_0048aab4 + -1 < (int)local_a) {
      local_a = *DAT_0048aab4 + -1;
    }
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    if (DAT_0048aab4[2] + -1 < (int)sVar1) {
      sVar1 = DAT_0048aab4[2] + -1;
    }
    local_a = local_a + sVar1 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
    local_3c = -((int)DAT_0048aab4[0x3a7] >> 1);
    iVar2 = 0;
    do {
      FUN_00412ac8();
      local_18 = local_4c;
      local_1c = local_54[0];
      sVar1 = (short)(local_4c / (int)DAT_0048aab4[0x3a7]);
      sVar3 = (short)(local_54[0] / (int)DAT_0048aab4[0x3a7]);
      if (sVar3 < 0) {
        sVar3 = 0;
      }
      if (*DAT_0048aab4 + -1 < (int)sVar3) {
        sVar3 = *DAT_0048aab4 + -1;
      }
      if (sVar1 < 0) {
        sVar1 = 0;
      }
      if (DAT_0048aab4[2] + -1 < (int)sVar1) {
        sVar1 = DAT_0048aab4[2] + -1;
      }
      sVar3 = sVar3 + sVar1 * (short)*(undefined4 *)(DAT_0048aab4 + 0x25b6);
    } while ((sVar3 == local_a) && (iVar2 = iVar2 + 1, iVar2 < 10));
    if (sVar3 != local_a) {
      local_8 = 0;
      FUN_00409020();
      FUN_0041da64();
      *(undefined2 *)(in_stack_00000004 + 0x3c) = local_1e;
    }
    FUN_0041e39c();
  }
  *(uint *)(in_stack_00000004 + 0x22) = *(uint *)(in_stack_00000004 + 0x22) | 0x10;
  FUN_0041ebec();
  return local_8;
}

