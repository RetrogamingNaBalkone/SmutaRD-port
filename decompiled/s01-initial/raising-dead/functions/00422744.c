/* Ghidra address: 00422744; FUN_00422744 */

void __cdecl FUN_00422744(uint *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_004235d4(0x2100);
  *param_1 = (uint)pvVar1;
  param_1[1] = (*param_1 & 0xffffff00) + 0x100;
  return;
}

