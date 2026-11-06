/* Ghidra address: 0040d1e0; FUN_0040d1e0 */

void __cdecl FUN_0040d1e0(undefined2 *param_1,ushort *param_2,ushort *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar2 = (uint)param_2[2] - (uint)param_3[2];
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if ((int)((uint)param_2[1] - (uint)param_3[1]) < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined2)((uint)param_2[1] - (uint)param_3[1]);
  }
  if ((int)((uint)*param_2 - (uint)*param_3) < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined2)((uint)*param_2 - (uint)*param_3);
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = (short)iVar2;
  return;
}

