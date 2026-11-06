/* Ghidra address: 0041fc2c; FUN_0041fc2c */

undefined2 FUN_0041fc2c(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  int local_80;
  int local_7c;
  int local_78;
  short local_74;
  short local_6e;
  int local_4c;
  int local_44;
  short local_16;
  int local_14;
  int local_10;
  short local_c;
  undefined2 local_a;
  uint *local_8;
  
  bVar7 = 0;
  iVar2 = FUN_0041133c();
  if (-1 < (short)iVar2) {
    local_8 = FUN_00421314();
    FUN_00411418();
    piVar5 = (int *)(in_stack_00000004 + 0x30);
    piVar6 = &local_80;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    local_7c = local_7c - *(short *)(in_stack_00000004 + 0xbe);
    iVar2 = FUN_0041f8d0();
    if (iVar2 != 0) {
      local_a = 0;
      local_c = 0;
      local_10 = local_4c - local_80;
      if (local_10 < 0) {
        local_10 = -local_10;
      }
      local_44 = local_44 - local_78;
      if (local_44 < 0) {
        local_44 = -local_44;
      }
      if (local_10 <= local_44) {
        local_10 = local_44;
      }
      iVar3 = FUN_00411480();
      local_14 = (int)*(short *)(iVar3 + 0x1f);
      if (in_stack_0000000c == 1) {
        iVar3 = -1;
      }
      else {
        iVar3 = ((*(int *)(&DAT_00445fb0 + local_6e * 4) * local_10) /
                 *(int *)(&DAT_00446554 + local_6e * 4) - local_7c) - local_14;
      }
      sVar1 = (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))();
      if ((sVar1 <= iVar3) || (iVar3 < 1)) {
        (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))();
        FUN_00409020();
        FUN_0041da94();
        FUN_0041da64();
        if (0x10e < local_16) {
          FUN_0041da94();
        }
        if (0xb4 < local_16) {
          FUN_0041da94();
        }
        if (0x5a < local_16) {
          FUN_0041da94();
        }
        if ((int)local_16 < *(int *)(in_stack_00000004 + 0xb4)) {
          local_6e = local_c;
        }
      }
    }
    local_6e = local_6e + *(short *)(&DAT_0043635c + DAT_00436378 * 4);
    local_74 = local_74 + *(short *)(&DAT_00436368 + DAT_0043637c * 4);
    DAT_00436378 = (DAT_00436378 + 1) % 3;
    DAT_0043637c = DAT_0043637c + 1 & 3;
    uVar4 = FUN_0042158c();
    if ((short)uVar4 != 0) {
      return (short)local_8[0x1f];
    }
  }
  return 0;
}

