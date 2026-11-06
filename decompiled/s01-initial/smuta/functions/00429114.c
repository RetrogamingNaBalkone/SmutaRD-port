/* Ghidra address: 00429114; FUN_00429114 */

int FUN_00429114(void)

{
  char cVar1;
  uint uVar2;
  char *in_stack_00000004;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
  } while (cVar1 != '\0');
  return ~uVar2 - 1;
}

