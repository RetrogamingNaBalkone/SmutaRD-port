/* Ghidra address: 00427190; FUN_00427190 */

void __cdecl FUN_00427190(int *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004270dc(param_1,param_2);
  *(undefined2 *)(param_1[1] + 0x108 + iVar1 * 0x10e) = 0;
  FUN_0042361c(*(LPCVOID *)(param_1[1] + 0x10a + iVar1 * 0x10e));
  *(undefined4 *)(param_1[1] + 0x10a + iVar1 * 0x10e) = 0;
  return;
}

