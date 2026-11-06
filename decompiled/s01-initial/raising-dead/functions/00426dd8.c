/* Ghidra address: 00426dd8; FUN_00426dd8 */

int * __cdecl FUN_00426dd8(int *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  param_1[1] = 0;
  pvVar1 = FUN_004235d4(0x10000);
  *param_1 = (int)pvVar1;
  iVar2 = 0;
  do {
    *(undefined4 *)(*param_1 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x4000);
  return param_1;
}

