/* Ghidra address: 00409c0c; FUN_00409c0c */

LPVOID FUN_00409c0c(void)

{
  LPVOID pvVar1;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  
  pvVar1 = FUN_00410304();
  (**(code **)(*in_stack_00000004 + 0xc))
            (in_stack_00000004,*in_stack_00000004,in_stack_00000008,in_stack_00000004,pvVar1);
  *(int *)((int)pvVar1 + 0xe) = (int)pvVar1 + 0x12;
  *(undefined2 *)((int)pvVar1 + 8) = 0;
  *(undefined2 *)((int)pvVar1 + 6) = 1;
  return pvVar1;
}

