/* Ghidra address: 0042d4d4; FUN_0042d4d4 */

undefined4 __cdecl FUN_0042d4d4(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 == (int *)0x0) {
    FUN_0042d684();
    uVar1 = 0;
  }
  else if ((char)param_1 == *(char *)((int)param_1 + 0x17)) {
    if (param_1[2] < 0) {
      pcVar3 = (char *)(param_1[3] + param_1[2] + 1);
      param_1[2] = param_1[2] - (int)pcVar3;
      *param_1 = param_1[1];
      pcVar2 = FUN_0042fc00((int)*(char *)((int)param_1 + 0x16),(char *)param_1[1],pcVar3);
      if ((pcVar3 == pcVar2) || ((*(byte *)((int)param_1 + 0x13) & 2) != 0)) {
        uVar1 = 0;
      }
      else {
        *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 0x10;
        uVar1 = 0xffffffff;
      }
    }
    else {
      if ((((*(byte *)((int)param_1 + 0x12) & 8) != 0) || (param_1 + 5 == (int *)*param_1)) &&
         (param_1[2] = 0, param_1 + 5 == (int *)*param_1)) {
        *param_1 = param_1[1];
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

