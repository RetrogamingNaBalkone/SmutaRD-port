/* Ghidra address: 0042ff28; FUN_0042ff28 */

char * FUN_0042ff28(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint in_stack_00000004;
  char *in_stack_00000008;
  uint in_stack_0000000c;
  char in_stack_00000010;
  char in_stack_00000014;
  char local_28 [36];
  
  pcVar3 = in_stack_00000008;
  if ((1 < (int)in_stack_0000000c) && ((int)in_stack_0000000c < 0x25)) {
    if (((int)in_stack_00000004 < 0) && (in_stack_00000010 != '\0')) {
      *in_stack_00000008 = '-';
      pcVar3 = in_stack_00000008 + 1;
      in_stack_00000004 = -in_stack_00000004;
    }
    pcVar2 = local_28;
    do {
      *pcVar2 = (char)(in_stack_00000004 % in_stack_0000000c);
      pcVar2 = pcVar2 + 1;
      in_stack_00000004 = in_stack_00000004 / in_stack_0000000c;
    } while (in_stack_00000004 != 0);
    while (pcVar2 != local_28) {
      pcVar2 = pcVar2 + -1;
      cVar1 = *pcVar2;
      if (cVar1 < '\n') {
        *pcVar3 = cVar1 + '0';
        pcVar3 = pcVar3 + 1;
      }
      else {
        *pcVar3 = cVar1 + in_stack_00000014 + -10;
        pcVar3 = pcVar3 + 1;
      }
    }
  }
  *pcVar3 = '\0';
  return in_stack_00000008;
}

