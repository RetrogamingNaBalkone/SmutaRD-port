/* Ghidra address: 0040d144; FUN_0040d144 */

void __cdecl FUN_0040d144(undefined2 *param_1,ushort *param_2,ushort *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if ((uint)param_2[2] + (uint)param_3[2] < 0xffff) {
    uVar2 = (undefined2)((uint)param_2[2] + (uint)param_3[2]);
  }
  else {
    uVar2 = 0xfffe;
  }
  if ((uint)param_2[1] + (uint)param_3[1] < 0xffff) {
    uVar1 = (undefined2)((uint)param_2[1] + (uint)param_3[1]);
  }
  else {
    uVar1 = 0xfffe;
  }
  if ((uint)*param_2 + (uint)*param_3 < 0xffff) {
    uVar3 = (undefined2)((uint)*param_2 + (uint)*param_3);
  }
  else {
    uVar3 = 0xfffe;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

