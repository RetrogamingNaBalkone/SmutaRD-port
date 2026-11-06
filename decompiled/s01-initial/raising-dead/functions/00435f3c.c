/* Ghidra address: 00435f3c; FUN_00435f3c */

void __stdcall FUN_00435f3c(void)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar1 = DAT_0043c864;
  if (DAT_0043c888 != 0) {
    while (piVar5 = piVar1, piVar5 != (int *)0x0) {
      piVar1 = (int *)piVar5[0x23];
      piVar5[2] = piVar5[2] + -1;
      iVar7 = piVar5[2];
      piVar6 = piVar5 + iVar7 + 3;
      for (; -1 < iVar7; iVar7 = iVar7 + -1) {
        pvVar2 = (LPVOID)*piVar6;
        iVar3 = *piVar5;
        iVar4 = *piVar6;
        piVar5[1] = iVar4 - (int)piVar5;
        *piVar5 = iVar4 - (int)piVar5;
        FUN_00436234(pvVar2,iVar3 - ((int)pvVar2 - (int)piVar5));
        FUN_00436258(pvVar2);
        piVar6 = piVar6 + -1;
      }
    }
  }
  return;
}

