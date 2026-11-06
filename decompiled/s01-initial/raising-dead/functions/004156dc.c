/* Ghidra address: 004156dc; FUN_004156dc */

void __cdecl FUN_004156dc(int param_1)

{
  int iVar1;
  
  FUN_0040ffb4(param_1,0x20,0);
  if (*(short *)(*(int *)(DAT_004f1434 + 0x30e + (uint)*(byte *)(param_1 + 0x110) * 4) + 0x75) == 10
     ) {
    FUN_0040ffb4(param_1,*(byte *)(param_1 + 0x110),1);
  }
  if (*(short *)(param_1 + 0xfd) == 0) {
    iVar1 = FUN_00411b40(param_1,1);
    if (*(short *)(iVar1 + 0x18) == 0) {
      iVar1 = FUN_00411b40(param_1,2);
      if (*(short *)(iVar1 + 0x18) != 0xc) {
        FUN_0040ffb4(param_1,*(undefined1 *)(param_1 + 0x110),1);
      }
    }
    else if (*(short *)(iVar1 + 0x18) == 7) {
      iVar1 = FUN_00411b40(param_1,1);
      if (*(short *)(iVar1 + 0x7a) != 0) {
        *(short *)(iVar1 + 0x7a) = *(short *)(iVar1 + 0x7a) + -1;
      }
    }
    DAT_00439c02 = DAT_00439c02 + 1;
  }
  *(ushort *)(param_1 + 0x1b) = *(ushort *)(param_1 + 0x1b) | 0x10;
  *(undefined4 *)(param_1 + 0x16b) = 1;
  return;
}

