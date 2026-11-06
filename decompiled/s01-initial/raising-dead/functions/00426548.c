/* Ghidra address: 00426548; FUN_00426548 */

short __cdecl FUN_00426548(ushort *param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short local_6;
  
  local_6 = 0;
  iVar1 = FUN_0040d674(param_1,param_2);
  sVar3 = 1;
  do {
    iVar2 = FUN_0040d674(param_1 + sVar3 * 3,param_2);
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      local_6 = sVar3;
    }
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x100);
  return local_6;
}

