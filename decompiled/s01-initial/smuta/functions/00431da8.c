/* Ghidra address: 00431da8; FUN_00431da8 */

void FUN_00431da8(void)

{
  char *pcVar1;
  uint uVar2;
  HANDLE hFile;
  DWORD nNumberOfBytesToWrite;
  LPCSTR lpCaption;
  LPCSTR in_stack_00000004;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_58 [80];
  DWORD local_8;
  
  if (DAT_00438c68 == (char *)0x0) {
    if (DAT_00434059 != '\0') {
      GetModuleFileNameA((HMODULE)0x0,local_58,0x50);
      pcVar1 = FUN_0042926c();
      if ((pcVar1 == (char *)0x0) && (pcVar1 = FUN_0042926c(), pcVar1 == (char *)0x0)) {
        lpCaption = local_58;
      }
      else {
        lpCaption = pcVar1 + 1;
      }
      uVar2 = FUN_00431d60();
      MessageBoxA((HWND)0x0,in_stack_00000004,lpCaption,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_00438c6c,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_00429114();
    WriteFile(hFile,in_stack_00000004,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_00438c6f,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_00438c68 == (char *)0xffffffff) {
    return;
  }
  if (DAT_00438c68 == (char *)0x0) {
    return;
  }
  if (*DAT_00438c68 == '\0') {
    return;
  }
  FUN_00431f10();
  return;
}

