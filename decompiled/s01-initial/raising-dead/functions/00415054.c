/* Ghidra address: 00415054; FUN_00415054 */

undefined4 __cdecl FUN_00415054(int param_1)

{
  ushort *puVar1;
  short *psVar2;
  short sVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x2d) != 0) {
    psVar2 = *(short **)(*(int *)(param_1 + 0x2d) + 0x1c);
    if (psVar2 != (short *)0x0) {
      sVar3 = FUN_004100cc(param_1,psVar2);
      FUN_0040f8c4((short *)(*(int *)(param_1 + 0x2d) + 0x32),sVar3);
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2d) + 0x14) + 4))();
    uVar4 = FUN_0040f99c(*(int *)(param_1 + 0x2d));
    *(undefined4 *)(param_1 + 0x65) = uVar4;
  }
  *(int *)(param_1 + 0x51) =
       (int)(short)(**(short **)(param_1 + 0x65) * *(short *)(param_1 + 0x1d)) >> 1;
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

