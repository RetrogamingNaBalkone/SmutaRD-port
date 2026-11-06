/* Ghidra address: 0040d81c; thunk_FUN_00548150 */

/* WARNING: Exceeded maximum restarts with more pending */

int __cdecl thunk_FUN_00548150(int param_1)

{
  SHORT SVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  int unaff_EBP;
  code *in_stack_00000000;
  
  if (((in_stack_00000000 < FUN_0040d875) || ((code *)0x40daaf < in_stack_00000000)) ||
     (*(int *)(unaff_EBP + 4) != 0x402089)) {
    iVar3 = FUN_0040d822(param_1);
    return iVar3;
  }
  if (((param_1 != 0x53) && (param_1 != 0x44)) &&
     (((hModule = GetModuleHandleA("USER32.dll"), hModule == (HMODULE)0x0 ||
       (pFVar2 = GetProcAddress(hModule,"MapVirtualKeyA"), pFVar2 == (FARPROC)0x0)) ||
      ((((iVar3 = (*pFVar2)(), iVar3 != 0x11 && (iVar3 != 0x1f)) && (iVar3 != 0x1e)) &&
       (iVar3 != 0x20)))))) {
    SVar1 = GetAsyncKeyState(param_1);
    return (int)SVar1;
  }
  return 0;
}

