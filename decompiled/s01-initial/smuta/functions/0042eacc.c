/* Ghidra address: 0042eacc; FUN_0042eacc */

int * FUN_0042eacc(void)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  bVar2 = FUN_0042e6f4();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar1 = *(int **)(*in_stack_00000004 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      uVar3 = (uint)*(byte *)piVar1[8];
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0xc))();
    }
    bVar2 = uVar3 == 0x2d;
    if ((uVar3 == 0x2b) || (bVar2)) {
      iVar4 = *(int *)(*in_stack_00000004 + 4);
      if ((*(int *)(iVar4 + 0x20) == 0) ||
         (*(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1,
         *(uint *)(iVar4 + 0x24) <= *(uint *)(iVar4 + 0x20))) {
        uVar3 = FUN_0042f500();
      }
      else {
        uVar3 = (uint)**(byte **)(iVar4 + 0x20);
      }
    }
    if ((*(byte *)(*in_stack_00000004 + 0x18) & 0x40) == 0) {
      if ((*(byte *)(*in_stack_00000004 + 0x18) & 0x20) == 0) {
        if (((*(byte *)(*in_stack_00000004 + 0x18) & 0x10) == 0) && (uVar3 == 0x30)) {
          iVar4 = *(int *)(*in_stack_00000004 + 4);
          if ((*(int *)(iVar4 + 0x20) == 0) ||
             (*(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1,
             *(uint *)(iVar4 + 0x24) <= *(uint *)(iVar4 + 0x20))) {
            uVar3 = FUN_0042f500();
          }
          else {
            uVar3 = (uint)**(byte **)(iVar4 + 0x20);
          }
          if ((uVar3 == 0x78) || (uVar3 == 0x58)) {
            iVar4 = *(int *)(*in_stack_00000004 + 4);
            if ((*(int *)(iVar4 + 0x20) == 0) ||
               (*(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1,
               *(uint *)(iVar4 + 0x24) <= *(uint *)(iVar4 + 0x20))) {
              FUN_0042f500();
            }
            iVar4 = FUN_0042ea30();
          }
          else if (((int)uVar3 < 0x30) || (0x37 < (int)uVar3)) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_0042e9ac();
          }
        }
        else {
          iVar4 = FUN_0042e924();
        }
      }
      else {
        iVar4 = FUN_0042e9ac();
      }
    }
    else {
      iVar4 = FUN_0042ea30();
    }
    if (bVar2) {
      iVar4 = -iVar4;
    }
    *in_stack_00000008 = iVar4;
  }
  return in_stack_00000004;
}

