/* Ghidra address: 00428c7c; FUN_00428c7c */

void FUN_00428c7c(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = *(undefined4 *)(in_stack_00000004 + 8);
  waveOutPrepareHeader
            (*(HWAVEOUT *)(in_stack_00000004 + 0xc),(LPWAVEHDR)(in_stack_00000004 + 0x10),0x20);
  return;
}

