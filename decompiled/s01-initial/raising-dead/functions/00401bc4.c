/* Ghidra address: 00401bc4; FUN_00401bc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00401bc4(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined2 local_10 [6];
  
  iVar6 = 1000;
  pcVar2 = &DAT_0043dcd0;
  do {
    uVar7 = (uint)(*pcVar2 == DAT_0043fa8c);
    if (pcVar2[1] == DAT_0043fa8d) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[2] == DAT_0043fa8e) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[3] == DAT_0043fa8f) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[4] == DAT_0043fa90) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[5] == DAT_0043fa91) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[6] == DAT_0043fa92) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[7] == DAT_0043fa93) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[8] == DAT_0043fa94) {
      uVar7 = uVar7 + 1;
    }
    if (pcVar2[9] == DAT_0043fa95) {
      uVar7 = uVar7 + 1;
    }
    if (uVar7 == 10) break;
    iVar6 = iVar6 + 1;
    pcVar2 = pcVar2 + 0xb;
  } while (iVar6 < 0x5dd);
  FUN_00401558();
  DAT_004381b4 = 0;
  DAT_004381f8 = 0;
  DAT_004381c0 = 0;
  DAT_004381be = 0;
  DAT_00439c02 = 0;
  DAT_00439c00 = 0;
  DAT_0043a18c = 0;
  DAT_0043dc78 = 0;
  DAT_0043dc6c = 0;
  DAT_0043dc68 = 0;
  DAT_0043dc64 = 0;
  DAT_0043dc60 = 0;
  FUN_00416284();
  FUN_0040dab4();
  DAT_00438228 = param_2;
  DAT_004381da = DAT_004381bc;
  DAT_00438210 = 0;
  DAT_00438218 = (short *)0x0;
  _DAT_0043821c = 1;
  _DAT_0043821e = 0;
  _DAT_00438220 = 0;
  _DAT_00438222 = 1;
  DAT_00438224 = (int *)0x0;
  DAT_0043822c = 1;
  _DAT_00438230 = 0;
  DAT_00438234 = 0;
  DAT_0043820c = 4;
  uVar3 = FUN_00433130();
  DAT_0043a030 = (undefined2)uVar3;
  if (*(int *)(DAT_0053d640 + 0x32) < 0x280) {
    FUN_00406340(DAT_0053d640,2);
  }
  else {
    FUN_00406340(DAT_0053d640,1);
  }
  DAT_0043da1c = param_1;
  _DAT_0043da20 = s_BsintRO1_004382d1;
  _DAT_0043da24 = s_EsintRO1_004382da;
  DAT_0043dc7c = 1;
  puVar4 = FUN_00435120(0xa1);
  if (puVar4 == (uint *)0x0) {
    DAT_004385a0 = (undefined4 *)0x0;
  }
  else {
    DAT_004385a0 = FUN_0040425c(puVar4);
  }
  _DAT_0043dc84 = (int)*(short *)((int)DAT_004385a0 + 0x5f);
  puVar4 = FUN_00435120(0x4b74);
  if (puVar4 == (uint *)0x0) {
    DAT_00438218 = (short *)0x0;
  }
  else {
    DAT_00438218 = FUN_004165f4((short *)puVar4,DAT_0043da1c);
  }
  pbVar5 = FUN_00416034(s_GAMEP1_004382e3);
  FUN_00429f54((undefined4 *)&DAT_0043d608,(undefined4 *)pbVar5,0x300);
  FUN_00422ab8(DAT_0043da10,&DAT_0043d608);
  DAT_0043dccc = *(int *)(DAT_00438218 + 0x221);
  uVar3 = FUN_00411f60(DAT_0043dccc);
  DAT_0043dc88 = (int)(short)uVar3;
  puVar8 = (undefined4 *)(DAT_0043dccc + 0x31);
  puVar9 = &DAT_0043dc98;
  for (iVar6 = 0xd; iVar1 = DAT_0053d640, iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  _DAT_004381f0 = DAT_0053d640;
  uVar3 = FUN_00433130();
  _DAT_004381c8 = (undefined2)uVar3;
  _DAT_004381c6 = *(undefined2 *)(iVar1 + 0x32);
  DAT_0043da14 = 0;
  if (DAT_00438228 == 1) {
    puVar4 = FUN_00435120(8);
    if (puVar4 == (uint *)0x0) {
      DAT_00438224 = (int *)0x0;
    }
    else {
      FUN_00401500();
      DAT_00438224 = FUN_00426e08(puVar4);
    }
  }
  else if (DAT_00438228 == 2) {
    puVar4 = FUN_00435120(8);
    if (puVar4 == (uint *)0x0) {
      DAT_00438224 = (int *)0x0;
    }
    else {
      DAT_00438224 = FUN_00426dd8((int *)puVar4);
    }
  }
  FUN_00429e84(local_10);
  DAT_0043dc8c = FUN_00429edc();
  DAT_0043dc90 = 0;
  DAT_0043820c = 0;
  FUN_0040dab4();
  _DAT_004381c8 = *(undefined2 *)(DAT_0053d640 + 0x36);
  _DAT_0043dc84 = 1;
  FUN_00429ef0((short *)&DAT_0043db50);
  FUN_00429e9c((short *)&DAT_0043db50);
  FUN_0040bbd8();
  return;
}

