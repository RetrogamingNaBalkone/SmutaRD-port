/* Ghidra address: 0040d474; FUN_0040d474 */

undefined1 * __cdecl FUN_0040d474(undefined1 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 local_7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  local_7 = (undefined1)((int)(uint)*param_2 >> 10);
  *param_1 = local_7;
  param_1[1] = (char)((int)(uint)uVar1 >> 10);
  param_1[2] = (char)((int)(uint)uVar2 >> 10);
  return param_1;
}

