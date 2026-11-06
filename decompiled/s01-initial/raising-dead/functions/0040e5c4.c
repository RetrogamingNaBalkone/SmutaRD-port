/* Ghidra address: 0040e5c4; FUN_0040e5c4 */

/* WARNING: Removing unreachable block (ram,0x0040e697) */

undefined4 __cdecl FUN_0040e5c4(int param_1,char *param_2,uint *param_3)

{
  uint *puVar1;
  char *pcVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  char local_518 [260];
  byte local_414 [3];
  uint local_411 [128];
  byte local_211 [256];
  byte local_111 [257];
  int local_10;
  uint local_a;
  
  pbVar8 = local_111;
  pbVar7 = local_211;
  puVar6 = local_411;
  pbVar5 = local_414;
  puVar1 = (uint *)FUN_00432bf4(param_2);
  thunk_FUN_0042eb4c(puVar1,pbVar5,(undefined1 *)puVar6,pbVar7,pbVar8);
  pcVar2 = FUN_00432bf4(&DAT_004399da);
  FUN_0042d6f0(local_518,(char *)local_414,local_411,(char *)local_211,pcVar2);
  FUN_0040cf10(&local_10);
  DVar3 = FUN_0042fd2c(local_a);
  *param_3 = DVar3;
  pvVar4 = FUN_004235d4(DVar3);
  *(LPVOID *)(param_1 + 0xc) = pvVar4;
  FUN_0040cfe4((int)&local_10,*(char **)(param_1 + 0xc),*param_3);
  thunk_FUN_004301bc(local_a);
  return *(undefined4 *)(param_1 + 0xc);
}

