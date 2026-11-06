/* Ghidra address: 00426ff4; FUN_00426ff4 */

void __cdecl FUN_00426ff4(int *param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *param_1; iVar1 = iVar1 + 1) {
    if ((*(byte *)(param_1[1] + 0x108 + iVar1 * 0x10e) & 2) != 0) {
      *(undefined2 *)(param_1[1] + 0x108 + iVar1 * 0x10e) = 0;
      FUN_0042361c(*(LPCVOID *)(param_1[1] + 0x10a + iVar1 * 0x10e));
      *(undefined4 *)(param_1[1] + 0x10a + iVar1 * 0x10e) = 0;
    }
  }
  return;
}

