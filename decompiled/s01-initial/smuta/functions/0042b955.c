/* Ghidra address: 0042b955; FUN_0042b955 */

void FUN_0042b955(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined2 in_FS;
  undefined4 *in_stack_00000004;
  
  piVar1 = (int *)segment(in_FS,0);
  puVar2 = (undefined4 *)*piVar1;
  if (in_stack_00000004 == puVar2) {
    puVar2 = (undefined4 *)segment(in_FS,0);
    *puVar2 = *in_stack_00000004;
  }
  else {
    for (; puVar2 != (undefined4 *)0xffffffff; puVar2 = (undefined4 *)*puVar2) {
      if ((undefined4 *)*puVar2 == in_stack_00000004) {
        *puVar2 = *in_stack_00000004;
        return;
      }
    }
  }
  return;
}

