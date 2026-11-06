/* Ghidra address: 004124a0; FUN_004124a0 */

bool __cdecl FUN_004124a0(int param_1,int param_2,short *param_3,undefined2 *param_4)

{
  bool bVar1;
  
  *param_3 = *(short *)(param_1 + 0x105 + param_2 * 2);
  *param_4 = *(undefined2 *)(param_1 + 0xf1 + param_2 * 2);
  if (((param_2 == 1) || (param_2 == 3)) || (param_2 == 5)) {
    bVar1 = *param_3 != 0;
  }
  else {
    bVar1 = *(int *)(param_1 + 0xc9 + param_2 * 4) != 0;
  }
  return bVar1;
}

