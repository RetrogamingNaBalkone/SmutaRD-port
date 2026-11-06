/* Ghidra address: 0040d2dc; FUN_0040d2dc */

undefined2 * __cdecl FUN_0040d2dc(undefined2 *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (param_3[2] == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)param_3[2];
  }
  if (param_3[1] == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)param_3[1];
  }
  if (*param_3 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (uint)*param_3;
  }
  *param_1 = (short)(((ulonglong)*param_2 << 8) / (ulonglong)uVar5);
  param_1[1] = (short)(((ulonglong)uVar1 << 8) / (ulonglong)uVar4);
  param_1[2] = (short)(((ulonglong)uVar2 << 8) / (ulonglong)uVar3);
  return param_1;
}

