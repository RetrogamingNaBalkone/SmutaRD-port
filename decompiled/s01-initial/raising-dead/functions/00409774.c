/* Ghidra address: 00409774; FUN_00409774 */

void __cdecl FUN_00409774(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_00438f24 != 0) {
    FUN_004350ec(DAT_00438f24);
  }
  DAT_00438f1c = param_2 >> 1;
  DAT_00438f18 = param_1;
  DAT_00438f20 = param_1 * 2;
  iVar1 = FUN_00435154(param_1 * DAT_00438f1c * 2);
  piVar2 = &DAT_004cde78;
  DAT_00438f24 = iVar1;
  for (iVar3 = 0; iVar3 < DAT_00438f1c; iVar3 = iVar3 + 1) {
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + DAT_00438f18 * 2;
  }
  return;
}

