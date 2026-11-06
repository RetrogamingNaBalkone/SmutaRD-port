/* Ghidra address: 00403db8; FUN_00403db8 */

undefined4 __stdcall
FUN_00403db8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  HWND pHVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  UINT uType;
  undefined4 uVar16;
  undefined1 local_708 [256];
  int local_608 [45];
  undefined4 local_554;
  undefined4 local_550;
  undefined2 local_54c;
  undefined1 local_54a;
  byte local_444 [3];
  char local_441 [512];
  byte local_241 [256];
  byte local_141 [257];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  
  bVar12 = 0;
  FUN_0042c8f0(0x438397);
  pbVar15 = local_141;
  pbVar14 = local_241;
  pcVar4 = local_441;
  pbVar13 = local_444;
  puVar2 = (uint *)FUN_00432bf4((char *)*DAT_0053e5b4);
  thunk_FUN_0042eb4c(puVar2,pbVar13,pcVar4,pbVar14,pbVar15);
  uVar7 = 0xffffffff;
  pcVar4 = local_441;
  do {
    pcVar11 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar11 + -uVar7;
  pcVar11 = (char *)&DAT_0043f78c;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
    pcVar11 = pcVar11 + ((uint)bVar12 * -2 + 1) * 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar12 * -2 + 1;
    pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = local_441;
  do {
    pcVar11 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar4 + (uint)bVar12 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar11 + -uVar7;
  pcVar11 = (char *)&DAT_0043f350;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
    pcVar11 = pcVar11 + ((uint)bVar12 * -2 + 1) * 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar11 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar12 * -2 + 1;
    pcVar11 = pcVar11 + (uint)bVar12 * -2 + 1;
  }
  FUN_0042a068((char *)&DAT_0043f350,s_data_Rd_ini_004384e4);
  iVar3 = FUN_004039d0();
  if (iVar3 == 0xc) {
    local_1c = 8;
    DAT_00438354 = 1;
    local_30 = 0x140;
    local_34 = 0xf0;
    pHVar5 = FindWindowA(s_TWindow_3D_GAME_004384f0,(LPCSTR)0x0);
    if (pHVar5 == (HWND)0x0) {
      FUN_00403be4();
      FUN_00403d6c();
      FUN_00403ae4(&DAT_00438354,&local_30,&local_34);
      FUN_00403a00();
      FUN_00423068();
      FUN_00401118();
      iVar3 = 0;
      local_554 = DAT_00438358;
      local_550 = DAT_0043835c;
      local_54c = DAT_00438360;
      local_54a = DAT_00438362;
      local_38 = 10;
      for (pcVar4 = &DAT_0043f450; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
        iVar3 = iVar3 + 1;
      }
      local_3c = iVar3;
      if (iVar3 < 10) {
        local_3c = 10;
      }
      iVar9 = 1;
      if (0 < local_3c) {
        do {
          local_40 = iVar9 % iVar3;
          iVar10 = iVar9 % local_38;
          iVar6 = (iVar9 / iVar3 + 1) * iVar9;
          iVar9 = iVar9 + 1;
          *(char *)((int)&local_554 + iVar10) =
               (char)((iVar6 + (int)*(char *)((int)&local_554 + iVar10) +
                               (int)(char)(&DAT_0043f450)[local_40] + -0x60) % 10) + '0';
        } while (iVar9 <= local_3c);
      }
      pcVar11 = &DAT_0043fa8c;
      for (pcVar4 = (char *)&local_554; cVar1 = *pcVar4, *pcVar11 = cVar1, cVar1 != '\0';
          pcVar4 = pcVar4 + 1) {
        pcVar11 = pcVar11 + 1;
      }
      FUN_004037fc(local_608,PTR_DAT_00438320,param_1,param_2);
      DAT_0043f34c = local_608;
      iVar3 = (**(code **)(local_608[0] + 0xc))
                        (local_608[0],local_30 % DAT_00438354,local_608,local_608,0xffffd8f0,
                         0xffffd8f0,local_30 / DAT_00438354,local_34 / DAT_00438354,param_4);
      if (iVar3 == 0) {
        uVar16 = 0;
        FUN_00403824(local_608,2);
        *in_FS_OFFSET = local_2c;
        local_2c = uVar16;
      }
      else {
        FUN_0040c9bc(local_608);
        FUN_00403824(local_608,2);
        local_1c = 0;
        FUN_0042ed78(local_708,(byte *)s__sRegister_exe_00438500);
        FUN_00403d78((uint *)&DAT_0043f450);
        *in_FS_OFFSET = local_2c;
      }
    }
    else {
      *in_FS_OFFSET = local_2c;
      local_2c = 0;
    }
  }
  else {
    uType = 0x10;
    pcVar4 = FUN_00404d88(9);
    pcVar11 = FUN_00404d88(8);
    MessageBoxA((HWND)0x0,pcVar11,pcVar4,uType);
    *in_FS_OFFSET = local_2c;
    local_2c = 0;
  }
  return local_2c;
}

