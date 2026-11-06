/* Ghidra address: 00430f44; FUN_00430f44 */

undefined4 FUN_00430f44(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000004;
  int local_c;
  int local_8;
  
  uVar5 = in_stack_00000004 + 0xfffU & 0xfffff000;
  if (DAT_00438b88 == 0) {
    DAT_00438b88 = FUN_00431704();
  }
  piVar1 = DAT_00438b6c;
  if (DAT_00438b74 == 0) {
    uVar5 = uVar5 + (DAT_00438b60 * 2 + 0x109fU & 0xfffff000);
  }
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x23]) {
    if (uVar5 < (uint)(piVar1[1] - *piVar1)) {
      iVar3 = DAT_00438b58;
      if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
        iVar3 = DAT_00438b54;
      }
      iVar2 = DAT_00438b58;
      if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
        iVar2 = DAT_00438b54;
      }
      if ((uint)piVar1[1] < (iVar3 + -1 + uVar5 & ~(iVar2 - 1U)) + *piVar1) {
        iVar3 = piVar1[1];
      }
      else {
        iVar3 = DAT_00438b58;
        if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
          iVar3 = DAT_00438b54;
        }
        iVar2 = DAT_00438b58;
        if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
          iVar2 = DAT_00438b54;
        }
        iVar3 = (iVar3 + -1 + uVar5 & ~(iVar2 - 1U)) + *piVar1;
      }
      iVar2 = FUN_00431c9c();
      if (iVar2 != 0) {
        DAT_00438b8c = DAT_00438b8c + (iVar3 - *piVar1);
        FUN_00430e58();
        return 0;
      }
      iVar3 = FUN_00431c9c();
      if (iVar3 != 0) {
        DAT_00438b8c = DAT_00438b8c + 0x1000;
        FUN_00430e58();
        return 0;
      }
      return 0xffffffff;
    }
  }
  iVar3 = FUN_00431c30();
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = DAT_00438b58;
    if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
      iVar3 = DAT_00438b54;
    }
    iVar2 = DAT_00438b58;
    if ((uint)(DAT_00438b8c + DAT_00438b54) < DAT_00438b88) {
      iVar2 = DAT_00438b54;
    }
    uVar5 = uVar5 + iVar3 + 0xfff & ~(iVar2 - 1U);
    for (piVar1 = DAT_00438b6c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x23]) {
      if ((piVar1[1] + (int)piVar1 == local_8) && (piVar1[2] < 0x20)) {
        iVar3 = piVar1[1] - *piVar1;
        if (iVar3 != 0) {
          iVar2 = FUN_00431c9c();
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          DAT_00438b8c = DAT_00438b8c + iVar3;
          FUN_00430e58();
        }
        iVar2 = FUN_00431c9c();
        if (iVar2 != 0) {
          DAT_00438b8c = DAT_00438b8c + (uVar5 - iVar3);
          iVar3 = piVar1[2];
          piVar1[2] = piVar1[2] + 1;
          piVar1[iVar3 + 3] = local_8;
          piVar1[1] = piVar1[1] + local_c;
          FUN_00430e58();
          return 0;
        }
        return 0xffffffff;
      }
    }
    iVar3 = FUN_00431c9c();
    if (iVar3 == 0) {
      FUN_00431d14();
      uVar4 = 0xffffffff;
    }
    else {
      DAT_00438b8c = DAT_00438b8c + uVar5;
      FUN_00430d58();
      uVar4 = 0;
    }
  }
  return uVar4;
}

