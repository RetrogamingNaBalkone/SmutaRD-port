/* Ghidra address: 004017c4; FUN_004017c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004017c4(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  char local_40 [20];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00429fc4((undefined4 *)&DAT_0043dcd0,0,0x15ea);
  local_8 = 1000;
  pcVar6 = &DAT_0043dcd0;
  do {
    FUN_0042ed78(local_40,&DAT_004382c4);
    iVar8 = 0;
    local_4c = DAT_00438240;
    local_48 = DAT_00438244;
    local_44 = DAT_00438248;
    local_42 = DAT_0043824a;
    local_c = 10;
    for (pcVar9 = local_40; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
      iVar8 = iVar8 + 1;
    }
    local_10 = iVar8;
    if (iVar8 < 10) {
      local_10 = 10;
    }
    iVar5 = 1;
    if (0 < local_10) {
      do {
        local_14 = iVar5 % iVar8;
        local_18 = iVar5 % local_c;
        iVar2 = (iVar5 / iVar8 + 1) * iVar5;
        iVar5 = iVar5 + 1;
        *(char *)((int)&local_4c + local_18) =
             (char)((iVar2 + (int)*(char *)((int)&local_4c + local_18) + (int)local_40[local_14] +
                    -0x60) % 10) + '0';
      } while (iVar5 <= local_10);
    }
    pcVar3 = pcVar6;
    for (pcVar9 = (char *)&local_4c; cVar1 = *pcVar9, *pcVar3 = cVar1, cVar1 != '\0';
        pcVar9 = pcVar9 + 1) {
      pcVar3 = pcVar3 + 1;
    }
    local_58 = DAT_0043824b;
    local_54 = DAT_0043824f;
    local_50 = DAT_00438253;
    local_4e = DAT_00438255;
    local_1c = 10;
    local_20 = 0;
    for (pcVar9 = pcVar6; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
      local_20 = local_20 + 1;
    }
    local_24 = local_20;
    if (local_20 < 10) {
      local_24 = 10;
    }
    iVar8 = 1;
    if (0 < local_24) {
      do {
        local_28 = iVar8 % local_20;
        local_2c = iVar8 % local_1c;
        iVar5 = (iVar8 / local_20 + 1) * iVar8;
        iVar8 = iVar8 + 1;
        *(char *)((int)&local_58 + local_2c) =
             (char)((iVar5 + (int)pcVar6[local_28] + (int)*(char *)((int)&local_58 + local_2c) +
                    -0x60) % 10) + '0';
      } while (iVar8 <= local_24);
    }
    pcVar3 = pcVar6;
    for (pcVar9 = (char *)&local_58; cVar1 = *pcVar9, *pcVar3 = cVar1, cVar1 != '\0';
        pcVar9 = pcVar9 + 1) {
      pcVar3 = pcVar3 + 1;
    }
    local_8 = local_8 + 1;
    pcVar6 = pcVar6 + 0xb;
  } while (local_8 < 0x5dd);
  for (piVar7 = &DAT_00438238; *piVar7 != -1; piVar7 = piVar7 + 1) {
    FUN_00429fc4((undefined4 *)(&DAT_0043dcd0 + *piVar7 * 0xb),0,10);
  }
  _DAT_0043da0c = 0;
  puVar4 = FUN_00435120(0x3a006);
  if (puVar4 == (uint *)0x0) {
    DAT_00438ea0 = (uint *)0x0;
  }
  else {
    DAT_00438ea0 = FUN_00422784(puVar4);
  }
  DAT_0043da10 = DAT_00438ea0;
  puVar4 = FUN_00435120(0x34d);
  if (puVar4 == (uint *)0x0) {
    DAT_0053d640 = (undefined4 *)0x0;
  }
  else {
    DAT_0053d640 = FUN_00407628(puVar4,param_1);
  }
  FUN_0042ed78(&DAT_0043d908,(byte *)s__sDATA__s_004382c7);
  puVar4 = FUN_00435120(0x12);
  if (puVar4 == (uint *)0x0) {
    DAT_0053d630 = (int *)0x0;
  }
  else {
    DAT_0053d630 = FUN_00426f60((int *)puVar4);
  }
  FUN_004274c0((int)DAT_0053d640,0,0,*(int *)((int)DAT_0053d640 + 0x32),
               *(int *)((int)DAT_0053d640 + 0x36));
  iVar8 = *(int *)((int)DAT_0053d640 + 0x36);
  DAT_0043da18 = iVar8 / 0x28;
  DAT_0043dc70 = (undefined2)(iVar8 / 3);
  DAT_0043dc72 = (undefined2)(-iVar8 / 3);
  DAT_0043dc74 = 0x42;
  DAT_0043dc76 = 0xffbe;
  DAT_0043dc7a = 5;
  FUN_0040dab4();
  iVar8 = 1000;
  pcVar6 = &DAT_0043dcd0;
  while( true ) {
    DAT_0043f2bc = (uint)(*pcVar6 == DAT_0043fa8c);
    if (pcVar6[1] == DAT_0043fa8d) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[2] == DAT_0043fa8e) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[3] == DAT_0043fa8f) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[4] == DAT_0043fa90) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[5] == DAT_0043fa91) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[6] == DAT_0043fa92) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[7] == DAT_0043fa93) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[8] == DAT_0043fa94) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (pcVar6[9] == DAT_0043fa95) {
      DAT_0043f2bc = DAT_0043f2bc + 1;
    }
    if (DAT_0043f2bc == 10) break;
    iVar8 = iVar8 + 1;
    pcVar6 = pcVar6 + 0xb;
    if (0x5dc < iVar8) {
      return;
    }
  }
  return;
}

