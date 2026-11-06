/* Ghidra address: 0040d268; FUN_0040d268 */

void __cdecl FUN_0040d268(undefined2 *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_3[2];
  uVar4 = param_3[1];
  *param_1 = (short)((uint)*param_2 * (uint)*param_3 >> 8);
  param_1[1] = (short)((uint)uVar1 * (uint)uVar4 >> 8);
  param_1[2] = (short)((uint)uVar2 * (uint)uVar3 >> 8);
  return;
}

