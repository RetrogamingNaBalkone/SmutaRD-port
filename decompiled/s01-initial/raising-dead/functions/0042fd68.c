/* Ghidra address: 0042fd68; FUN_0042fd68 */

int __cdecl FUN_0042fd68(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = &DAT_0043b4c4; (iVar1 < DAT_0043b4c0 && (*piVar2 != 0)); piVar2 = piVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == DAT_0043b4c0) {
    return -1;
  }
  (&DAT_0043b4c4)[iVar1] = param_2;
  *(undefined4 *)(&DAT_0053e22c + iVar1 * 4) = param_1;
  return iVar1;
}

