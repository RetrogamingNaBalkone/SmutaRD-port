/* Ghidra address: 00436604; FUN_00436604 */

void __cdecl FUN_00436604(int param_1,int param_2,UINT param_3)

{
  if (param_1 == 0) {
    while (DAT_0043c950 != 0) {
      DAT_0043c950 = DAT_0043c950 + -1;
      (**(code **)(&DAT_0053e534 + DAT_0043c950 * 4))();
    }
    FUN_00436ed4();
    (*(code *)PTR_FUN_0043c954)();
  }
  if (param_2 == 0) {
    if (param_1 == 0) {
      (*(code *)PTR_FUN_0043c958)();
      (*(code *)PTR_FUN_0043c95c)();
    }
    FUN_00436e10(param_3);
  }
  return;
}

