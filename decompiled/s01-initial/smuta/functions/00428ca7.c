/* Ghidra address: 00428ca7; FUN_00428ca7 */

void FUN_00428ca7(void)

{
  int in_stack_00000004;
  
  waveOutUnprepareHeader
            (*(HWAVEOUT *)(in_stack_00000004 + 0xc),(LPWAVEHDR)(in_stack_00000004 + 0x10),0x20);
  return;
}

