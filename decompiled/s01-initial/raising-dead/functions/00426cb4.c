/* Ghidra address: 00426cb4; FUN_00426cb4 */

void __cdecl FUN_00426cb4(ushort param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      iVar1 = param_2[2];
      if (param_2[2] < param_4) {
        iVar1 = param_4;
      }
      if (0 < iVar1) {
        *param_2 = (*param_2 * param_3) / (iVar1 + 1);
        param_2[1] = (param_2[1] * param_3) / (iVar1 + 1);
        param_2 = param_2 + 3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  return;
}

