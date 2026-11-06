/* Ghidra address: 0041008c; FUN_0041008c */

void __cdecl FUN_0041008c(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = FUN_0040f3f8(*(short **)(param_1 + 0x69),(undefined2 *)(param_1 + 0x27),
                         (undefined2 *)(param_1 + 0x29),(undefined2 *)(param_1 + 0x73),
                         (short *)(param_1 + 0x71),0);
    *(int *)(param_1 + 0x65) = iVar1;
  } while (iVar1 == 0);
  FUN_0040e3b8(param_1,(int)*(short *)(param_1 + 0x73));
  return;
}

