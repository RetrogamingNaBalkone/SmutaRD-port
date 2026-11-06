/* Ghidra address: 00432540; FUN_00432540 */

void FUN_00432540(void)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  while (pcVar1 = (code *)FUN_0043232c(), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  while (pcVar1 = (code *)FUN_0043232c(), pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  piVar2 = (int *)FUN_00432328();
  if (piVar2 != (int *)0x0) {
    while (pcVar1 = (code *)FUN_0043232c(), pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    piVar3 = piVar2;
    for (iVar4 = 0; piVar3 = piVar3 + 1, iVar4 < *piVar2; iVar4 = iVar4 + 1) {
      (**(code **)(*piVar3 + 0x18))();
    }
  }
  return;
}

