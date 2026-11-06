/* Ghidra address: 0040f7dc; FUN_0040f7dc */

LPVOID __cdecl FUN_0040f7dc(char *param_1)

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
  undefined **local_10;
  short local_c;
  uint local_a;
  
  pbVar8 = local_111;
  pbVar7 = local_211;
  puVar6 = local_411;
  pbVar5 = local_414;
  puVar1 = (uint *)FUN_00432bf4(param_1);
  thunk_FUN_0042eb4c(puVar1,pbVar5,(undefined1 *)puVar6,pbVar7,pbVar8);
  pcVar2 = FUN_00432bf4(&DAT_00439b30);
  FUN_0042d6f0(local_518,(char *)local_414,local_411,(char *)local_211,pcVar2);
  FUN_0040cf10((int *)&local_10);
  DVar3 = FUN_0042fd2c(local_a);
  pvVar4 = FUN_0040f774((int *)&local_10,DVar3);
  local_10 = &PTR_FUN_004382f8;
  if (local_c != 0) {
    (*(code *)PTR_FUN_00438300)();
  }
  return pvVar4;
}

