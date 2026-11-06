/* Ghidra address: 00420ce4; FUN_00420ce4 */

void FUN_00420ce4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  *(int *)(in_stack_00000008 + 8) = (int)*(short *)(in_stack_00000004 + 0x7e);
  *(int *)(in_stack_00000008 + 0xc) = (int)*(short *)(in_stack_00000004 + 0x82);
  iVar4 = 0;
  puVar1 = (undefined4 *)(in_stack_00000008 + 0x10);
  psVar3 = (short *)(in_stack_00000004 + 0xf0);
  piVar2 = (int *)(in_stack_00000004 + 200);
  do {
    if (*piVar2 == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = 1;
      puVar1[10] = (int)*psVar3;
      puVar1[0x14] = (int)psVar3[10];
    }
    iVar4 = iVar4 + 1;
    psVar3 = psVar3 + 1;
    puVar1 = puVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 10);
  *(int *)(in_stack_00000008 + 0x88) = (int)*(short *)(in_stack_00000004 + 0x118);
  return;
}

