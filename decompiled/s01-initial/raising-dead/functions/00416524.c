/* Ghidra address: 00416524; FUN_00416524 */

int __cdecl FUN_00416524(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x30e);
  while( true ) {
    if (*piVar1 == 0) {
      *(short *)(param_1 + 0x752) = *(short *)(param_1 + 0x752) + 1;
      return iVar2;
    }
    if ((*(byte *)(*piVar1 + 0x1c) & 4) != 0) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (0xff < (short)iVar2) {
      return -1;
    }
  }
  FUN_0041657c(param_1,(byte)iVar2);
  *(short *)(param_1 + 0x752) = *(short *)(param_1 + 0x752) + 1;
  return iVar2;
}

