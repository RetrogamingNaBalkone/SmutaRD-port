/* Ghidra address: 00428d71; FUN_00428d71 */

void FUN_00428d71(void)

{
  int in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = *(undefined4 *)(in_stack_00000004 + 8);
  waveOutWrite(*(HWAVEOUT *)(in_stack_00000004 + 0xc),(LPWAVEHDR)(in_stack_00000004 + 0x10),0x20);
  return;
}

