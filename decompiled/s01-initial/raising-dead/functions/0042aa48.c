/* Ghidra address: 0042aa48; FUN_0042aa48 */

undefined4 __cdecl FUN_0042aa48(int param_1,int param_2)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(int *)((*(int *)(param_1 + param_2) - *(int *)(*(int *)(param_1 + param_2) + -4)) +
                   -0xc) + 0x20);
}

