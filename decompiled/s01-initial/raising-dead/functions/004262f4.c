/* Ghidra address: 004262f4; FUN_004262f4 */

int * __cdecl FUN_004262f4(int *param_1,undefined2 *param_2)

{
  int *piVar1;
  short sVar2;
  
  FUN_00435394(param_1,3,0x100,1,FUN_00422604);
  sVar2 = 0;
  piVar1 = param_1;
  do {
    *(undefined2 *)piVar1 = *param_2;
    *(undefined1 *)((int)piVar1 + 2) = *(undefined1 *)(param_2 + 1);
    sVar2 = sVar2 + 1;
    piVar1 = (int *)((int)piVar1 + 3);
    param_2 = (undefined2 *)((int)param_2 + 3);
  } while (sVar2 < 0x100);
  return param_1;
}

