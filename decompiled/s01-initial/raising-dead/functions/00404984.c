/* Ghidra address: 00404984; FUN_00404984 */

void __cdecl FUN_00404984(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  
  if ((-1 < *(int *)(param_1 + 0x95)) &&
     (*(int *)(param_1 + 0x95) = *(int *)(param_1 + 0x95) + -1, *(int *)(param_1 + 0x95) == 0)) {
    FUN_004274c0((int)DAT_0053d640,0,0,*(int *)((int)DAT_0053d640 + 0x32),
                 *(int *)((int)DAT_0053d640 + 0x36));
    piVar2 = DAT_0053d640;
    uVar1 = DAT_0043faa6;
    *(undefined2 *)(DAT_0053d640 + 8) = DAT_0043faa4;
    *(undefined2 *)((int)piVar2 + 0x22) = uVar1;
    *(undefined2 *)(piVar2 + 4) = DAT_0043faa6;
    (**(code **)(*piVar2 + 0x3c))();
    FUN_00407814();
  }
  return;
}

