/* Ghidra address: 004157f0; FUN_004157f0 */

void __cdecl FUN_004157f0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x2d) != 0) {
    if (((*(int *)(param_1 + 0xf5) == 0) || (*(int *)(param_1 + 0x2d) == *(int *)(param_1 + 0x129)))
       || (*(short *)(param_1 + 0xfd) != 0)) {
      puVar4 = (undefined4 *)(param_1 + 0xc1);
      puVar5 = (undefined4 *)(param_1 + 0x31);
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(param_1 + 0xf5) = *(int *)(param_1 + 0xf5) + 1;
      sVar2 = (short)(*(int *)(param_1 + 0x39) / (int)DAT_004f1434[0x3a7]);
      sVar1 = (short)(*(int *)(param_1 + 0x31) / (int)DAT_004f1434[0x3a7]);
      if (sVar1 < 0) {
        sVar1 = 0;
      }
      if (*DAT_004f1434 + -1 < (int)sVar1) {
        sVar1 = *DAT_004f1434 + -1;
      }
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      if (DAT_004f1434[2] + -1 < (int)sVar2) {
        sVar2 = DAT_004f1434[2] + -1;
      }
      sVar1 = sVar2 * (short)*(undefined4 *)(DAT_004f1434 + 0x25b6) + sVar1;
      if (*(short *)(*(int *)(DAT_004f1434 + (uint)(byte)(&DAT_004f4e98)[sVar1] * 2 + 0x187) + 0x18)
          == 0) {
        (&DAT_004f4e98)[sVar1] = *(undefined1 *)(param_1 + 0xb9);
      }
      *(undefined2 *)(param_1 + 0x12f) = *(undefined2 *)(param_1 + 0x131);
      *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_1 + 0x115);
    }
    else {
      DAT_00439c02 = DAT_00439c02 + 1;
    }
  }
  return;
}

