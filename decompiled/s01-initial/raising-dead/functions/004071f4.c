/* Ghidra address: 004071f4; FUN_004071f4 */

void __cdecl FUN_004071f4(char *param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  ushort *puVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  char local_958 [260];
  byte local_854 [3];
  uint local_851 [128];
  byte local_651 [256];
  byte local_551 [257];
  char local_450 [4];
  int local_44c;
  int local_448;
  char local_28 [2];
  int local_26;
  undefined2 local_22;
  undefined2 local_20;
  undefined4 local_1e;
  int local_18;
  int local_14;
  undefined **local_10;
  short local_c;
  uint local_a;
  
  pcVar2 = local_450;
  for (iVar3 = 0x10a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar2 = *param_2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 4;
  }
  if (local_448 < 0) {
    local_448 = -local_448;
  }
  local_28[0] = 'B';
  local_28[1] = 'M';
  local_22 = 0;
  local_20 = 0;
  local_1e = 0x436;
  puVar6 = local_851;
  local_26 = local_44c * local_448 * 3 + 0x436;
  pbVar7 = local_651;
  pbVar8 = local_551;
  pbVar5 = local_854;
  puVar1 = (uint *)FUN_00432bf4(param_1);
  thunk_FUN_0042eb4c(puVar1,pbVar5,(undefined1 *)puVar6,pbVar7,pbVar8);
  pcVar2 = FUN_00432bf4(&DAT_00438e69);
  FUN_0042d6f0(local_958,(char *)local_854,local_851,(char *)local_651,pcVar2);
  FUN_0040cf10((int *)&local_10);
  FUN_0040d084((int)&local_10,local_28,0xe);
  FUN_0040d084((int)&local_10,local_450,0x428);
  local_14 = (int)DAT_004cf8f0 >> 1;
  if (local_14 < 0) {
    local_14 = local_14 + (uint)((DAT_004cf8f0 & 1) != 0);
  }
  local_18 = local_44c;
  puVar4 = (ushort *)((local_448 + -1) * local_14 * 2 + param_3);
  pcVar2 = FUN_004235d4(0xc00);
  for (iVar3 = 0; iVar3 < local_448; iVar3 = iVar3 + 1) {
    FUN_00407158((undefined2 *)pcVar2,puVar4,local_18);
    FUN_0040d084((int)&local_10,pcVar2,local_18 * 3);
    puVar4 = puVar4 + -local_14;
  }
  thunk_FUN_004301bc(local_a);
  local_c = 0;
  FUN_0042361c(pcVar2);
  local_10 = &PTR_FUN_004382f8;
  if (local_c != 0) {
    (*(code *)PTR_FUN_00438300)(&PTR_FUN_004382f8,&local_10,pcVar2,&local_10);
  }
  return;
}

