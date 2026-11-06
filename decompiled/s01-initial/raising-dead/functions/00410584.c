/* Ghidra address: 00410584; FUN_00410584 */

int __cdecl FUN_00410584(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  for (pbVar2 = (byte *)(param_1 + 0x95); *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
    iVar1 = *(int *)(DAT_004f1434 + 0x30e + (uint)*pbVar2 * 4);
    if ((*(short *)(iVar1 + 0x18) == 9) && (*(short *)(iVar1 + 0xfd) == 0)) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

