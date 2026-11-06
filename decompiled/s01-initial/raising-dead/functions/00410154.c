/* Ghidra address: 00410154; FUN_00410154 */

undefined4 __cdecl FUN_00410154(int param_1)

{
  ushort *puVar1;
  short *psVar2;
  short sVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x65) == 0) {
    pcVar4 = FUN_00404d88(0x29);
    FUN_0040e524(pcVar4);
  }
  if (((*(byte *)(param_1 + 0x1c) & 8) != 0) && (psVar2 = *(short **)(param_1 + 0x69), *psVar2 != 0)
     ) {
    sVar3 = FUN_004100cc(param_1,psVar2);
    uVar5 = FUN_0040f4b0(psVar2,0,(undefined2 *)(param_1 + 0x73),sVar3);
    *(undefined4 *)(param_1 + 0x65) = uVar5;
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

