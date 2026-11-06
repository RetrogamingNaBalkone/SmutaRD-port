/* Ghidra address: 004117c2; FUN_004117c2 */

void __stdcall FUN_004117c2(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = FUN_00416524(DAT_004f1434);
  if (-1 < (short)iVar2) {
    puVar3 = FUN_00412f78(*(int *)(DAT_004f1434 + 0x30e + (uint)*(byte *)(unaff_EBP + 0xc) * 4),
                          (byte)iVar2);
    FUN_004165dc(DAT_004f1434,(byte)iVar2,puVar3);
    puVar4 = (undefined4 *)(iVar1 + 0x31);
    puVar5 = (undefined4 *)(unaff_EBP + -0x34);
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) - (int)*(short *)(iVar1 + 0xbf);
    *(undefined2 *)(unaff_EBP + -0x28) = *(undefined2 *)(unaff_EBP + 0x10);
    *(undefined2 *)(unaff_EBP + -0x22) = 0;
    FUN_0041316c((int *)puVar3,(undefined4 *)(unaff_EBP + -0x34),iVar1);
  }
  return;
}

