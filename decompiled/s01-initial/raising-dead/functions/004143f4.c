/* Ghidra address: 004143f4; FUN_004143f4 */

undefined4 __cdecl FUN_004143f4(int param_1)

{
  ushort *puVar1;
  char *pcVar2;
  
  if (*(int *)(param_1 + 0x65) == 0) {
    pcVar2 = FUN_00404d88(0x29);
    FUN_0040e524(pcVar2);
  }
  else if (*(short *)(param_1 + 0x82) != 10) {
    FUN_00406c38(*(int *)(param_1 + 0x65),0,*(short *)(param_1 + 0x84),*(short *)(param_1 + 0x71));
  }
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x65) + 4);
    *puVar1 = *puVar1 & 0xfffe;
  }
  else {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x65) + 4);
    *puVar1 = *puVar1 | 1;
  }
  if ((*(byte *)(param_1 + 0x1b) & 8) == 0) {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x65) + 4);
    *puVar1 = *puVar1 & 0xfff7;
  }
  else {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x65) + 4);
    *puVar1 = *puVar1 | 8;
  }
  return *(undefined4 *)(param_1 + 0x65);
}

