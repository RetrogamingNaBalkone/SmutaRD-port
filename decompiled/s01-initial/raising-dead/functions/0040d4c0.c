/* Ghidra address: 0040d4c0; FUN_0040d4c0 */

undefined1 * __cdecl FUN_0040d4c0(undefined1 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = (char)((ushort)*param_2 >> 8);
  param_1[1] = (char)((ushort)uVar1 >> 8);
  param_1[2] = (char)((ushort)uVar2 >> 8);
  return param_1;
}

