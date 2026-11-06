/* Ghidra address: 00548014; FUN_00548014 */

uint __stdcall FUN_00548014(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  uint uVar5;
  short sVar6;
  int unaff_EBP;
  short sVar7;
  
  if (*(int *)(unaff_EBP + 4) != 0x402089) {
    uVar2 = FUN_00424140();
    return uVar2;
  }
  uVar2 = 0;
  sVar6 = DAT_004397cc;
  if (0x100 < DAT_004397cc) {
    sVar6 = 0x100;
  }
  if (sVar6 < -0x100) {
    sVar6 = -0x100;
  }
  sVar7 = DAT_004397d0;
  if (0x100 < DAT_004397d0) {
    sVar7 = 0x100;
  }
  if (sVar7 < -0x100) {
    sVar7 = -0x100;
  }
  if (sVar7 < 1) {
    if (sVar7 < 0) {
      FUN_004016c4(-sVar7);
    }
  }
  else {
    FUN_00401734(sVar7);
  }
  if (sVar6 != 0) {
    if (sVar6 < 1) {
      uVar2 = 0x40000008;
    }
    else {
      uVar2 = 0x40000004;
    }
    iVar3 = FUN_00548226();
    DAT_0043a024 = (undefined2)iVar3;
  }
  uVar1 = GetAsyncKeyState(1);
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 | 0x200;
  }
  hModule = GetModuleHandleA("USER32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar4 = GetProcAddress(hModule,"MapVirtualKeyA");
    if (pFVar4 != (FARPROC)0x0) {
      uVar5 = FUN_00548216();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x400;
      }
      uVar5 = FUN_00548216();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x20;
      }
      uVar5 = FUN_00548216();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x80000;
      }
      uVar5 = FUN_00548216();
      if ((uVar5 & 0x8000) != 0) {
        uVar2 = uVar2 | 0x100000;
      }
    }
  }
  if (DAT_00439390 == 1) {
    DAT_00439390 = 0;
    uVar2 = uVar2 | 0x20000000;
  }
  return uVar2;
}

