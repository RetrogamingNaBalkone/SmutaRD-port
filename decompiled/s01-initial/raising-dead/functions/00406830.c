/* Ghidra address: 00406830; FUN_00406830 */

undefined4 * __cdecl FUN_00406830(char *param_1,undefined4 *param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  char local_518 [260];
  byte local_414 [3];
  uint local_411 [128];
  byte local_211 [256];
  byte local_111 [257];
  undefined **local_10;
  short local_c;
  uint local_a;
  
  pbVar7 = local_111;
  pbVar6 = local_211;
  puVar5 = local_411;
  pbVar4 = local_414;
  puVar1 = (uint *)FUN_00432bf4(param_1);
  thunk_FUN_0042eb4c(puVar1,pbVar4,(undefined1 *)puVar5,pbVar6,pbVar7);
  pcVar2 = FUN_00432bf4(&DAT_00438e5a);
  FUN_0042d6f0(local_518,(char *)local_414,local_411,(char *)local_211,pcVar2);
  FUN_0040cf10((int *)&local_10);
  pcVar2 = FUN_004235d4(800);
  FUN_0040cfe4((int)&local_10,pcVar2,800);
  puVar3 = FUN_004235d4(*(int *)(pcVar2 + 0xc) + 800);
  FUN_00429f54(puVar3,(undefined4 *)pcVar2,800);
  FUN_0042361c(pcVar2);
  FUN_0040cfe4((int)&local_10,(char *)(puVar3 + 200),puVar3[3]);
  thunk_FUN_004301bc(local_a);
  local_c = 0;
  FUN_00429f54(param_2,puVar3 + 8,0x300);
  local_10 = &PTR_FUN_004382f8;
  if (local_c != 0) {
    (*(code *)PTR_FUN_00438300)();
  }
  return puVar3;
}

