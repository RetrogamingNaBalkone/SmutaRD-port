/* Ghidra address: 00430d58; FUN_00430d58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00430d58(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  iVar4 = 0;
  if (in_stack_00000008 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    in_stack_00000004[2] = 1;
    in_stack_00000004[3] = (uint)in_stack_00000004;
    *in_stack_00000004 = in_stack_00000008;
    in_stack_00000004[1] = in_stack_0000000c;
    in_stack_00000004[0x23] = (uint)DAT_00438b6c;
    in_stack_00000004[0x24] = 0;
    if (DAT_00438b6c == (uint *)0x0) {
      _DAT_00438b70 = in_stack_00000004;
    }
    else {
      DAT_00438b6c[0x24] = (uint)in_stack_00000004;
    }
    DAT_00438b6c = in_stack_00000004;
    in_stack_00000004[0x25] = 0;
    puVar3 = in_stack_00000004 + 0x26;
    if (DAT_00438b74 == (uint *)0x0) {
      uVar5 = DAT_00438b60 * 2 + 3 & 0xfffffffc;
      DAT_00438b74 = in_stack_00000004 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_00430d18();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (in_stack_00000008 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_00438b84;
    if (uVar5 < DAT_00438b60) {
      puVar2 = (undefined *)((int)DAT_00438b74 + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}

