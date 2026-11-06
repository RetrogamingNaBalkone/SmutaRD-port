/* Ghidra address: 00430d9c; FUN_00430d9c */

void __cdecl FUN_00430d9c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  while( true ) {
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      uVar2 = (uint)*(byte *)piVar1[8];
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0xc))();
    }
    if (((&DAT_0043bf2e)[uVar2 * 2] & 8) == 0) break;
    piVar1 = *(int **)(*param_1 + 4);
    if ((uint)piVar1[8] < (uint)piVar1[9]) {
      piVar1[8] = piVar1[8] + 1;
    }
    else {
      (**(code **)(*piVar1 + 0xc))();
    }
    param_1[2] = param_1[2] + 1;
  }
  if (uVar2 == 0xffffffff) {
    FUN_0043201c(*param_1,1);
  }
  return;
}

