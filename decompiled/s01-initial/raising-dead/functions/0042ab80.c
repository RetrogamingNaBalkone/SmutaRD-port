/* Ghidra address: 0042ab80; FUN_0042ab80 */

LONG __cdecl FUN_0042ab80(PEXCEPTION_RECORD param_1,PVOID param_2,PCONTEXT param_3)

{
  LONG LVar1;
  int iVar2;
  _EXCEPTION_POINTERS local_c;
  
  if (param_1->ExceptionCode == 0xeedfad6) {
    LVar1 = 0;
  }
  else {
    if ((param_1->ExceptionCode == 0xeefface) || (param_1->ExceptionCode == 0xeedface)) {
      FUN_0042acc6(param_2,param_1);
      FUN_0042a8f6();
    }
    if ((param_1->ExceptionCode == 0xc00000fd) && (DAT_0043a4ac != 0)) {
      FUN_0043647c();
    }
    if ((DAT_0053e150 != (code *)0x0) && (iVar2 = (*DAT_0053e150)(), iVar2 == 0)) {
      return 0;
    }
    if ((DAT_0053e14c != (code *)0x0) && (iVar2 = (*DAT_0053e14c)(), iVar2 == 0)) {
      return 0;
    }
    local_c.ExceptionRecord = param_1;
    local_c.ContextRecord = param_3;
    LVar1 = UnhandledExceptionFilter(&local_c);
  }
  return LVar1;
}

