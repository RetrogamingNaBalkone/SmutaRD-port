/* Ghidra address: 00406b88; FUN_00406b88 */

void __cdecl FUN_00406b88(char *param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  char local_518 [260];
  byte local_414 [3];
  uint local_411 [128];
  byte local_211 [256];
  byte local_111 [257];
  undefined **local_10;
  short local_c;
  
  pbVar6 = local_111;
  pbVar5 = local_211;
  puVar4 = local_411;
  pbVar3 = local_414;
  puVar1 = (uint *)FUN_00432bf4(param_1);
  thunk_FUN_0042eb4c(puVar1,pbVar3,(undefined1 *)puVar4,pbVar5,pbVar6);
  pcVar2 = FUN_00432bf4(&DAT_00438e64);
  FUN_0042d6f0(local_518,(char *)local_414,local_411,(char *)local_211,pcVar2);
  FUN_0040cf10((int *)&local_10);
  FUN_0040d084((int)&local_10,param_2,0x300);
  local_10 = &PTR_FUN_004382f8;
  if (local_c != 0) {
    (*(code *)PTR_FUN_00438300)();
  }
  return;
}

