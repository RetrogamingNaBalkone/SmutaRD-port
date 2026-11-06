/* Ghidra address: 004271e4; FUN_004271e4 */

void __cdecl FUN_004271e4(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004270dc(param_1,param_2);
  iVar1 = param_1[1];
  *(undefined2 *)(iVar1 + 0x108 + iVar2 * 0x10e) = 2;
  *(undefined4 *)(iVar1 + 0x10a + iVar2 * 0x10e) = param_3;
  return;
}

