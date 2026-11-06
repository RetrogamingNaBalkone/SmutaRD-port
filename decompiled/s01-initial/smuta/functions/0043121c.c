/* Ghidra address: 0043121c; FUN_0043121c */

undefined4 FUN_0043121c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint *in_stack_00000004;
  
  uVar4 = DAT_00438b68;
  if (DAT_00438b8c < DAT_00438b88) {
    uVar4 = DAT_00438b64;
  }
  if (uVar4 <= *in_stack_00000004 - 0xc) {
    for (piVar3 = DAT_00438b6c; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x23]) {
      if ((int)in_stack_00000004 + (*in_stack_00000004 & 0xfffffffc) + 4 ==
          (int)piVar3 + *piVar3 + -4) {
        iVar5 = *piVar3 - (*in_stack_00000004 - 0xc & ~(uVar4 - 1));
        FUN_00430e58();
        while ((uint)(iVar5 + (int)piVar3) <= (uint)piVar3[piVar3[2] + 2]) {
          piVar3[2] = piVar3[2] + -1;
          iVar1 = piVar3[piVar3[2] + 3];
          iVar2 = *piVar3;
          FUN_00431cf0();
          DAT_00438b8c = DAT_00438b8c - (iVar2 - (iVar1 - (int)piVar3));
          FUN_00431d14();
          iVar1 = piVar3[piVar3[2] + 3];
          piVar3[1] = iVar1 - (int)piVar3;
          *piVar3 = iVar1 - (int)piVar3;
        }
        FUN_00431cf0();
        DAT_00438b8c = DAT_00438b8c - (*piVar3 - iVar5);
        *piVar3 = iVar5;
        return 1;
      }
    }
  }
  return 0;
}

