/* Ghidra address: 00401074; __GetExceptDLLinfo */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __GetExceptDLLinfo(void)

{
  int in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  
                    /* 0x1074  1  __GetExceptDLLinfo */
  _DAT_00437914 = *(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0x30;
  _DAT_004378f8 = &DAT_004379e4;
  _DAT_004378fc = &__DebuggerHookData;
  *in_stack_00000004 = 0x82727349;
  in_stack_00000004[1] = &DAT_004378ec;
  return;
}

