/* Ghidra address: 00427a4c; FUN_00427a4c */

/* WARNING: Removing unreachable block (ram,0x00427a75) */

char * FUN_00427a4c(void)

{
  char *pcVar1;
  
  pcVar1 = FUN_004290c0();
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 == ' ');
  return pcVar1;
}

