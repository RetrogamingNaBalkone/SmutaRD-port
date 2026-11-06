/* Ghidra address: 0041fe9c; FUN_0041fe9c */

void __cdecl FUN_0041fe9c(int param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439f2c);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0041fe9c(*(int *)(param_1 + 4));
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_0041fe9c(*(int *)(param_1 + 8));
    }
    piVar3 = *(int **)(param_1 + 0xc);
    if (((piVar3 != (int *)0x0) && (sVar2 = (**(code **)(*piVar3 + 0x10))(), sVar2 != 0)) &&
       (puVar1 = *(undefined4 **)(param_1 + 0xc), puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(puVar1,(undefined4 *)*puVar1,piVar3,puVar1,3);
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

