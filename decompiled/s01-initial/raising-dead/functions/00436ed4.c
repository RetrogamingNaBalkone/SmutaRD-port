/* Ghidra address: 00436ed4; FUN_00436ed4 */

void __stdcall FUN_00436ed4(void)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  while (pcVar1 = (code *)FUN_00436e28((int *)&DAT_0053e604,1), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  while (pcVar1 = (code *)FUN_00436e28((int *)&DAT_0053e5d0,1), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  piVar2 = (int *)FUN_00436e24();
  if (piVar2 != (int *)0x0) {
    while (pcVar1 = (code *)FUN_00436e28(piVar2,1), pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    piVar3 = piVar2;
    for (iVar4 = 0; piVar3 = piVar3 + 1, iVar4 < *piVar2; iVar4 = iVar4 + 1) {
      (**(code **)(*piVar3 + 0x18))();
    }
  }
  return;
}

