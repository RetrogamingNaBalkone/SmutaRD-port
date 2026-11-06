/* Ghidra address: 0040d674; FUN_0040d674 */

int __cdecl FUN_0040d674(ushort *param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ((int)(uint)param_1[2] >> 2) - ((int)(uint)param_2[2] >> 2);
  iVar3 = ((int)(uint)param_1[1] >> 2) - ((int)(uint)param_2[1] >> 2);
  iVar1 = ((int)(uint)*param_1 >> 2) - ((int)(uint)*param_2 >> 2);
  return iVar2 * iVar2 + iVar3 * iVar3 + iVar1 * iVar1;
}

