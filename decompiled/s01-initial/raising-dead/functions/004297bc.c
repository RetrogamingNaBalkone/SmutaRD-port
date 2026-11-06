/* Ghidra address: 004297bc; FUN_004297bc */

void __cdecl FUN_004297bc(int param_1,short param_2)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (int)param_2 >> 1;
  uVar5 = (ushort)uVar6;
  while (0 < (short)uVar5) {
    sVar4 = (short)uVar6;
    for (sVar1 = sVar4; sVar1 < param_2; sVar1 = sVar1 + 1) {
      sVar3 = sVar1 - sVar4;
      while ((-1 < sVar3 &&
             (*(short *)(*(int *)(param_1 + sVar3 * 4) + 0x17) <
              *(short *)(*(int *)(param_1 + ((int)sVar3 + (int)sVar4) * 4) + 0x17)))) {
        iVar7 = (int)sVar3;
        uVar2 = *(undefined4 *)(param_1 + iVar7 * 4);
        *(undefined4 *)(param_1 + iVar7 * 4) = *(undefined4 *)(param_1 + (iVar7 + sVar4) * 4);
        *(undefined4 *)(param_1 + ((int)sVar3 + (int)sVar4) * 4) = uVar2;
        sVar3 = sVar3 - sVar4;
      }
    }
    uVar5 = sVar4 >> 1;
    uVar6 = (uint)uVar5;
  }
  return;
}

