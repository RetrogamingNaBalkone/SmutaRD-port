/* Ghidra address: 0040d6d0; FUN_0040d6d0 */

int * FUN_0040d6d0(void)

{
  LPVOID pvVar1;
  int iVar2;
  int *in_stack_00000004;
  
  in_stack_00000004[1] = 0;
  pvVar1 = FUN_00410304();
  *in_stack_00000004 = (int)pvVar1;
  iVar2 = 0;
  do {
    *(undefined4 *)(*in_stack_00000004 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 16000);
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  return in_stack_00000004;
}

