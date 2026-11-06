/* Ghidra address: 00403be4; FUN_00403be4 */

void __stdcall FUN_00403be4(void)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_42c [515];
  byte local_229 [256];
  byte local_129 [257];
  _MEMORYSTATUS local_28;
  
  DAT_00438324 = GetPrivateProfileIntA(PTR_DAT_00438320,s_MaxLevel_00438493,0,(LPCSTR)&DAT_0043f350)
  ;
  DAT_00438328 = GetPrivateProfileIntA(PTR_DAT_00438320,s_MaxDemo_0043849c,0,(LPCSTR)&DAT_0043f350);
  GetPrivateProfileStringA
            (PTR_DAT_00438320,s_CDPath_004384a4,&DAT_004384ab,&DAT_0043f88c,0x50,
             (LPCSTR)&DAT_0043f350);
  pbVar5 = local_129;
  pbVar6 = local_229;
  pbVar8 = local_42c + 3;
  pbVar7 = local_42c;
  puVar2 = (uint *)FUN_00432bf4(&DAT_0043f88c);
  thunk_FUN_0042eb4c(puVar2,pbVar7,pbVar8,pbVar6,pbVar5);
  uVar3 = 0xffffffff;
  pbVar5 = local_42c;
  do {
    pbVar6 = pbVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar6;
  } while (bVar1 != 0);
  uVar3 = ~uVar3;
  pbVar5 = pbVar6 + -uVar3;
  pbVar6 = (byte *)&DAT_0043f98c;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  DAT_0043832c = GetPrivateProfileIntA(PTR_DAT_00438320,s_Quality_004384ad,1,(LPCSTR)&DAT_0043f350);
  GlobalMemoryStatus(&local_28);
  if (local_28.dwTotalPhys / 1000000 < 0x3c) {
    DAT_0043832c = 1;
  }
  if (DAT_0043832c == 0) {
    FUN_0042ed78(&DAT_0043d588,(byte *)s_Rd_dat_004384b5);
  }
  else {
    FUN_0042ed78(&DAT_0043d588,(byte *)s_Rd__d_dat_004384bc);
  }
  GetPrivateProfileStringA
            (PTR_DAT_00438320,s_RegisterCode_004384c6,s_12345_004384d3,&DAT_0043f450,0x14,
             (LPCSTR)&DAT_0043f350);
  DAT_00438330 = GetPrivateProfileIntA
                           (PTR_DAT_00438320,s_MouseSpeed_004384d9,5,(LPCSTR)&DAT_0043f350);
  return;
}

