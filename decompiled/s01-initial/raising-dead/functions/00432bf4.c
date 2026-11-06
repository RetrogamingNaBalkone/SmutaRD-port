/* Ghidra address: 00432bf4; FUN_00432bf4 */

char * __cdecl FUN_00432bf4(char *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  while( true ) {
    uVar1 = FUN_00432c18((int)*pcVar2);
    *pcVar2 = (char)uVar1;
    if ((char)uVar1 == '\0') break;
    pcVar2 = pcVar2 + 1;
  }
  return param_1;
}

