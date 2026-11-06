/* Ghidra address: 00431c9c; FUN_00431c9c */

undefined4 FUN_00431c9c(void)

{
  LPVOID pvVar1;
  LPVOID in_stack_00000004;
  int in_stack_00000008;
  
  while( true ) {
    if (in_stack_00000008 == 0) {
      return 1;
    }
    pvVar1 = VirtualAlloc(in_stack_00000004,0x1000,0x1000,4);
    if (pvVar1 == (LPVOID)0x0) break;
    in_stack_00000004 = (LPVOID)((int)in_stack_00000004 + 0x1000);
    in_stack_00000008 = in_stack_00000008 + -0x1000;
  }
  FUN_00431cf0();
  return 0;
}

