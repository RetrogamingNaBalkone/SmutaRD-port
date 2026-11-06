/* Ghidra address: 0042db50; FUN_0042db50 */

/* WARNING: Type propagation algorithm not settling */

int FUN_0042db50(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined1 *in_stack_0000000c;
  int in_stack_00000010;
  int local_14;
  
  iVar1 = *in_stack_00000008;
  *in_stack_00000008 = 0;
  local_14 = 0;
  puVar5 = in_stack_0000000c;
  iVar6 = in_stack_00000004;
  while( true ) {
    pcVar4 = (char *)(in_stack_00000004 + (iVar1 - iVar6));
    pcVar2 = FUN_00428fc4();
    if (pcVar2 != (char *)0x0) {
      pcVar4 = pcVar2 + -iVar6;
    }
    pcVar3 = in_stack_0000000c + (in_stack_00000010 - (int)puVar5);
    if (pcVar3 < pcVar4) break;
    FUN_00428fe4();
    puVar5 = puVar5 + (int)pcVar4;
    if ((pcVar2 == (char *)0x0) ||
       ((int)(in_stack_0000000c + (in_stack_00000010 - (int)puVar5)) < 2)) {
      *in_stack_00000008 = (int)(pcVar4 + *in_stack_00000008);
LAB_0042dc00:
      return local_14 + (int)pcVar4;
    }
    *puVar5 = 0xd;
    puVar5[1] = 10;
    puVar5 = puVar5 + 2;
    local_14 = local_14 + (int)(pcVar4 + 2);
    iVar6 = iVar6 + (int)(pcVar4 + 1);
    *in_stack_00000008 = (int)(pcVar4 + 1 + *in_stack_00000008);
  }
  FUN_00428fe4();
  *in_stack_00000008 = (int)(pcVar3 + *in_stack_00000008);
  pcVar4 = pcVar3;
  goto LAB_0042dc00;
}

