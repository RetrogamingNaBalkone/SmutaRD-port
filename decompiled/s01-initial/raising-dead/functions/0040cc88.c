/* Ghidra address: 0040cc88; FUN_0040cc88 */

void __cdecl FUN_0040cc88(int param_1,int param_2,int param_3,BOOL param_4)

{
  int iVar1;
  int iVar2;
  LONG *pLVar3;
  uint uVar4;
  tagRECT *ptVar5;
  tagRECT local_14;
  
  pLVar3 = &DAT_00439898;
  ptVar5 = &local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    ptVar5->left = *pLVar3;
    pLVar3 = pLVar3 + 1;
    ptVar5 = (tagRECT *)&ptVar5->top;
  }
  local_14.right = param_2 + -1;
  local_14.bottom = param_3 + -1;
  AdjustWindowRect(&local_14,0xca0000,param_4);
  *(LONG *)(param_1 + 0x44) = (local_14.right - local_14.left) + 1;
  *(LONG *)(param_1 + 0x48) = (local_14.bottom - local_14.top) + 1;
  iVar2 = GetSystemMetrics(0);
  iVar1 = GetSystemMetrics(1);
  uVar4 = iVar2 - *(int *)(param_1 + 0x44);
  iVar2 = (int)uVar4 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar4 & 1) != 0);
  }
  *(int *)(param_1 + 0x3c) = iVar2;
  uVar4 = iVar1 - *(int *)(param_1 + 0x48);
  iVar2 = (int)uVar4 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar4 & 1) != 0);
  }
  *(int *)(param_1 + 0x40) = iVar2 + -10;
  return;
}

