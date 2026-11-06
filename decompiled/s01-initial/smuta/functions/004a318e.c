/* Ghidra address: 004a318e; FUN_004a318e */

/* WARNING: Exceeded maximum restarts with more pending */

int FUN_004a318e(void)

{
  SHORT SVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  int unaff_EBP;
  int in_stack_00000004;
  
  if (*(int *)(unaff_EBP + 4) != 0x425411) {
    SVar1 = GetAsyncKeyState(in_stack_00000004);
    return (int)SVar1;
  }
  if (((in_stack_00000004 != 0x53) && (in_stack_00000004 != 0x44)) &&
     (((hModule = GetModuleHandleA(s_USER32_dll_004a3234), hModule == (HMODULE)0x0 ||
       (pFVar2 = GetProcAddress(hModule,s_MapVirtualKeyA_004a323f), pFVar2 == (FARPROC)0x0)) ||
      ((((iVar3 = (*pFVar2)(), iVar3 != 0x11 && (iVar3 != 0x1f)) && (iVar3 != 0x1e)) &&
       (iVar3 != 0x20)))))) {
    SVar1 = GetAsyncKeyState(in_stack_00000004);
    return (int)SVar1;
  }
  return 0;
}

