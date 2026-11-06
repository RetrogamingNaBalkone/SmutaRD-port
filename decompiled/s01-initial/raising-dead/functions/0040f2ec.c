/* Ghidra address: 0040f2ec; FUN_0040f2ec */

/* WARNING: Removing unreachable block (ram,0x0040f315) */

char * __cdecl FUN_0040f2ec(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = thunk_FUN_0042a0a4(param_2,'=');
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 == ' ');
  return pcVar1;
}

