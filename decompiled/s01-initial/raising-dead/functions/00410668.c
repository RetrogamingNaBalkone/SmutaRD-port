/* Ghidra address: 00410668; FUN_00410668 */

void __cdecl FUN_00410668(int param_1)

{
  int iVar1;
  byte *pbVar2;
  
  for (pbVar2 = (byte *)(param_1 + 0x95); *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
    FUN_004157f0(*(int *)(DAT_004f1434 + 0x30e + (uint)*pbVar2 * 4));
  }
  *(undefined1 *)(param_1 + 0x95) = 0;
  iVar1 = DAT_004d09fc;
  if (*(int *)(param_1 + 0x91) < 1) {
    if (*(int *)(param_1 + 0x91) < 0) {
      if (*(int *)(param_1 + 0x91) == -2) {
        DAT_00438e98 = 30000;
        DAT_00438e9c = 30000;
      }
      *(undefined1 *)(DAT_004d09fc + 0x12f) = *(undefined1 *)(param_1 + 0x90);
      FUN_0041219c(iVar1,*(byte *)(param_1 + 0x90));
    }
  }
  else {
    (**(code **)(*(int *)(*(int *)(DAT_004f1434 + 0x30e + (uint)*(byte *)(param_1 + 0x90) * 4) +
                         0x14) + 0x20))();
    (**(code **)(**(int **)(param_1 + 0x6d) + 0xc))();
    *(undefined4 *)(param_1 + 0x91) = 0;
  }
  return;
}

