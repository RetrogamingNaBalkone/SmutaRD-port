/* Ghidra address: 00421314; FUN_00421314 */

uint * FUN_00421314(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 local_2c;
  
  bVar6 = 0;
  FUN_0042b4b4(0x436428);
  puVar1 = FUN_00431988();
  if (puVar1 != (uint *)0x0) {
    FUN_00427be8();
    puVar1[5] = (uint)&PTR_FUN_00436a30;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    puVar1[5] = (uint)&PTR_FUN_00436900;
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -3;
  }
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(in_stack_00000004 + 0x18);
  *(undefined1 *)((int)puVar1 + 0x1a) = in_stack_00000008;
  puVar1[0x1a] = *(uint *)(in_stack_00000004 + 0x68);
  *(undefined2 *)((int)puVar1 + 0x1b) = *(undefined2 *)(in_stack_00000004 + 0x1b);
  puVar1[0x19] = *(uint *)(in_stack_00000004 + 100);
  *(undefined2 *)((int)puVar1 + 0x1d) = *(undefined2 *)(in_stack_00000004 + 0x1d);
  *(undefined2 *)((int)puVar1 + 0x1f) = *(undefined2 *)(in_stack_00000004 + 0x1f);
  *(undefined1 *)((int)puVar1 + 0x21) = *(undefined1 *)(in_stack_00000004 + 0x21);
  puVar2 = (uint *)(in_stack_00000004 + 0x30);
  puVar5 = puVar1 + 0xc;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  *(undefined2 *)((int)puVar1 + 0x7a) = *(undefined2 *)(in_stack_00000004 + 0x7a);
  *(undefined2 *)(puVar1 + 0x1f) = *(undefined2 *)(in_stack_00000004 + 0x7c);
  *(undefined2 *)((int)puVar1 + 0x7e) = *(undefined2 *)(in_stack_00000004 + 0x7e);
  *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(in_stack_00000004 + 0x78);
  *(undefined4 *)((int)puVar1 + 0x91) = *(undefined4 *)(in_stack_00000004 + 0x91);
  *(undefined4 *)((int)puVar1 + 0x8d) = *(undefined4 *)(in_stack_00000004 + 0x8d);
  *(undefined4 *)((int)puVar1 + 0x99) = *(undefined4 *)(in_stack_00000004 + 0x99);
  puVar2 = FUN_00431988();
  if (puVar2 != (uint *)0x0) {
    *puVar2 = (uint)&PTR_FUN_0043548c;
    FUN_0040a760();
    *DAT_0049aa2c = *DAT_0049aa2c + 1;
    *DAT_0049aa2c = *DAT_0049aa2c + -1;
  }
  puVar1[0x1b] = (uint)puVar2;
  *(undefined1 *)(puVar1 + 0x22) = 0x20;
  *(undefined2 *)(puVar1 + 0x1c) = 0xffff;
  FUN_0041e4b4();
  uVar3 = FUN_00426946();
  puVar1[0x19] = uVar3;
  *in_FS_OFFSET = local_2c;
  return puVar1;
}

