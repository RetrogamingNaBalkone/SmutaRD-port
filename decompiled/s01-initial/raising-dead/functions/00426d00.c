/* Ghidra address: 00426d00; FUN_00426d00 */

undefined4 __cdecl FUN_00426d00(ushort param_1,int param_2,short *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  *param_3 = *(short *)(param_2 + 8);
  uVar3 = 1;
  piVar1 = (int *)(param_2 + 0x14);
  if (1 < param_1) {
    do {
      if ((int)*param_3 < *piVar1) {
        *param_3 = (short)*piVar1;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 3;
    } while (uVar3 < param_1);
  }
  if (*param_3 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT22((short)((uint)piVar1 >> 0x10),1);
  }
  return uVar2;
}

