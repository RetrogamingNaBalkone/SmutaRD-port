/* Ghidra address: 00430e58; FUN_00430e58 */

undefined4 FUN_00430e58(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *in_stack_00000004;
  uint in_stack_00000008;
  
  uVar4 = in_stack_00000008 & 0xfffff000;
  uVar1 = *in_stack_00000004;
  puVar3 = (uint *)((int)in_stack_00000004 + (uVar1 - 4));
  if (uVar4 < uVar1) {
    if ((*puVar3 & 2) == 0) {
      return 0xffffffff;
    }
    puVar3 = (uint *)((int)puVar3 - *(int *)((int)in_stack_00000004 + (uVar1 - 8)));
    if ((*puVar3 & 0xfffffffc) - 0xc < uVar1 - uVar4) {
      return 0xffffffff;
    }
    *puVar3 = *puVar3 - (uVar1 - uVar4);
    *(uint *)((int)puVar3 + (*puVar3 & 0xfffffffc)) = (*puVar3 & 0xfffffffc) + 4;
    *(undefined4 *)((int)puVar3 + (*puVar3 & 0xfffffffc) + 4) = 2;
    if ((*puVar3 & 0xfffffffc) < DAT_00438b60) {
      uVar1 = puVar3[1];
      *(uint *)(uVar1 + 8) = puVar3[2];
      *(uint *)(puVar3[2] + 4) = uVar1;
      puVar3[1] = *(uint *)(DAT_00438b74 + -8 + (*puVar3 & 0xfffffffc) * 2);
      puVar3[2] = ((*puVar3 & 0xfffffffc) * 2 + DAT_00438b74) - 0xc;
      *(uint **)(puVar3[1] + 8) = puVar3;
      *(uint **)(DAT_00438b74 + -8 + (*puVar3 & 0xfffffffc) * 2) = puVar3;
    }
  }
  else {
    uVar2 = *in_stack_00000004;
    *puVar3 = *puVar3 + (uVar4 - uVar2) + -4;
    *(undefined4 *)((int)in_stack_00000004 + (*puVar3 & 0xfffffffc) + uVar1) = 0;
    FUN_00431320();
    *in_stack_00000004 = *in_stack_00000004 + (uVar4 - uVar2);
  }
  return 0;
}

