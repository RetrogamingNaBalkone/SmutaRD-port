/* Ghidra address: 00403d78; FUN_00403d78 */

undefined4 __cdecl FUN_00403d78(uint *param_1)

{
  char *pcVar1;
  
  pcVar1 = FUN_0042a144(param_1);
  if (pcVar1 != (char *)0xa) {
    return 1;
  }
  while( true ) {
    if ((char)*param_1 == '\0') {
      return 0;
    }
    if (((&DAT_0043bf2e)[(char)*param_1 * 2] & 4) == 0) break;
    param_1 = (uint *)((int)param_1 + 1);
  }
  return 1;
}

