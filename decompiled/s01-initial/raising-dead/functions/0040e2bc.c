/* Ghidra address: 0040e2bc; FUN_0040e2bc */

void __cdecl
FUN_0040e2bc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_5 * 0x18) / 1000;
  if (*param_1 < param_1[1] + -1) {
    if (*param_1 == 0) {
      if (DAT_004399a0 == 0) {
        DAT_004399a8 = param_1;
        param_1[4] = (int)param_1;
        param_1[3] = (int)param_1;
      }
      else {
        param_1[3] = DAT_004399a8[3];
        param_1[4] = (int)DAT_004399a8;
        *(int **)(param_1[3] + 0x10) = param_1;
        DAT_004399a8[3] = (int)param_1;
        DAT_004399a8 = param_1;
      }
      DAT_004399a0 = DAT_004399a0 + 1;
    }
    iVar1 = *param_1;
    iVar2 = param_1[2];
    *(undefined4 *)(iVar2 + 8 + iVar1 * 0x14) = param_2;
    *(undefined4 *)(iVar2 + 0xc + iVar1 * 0x14) = param_3;
    *(undefined4 *)(iVar2 + 0x10 + iVar1 * 0x14) = param_4;
    *(uint *)(param_1[2] + 4 + *param_1 * 0x14) = uVar3;
    *(uint *)(param_1[2] + *param_1 * 0x14) = uVar3;
    *param_1 = *param_1 + 1;
    DAT_004399a4 = DAT_004399a4 + 1;
  }
  return;
}

