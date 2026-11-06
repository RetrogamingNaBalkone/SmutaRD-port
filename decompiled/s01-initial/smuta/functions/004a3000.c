/* Ghidra address: 004a3000; FUN_004a3000 */

uint FUN_004a3000(void)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  uint uVar5;
  short sVar6;
  int unaff_EBP;
  short sVar7;
  
  if (*(int *)(unaff_EBP + 4) != 0x425411) {
    uVar2 = FUN_0040fc08();
    return uVar2;
  }
  uVar2 = 0;
  sVar6 = DAT_004346b4;
  if (0x100 < DAT_004346b4) {
    sVar6 = 0x100;
  }
  if (sVar6 < -0x100) {
    sVar6 = -0x100;
  }
  sVar7 = DAT_004346b8;
  if (0x100 < DAT_004346b8) {
    sVar7 = 0x100;
  }
  if (sVar7 < -0x100) {
    sVar7 = -0x100;
  }
  if (sVar7 < 1) {
    if (sVar7 < 0) {
      FUN_00424d20();
    }
  }
  else {
    FUN_00424d90();
  }
  if (sVar6 != 0) {
    if (sVar6 < 1) {
      uVar2 = 0x40000008;
    }
    else {
      uVar2 = 0x40000004;
    }
    iVar3 = FUN_004a320c();
    DAT_00435808 = (undefined2)iVar3;
  }
  SVar1 = GetAsyncKeyState(1);
  if (SVar1 != 0) {
    uVar2 = uVar2 | 0x200;
  }
  hModule = GetModuleHandleA(s_USER32_dll_004a3234);
  if (hModule != (HMODULE)0x0) {
    pFVar4 = GetProcAddress(hModule,s_MapVirtualKeyA_004a323f);
    if (pFVar4 != (FARPROC)0x0) {
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x400;
      }
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x20;
      }
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      uVar5 = FUN_004a31fc();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x100000;
      }
    }
  }
  if (DAT_00434278 == 1) {
    DAT_00434278 = 0;
    uVar2 = uVar2 | 0x20000000;
  }
  return uVar2;
}

