/* Ghidra address: 004a300e; FUN_004a300e */

uint FUN_004a300e(void)

{
  SHORT SVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  
  uVar7 = 0;
  sVar5 = DAT_004346b4;
  if (0x100 < DAT_004346b4) {
    sVar5 = 0x100;
  }
  if (sVar5 < -0x100) {
    sVar5 = -0x100;
  }
  sVar6 = DAT_004346b8;
  if (0x100 < DAT_004346b8) {
    sVar6 = 0x100;
  }
  if (sVar6 < -0x100) {
    sVar6 = -0x100;
  }
  if (sVar6 < 1) {
    if (sVar6 < 0) {
      FUN_00424d20();
    }
  }
  else {
    FUN_00424d90();
  }
  if (sVar5 != 0) {
    if (sVar5 < 1) {
      uVar7 = 0x40000008;
    }
    else {
      uVar7 = 0x40000004;
    }
    iVar2 = FUN_004a320c();
    DAT_00435808 = (undefined2)iVar2;
  }
  SVar1 = GetAsyncKeyState(1);
  if (SVar1 != 0) {
    uVar7 = uVar7 | 0x200;
  }
  hModule = GetModuleHandleA(s_USER32_dll_004a3234);
  if (hModule != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(hModule,s_MapVirtualKeyA_004a323f);
    if (pFVar3 != (FARPROC)0x0) {
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x400;
      }
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x20;
      }
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x80000;
      }
      uVar4 = FUN_004a31fc();
      if ((uVar4 & 0x8000) != 0) {
        uVar7 = uVar7 | 0x100000;
      }
    }
  }
  if (DAT_00434278 == 1) {
    DAT_00434278 = 0;
    uVar7 = uVar7 | 0x20000000;
  }
  return uVar7;
}

