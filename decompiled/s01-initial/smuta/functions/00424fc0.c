/* Ghidra address: 00424fc0; FUN_00424fc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424fc0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_34;
  
  bVar7 = 0;
  FUN_0042b4b4(0x436d00);
  FUN_00424bc8();
  DAT_00436b90 = 0;
  DAT_00436bd8 = 0;
  DAT_00436b9c = 0;
  DAT_00436b9a = 0;
  DAT_0043649e = 0;
  DAT_0043649c = 0;
  DAT_00435498 = 0;
  DAT_0049a334 = 0;
  DAT_0049a328 = 0;
  DAT_0049a324 = 0;
  DAT_0049a320 = 0;
  DAT_0049a31c = 0;
  FUN_004281c6();
  DAT_00436c30 = in_stack_00000008;
  _DAT_00436b98 = 8;
  DAT_00436c18 = 0;
  DAT_00436c20 = (uint *)0x0;
  _DAT_00436c24 = 1;
  _DAT_00436c26 = 0;
  _DAT_00436c28 = 0;
  _DAT_00436c2a = 1;
  DAT_00436c2c = (uint *)0x0;
  DAT_00436c34 = 1;
  _DAT_00436c38 = 0;
  DAT_00436c3c = 0;
  DAT_00436c14 = 4;
  uVar2 = FUN_0042fc2c();
  DAT_004356e4 = (undefined2)uVar2;
  DAT_0049a188 = in_stack_00000004;
  _DAT_0049a18c = s_BsintRO1_0043719a;
  _DAT_0049a190 = s_EsintRO1_004371a3;
  DAT_0049a338 = 1;
  puVar3 = FUN_00431988();
  if (puVar3 != (uint *)0x0) {
    FUN_0040809c();
    *DAT_0049aa2c = *DAT_0049aa2c + -2;
  }
  _DAT_0049a340 = (int)*(short *)((int)puVar3 + 0x5f);
  DAT_0043518c = puVar3;
  puVar3 = FUN_00431988();
  if (puVar3 != (uint *)0x0) {
    FUN_00411430();
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  DAT_00436c20 = puVar3;
  FUN_00428fe4();
  iVar4 = DAT_00435924;
  uVar2 = extraout_EDX;
  if (DAT_00435924 == 2) {
    iVar4 = FUN_00410b64();
    uVar2 = extraout_EDX_00;
  }
  DAT_0049a388 = *(int *)((int)DAT_00436c20 + 0x442);
  uVar2 = FUN_00420308(iVar4,uVar2,DAT_00436c20,DAT_0049a388);
  DAT_0049a344 = (int)(short)uVar2;
  puVar5 = (undefined4 *)(DAT_0049a388 + 0x30);
  puVar6 = &DAT_0049a354;
  for (iVar4 = 0xd; iVar1 = DAT_0044f640, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  _DAT_00436bcc = DAT_0044f640;
  uVar2 = FUN_0042fc2c();
  DAT_00436ba2._2_2_ = (undefined2)uVar2;
  DAT_00436ba2._0_2_ = *(undefined2 *)(iVar1 + 0x32);
  DAT_0049a180 = 0;
  if (DAT_00436c30 == 1) {
    puVar3 = FUN_00431988();
    if (puVar3 != (uint *)0x0) {
      FUN_00424ba0();
      FUN_0040d708();
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
  }
  else {
    puVar3 = DAT_00436c2c;
    if ((DAT_00436c30 == 2) && (puVar3 = FUN_00431988(), puVar3 != (uint *)0x0)) {
      FUN_0040d6d0();
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
  }
  DAT_00436c2c = puVar3;
  FUN_00409a20();
  DAT_0049a348 = FUN_00409a78();
  DAT_0049a34c = 0;
  DAT_00436c14 = 0;
  FUN_004281c6();
  DAT_00436ba2._2_2_ = *(undefined2 *)(DAT_0044f640 + 0x36);
  _DAT_0049a340 = 1;
  _DAT_0049a1a0 = FUN_0041d904();
  *(ushort *)((int)_DAT_0049a1a0 + 4) = *(ushort *)((int)_DAT_0049a1a0 + 4) | 1;
  FUN_00409a8c();
  FUN_00409a38();
  *in_FS_OFFSET = local_34;
  return;
}

