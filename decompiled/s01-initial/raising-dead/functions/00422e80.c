/* Ghidra address: 00422e80; FUN_00422e80 */

void __cdecl FUN_00422e80(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *local_20;
  int local_14;
  float local_10;
  
  local_10 = 0.0;
  local_14 = 0;
  piVar5 = &DAT_0053bc20;
  local_20 = &DAT_0053b680;
  do {
    FUN_004332cc(SUB84((double)local_10,0),(int)((ulonglong)(double)local_10 >> 0x20));
    uVar1 = FUN_00433130();
    FUN_00432fa0(SUB84((double)local_10,0),(int)((ulonglong)(double)local_10 >> 0x20));
    uVar2 = FUN_00433130();
    uVar3 = (int)uVar1 >> 0x1f;
    uVar4 = (int)uVar2 >> 0x1f;
    if ((int)((uVar2 ^ uVar4) - uVar4) < (int)((uVar1 ^ uVar3) - uVar3)) {
      *local_20 = param_1 * 0x10000;
      if ((int)uVar1 < 0) {
        *local_20 = param_1 * -0x10000;
      }
      *piVar5 = ((int)uVar2 / (int)(((int)uVar1 >> 0x10 ^ uVar3) - uVar3)) * param_1;
    }
    else {
      *piVar5 = param_1 * 0x10000;
      if ((int)uVar2 < 0) {
        *piVar5 = param_1 * -0x10000;
      }
      *local_20 = ((int)uVar1 / (int)(((int)uVar2 >> 0x10 ^ uVar4) - uVar4)) * param_1;
    }
    local_10 = local_10 + 0.017453292;
    local_14 = local_14 + 1;
    piVar5 = piVar5 + 1;
    local_20 = local_20 + 1;
  } while (local_14 < 0x168);
  return;
}

