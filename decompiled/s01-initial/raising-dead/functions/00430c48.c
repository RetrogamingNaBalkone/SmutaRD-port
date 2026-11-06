/* Ghidra address: 00430c48; FUN_00430c48 */

uint __cdecl FUN_00430c48(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int **)(*param_1 + 4);
  if ((uint)piVar1[9] <= (uint)piVar1[8]) {
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    if (iVar3 == -1) {
      uVar4 = 0xffffffff;
      goto LAB_00430c76;
    }
  }
  pbVar2 = (byte *)piVar1[8];
  piVar1[8] = piVar1[8] + 1;
  uVar4 = (uint)*pbVar2;
LAB_00430c76:
  if (uVar4 == 0xffffffff) {
    FUN_0043201c(*param_1,3);
  }
  else {
    param_1[2] = param_1[2] + 1;
  }
  return uVar4;
}

