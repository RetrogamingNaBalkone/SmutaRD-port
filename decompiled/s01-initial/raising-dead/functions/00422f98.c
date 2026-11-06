/* Ghidra address: 00422f98; FUN_00422f98 */

void __cdecl FUN_00422f98(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = *param_1 - param_1[2] >> 0x1f;
  uVar3 = param_1[1] - param_1[3] >> 0x1f;
  iVar1 = ((param_1[1] - param_1[3] ^ uVar3) - uVar3) * 0x10000;
  iVar4 = ((*param_1 - param_1[2] ^ uVar2) - uVar2) * 0x10000;
  if (iVar1 < iVar4) {
    param_1[8] = 0x10000;
    iVar4 = iVar4 >> 0x10;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    param_1[9] = iVar1 / iVar4;
  }
  else {
    iVar1 = iVar1 >> 0x10;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    param_1[8] = iVar4 / iVar1;
    param_1[9] = 0x10000;
  }
  if (param_1[2] < *param_1) {
    param_1[8] = -param_1[8];
  }
  if (param_1[3] < param_1[1]) {
    param_1[9] = -param_1[9];
  }
  param_1[6] = *param_1 << 0x10;
  param_1[7] = param_1[1] << 0x10;
  return;
}

