/* Ghidra address: 00422784; FUN_00422784 */

uint * __cdecl FUN_00422784(uint *param_1)

{
  short sVar1;
  
  DAT_00501674 = param_1;
  FUN_00422744(param_1);
  sVar1 = 0;
  do {
    *(char *)(param_1[1] + (int)sVar1) = (char)sVar1;
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x100);
  sVar1 = 1;
  do {
    FUN_00429f54((undefined4 *)param_1[1] + sVar1 * 0x40,(undefined4 *)param_1[1],0x100);
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x20);
  return param_1;
}

