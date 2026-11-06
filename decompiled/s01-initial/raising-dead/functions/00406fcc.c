/* Ghidra address: 00406fcc; FUN_00406fcc */

uint * __cdecl FUN_00406fcc(LPCSTR param_1)

{
  DWORD DVar1;
  char *pcVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int local_24;
  char *local_20;
  short *local_1c;
  undefined **local_10;
  short local_c;
  uint local_a;
  
  FUN_0040cef4(&local_10);
  FUN_0040cf70((int)&local_10,param_1,1);
  DVar1 = FUN_0042fd2c(local_a);
  pcVar2 = FUN_004235d4(DVar1);
  DVar1 = FUN_0042fd2c(local_a);
  FUN_0040cfe4((int)&local_10,pcVar2,DVar1);
  thunk_FUN_004301bc(local_a);
  local_c = 0;
  uVar6 = *(int *)(pcVar2 + 0x12) * 2 * *(int *)(pcVar2 + 0x16);
  puVar3 = FUN_004235d4(uVar6 + 0x10);
  *puVar3 = *(uint *)(pcVar2 + 0x12);
  puVar3[1] = *(uint *)(pcVar2 + 0x16);
  puVar3[2] = uVar6;
  puVar3[3] = (uint)(puVar3 + 4);
  uVar6 = *puVar3 & 0x80000003;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
  }
  if (uVar6 == 0) {
    uVar6 = *puVar3;
  }
  else {
    uVar6 = *puVar3;
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + 3;
    }
    uVar6 = ((int)uVar6 >> 2) * 4 + 4;
  }
  local_1c = (short *)((puVar3[1] * 2 + -2) * *puVar3 + puVar3[3]);
  local_20 = pcVar2 + *(int *)(pcVar2 + 10);
  for (local_24 = 0; local_24 < (int)puVar3[1]; local_24 = local_24 + 1) {
    psVar7 = local_1c;
    for (iVar5 = 0; iVar5 < (int)*puVar3; iVar5 = iVar5 + 1) {
      pbVar4 = (byte *)(local_20 + iVar5 * 3);
      *psVar7 = ((short)(((int)(uint)pbVar4[2] >> 3) << 6) + (short)((int)(uint)pbVar4[1] >> 2)) *
                0x20 + (short)((int)(uint)*pbVar4 >> 3);
      psVar7 = psVar7 + 1;
    }
    local_20 = local_20 + uVar6 * 3;
    local_1c = local_1c + -*puVar3;
  }
  FUN_0042361c(pcVar2);
  local_10 = &PTR_FUN_004382f8;
  if (local_c != 0) {
    (*(code *)PTR_FUN_00438300)();
  }
  return puVar3;
}

