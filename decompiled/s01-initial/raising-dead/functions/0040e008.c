/* Ghidra address: 0040e008; FUN_0040e008 */

void __cdecl FUN_0040e008(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439908);
  piVar1 = *(int **)(param_1 + 0xe);
  if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  if (*(int **)(param_1 + 10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 10) + 8))();
  }
  *in_FS_OFFSET = local_28;
  return;
}

