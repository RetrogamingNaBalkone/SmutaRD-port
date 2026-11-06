/* Ghidra address: 0040dcb4; FUN_0040dcb4 */

void __cdecl FUN_0040dcb4(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  
  for (piVar1 = (int *)(param_1 + 0xc); *piVar1 != 0x20746d66; piVar1 = (int *)((int)piVar1 + 1)) {
  }
  *param_2 = (int)(piVar1 + 2);
  for (; *piVar1 != 0x61746164; piVar1 = (int *)((int)piVar1 + 1)) {
  }
  *param_4 = piVar1[1];
  *param_3 = piVar1 + 2;
  return;
}

