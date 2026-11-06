/* Ghidra address: 004117bc; FUN_004117bc */

void __stdcall FUN_004117bc(int param_1,byte param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_38 [3];
  undefined2 uStack_2c;
  undefined2 uStack_26;
  
  iVar1 = FUN_00416524(DAT_004f1434);
  if (-1 < (short)iVar1) {
    puVar2 = FUN_00412f78(*(int *)(DAT_004f1434 + 0x30e + (uint)param_2 * 4),(byte)iVar1);
    FUN_004165dc(DAT_004f1434,(byte)iVar1,puVar2);
    piVar3 = (int *)(param_1 + 0x31);
    piVar4 = aiStack_38;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    aiStack_38[1] = aiStack_38[1] - *(short *)(param_1 + 0xbf);
    uStack_2c = param_3;
    uStack_26 = 0;
    FUN_0041316c((int *)puVar2,aiStack_38,param_1);
  }
  return;
}

