/* Ghidra address: 0043638c; FUN_0043638c */

void __cdecl FUN_0043638c(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  HANDLE hFile;
  char *nNumberOfBytesToWrite;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  byte local_58 [80];
  DWORD local_8;
  
  if (DAT_0043c8d8 == (LPCSTR)0x0) {
    if (DAT_00438142 != '\0') {
      GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_58,0x50);
      pbVar1 = FUN_00435068(local_58,0x5c);
      if ((pbVar1 == (byte *)0x0) && (pbVar1 = FUN_00435068(local_58,0x3a), pbVar1 == (byte *)0x0))
      {
        pbVar1 = local_58;
      }
      else {
        pbVar1 = pbVar1 + 1;
      }
      uVar2 = FUN_00436344();
      MessageBoxA((HWND)0x0,(LPCSTR)param_1,(LPCSTR)pbVar1,uVar2 | 0x10010);
      return;
    }
    hFile = GetStdHandle(0xfffffff4);
    WriteFile(hFile,&DAT_0043c8dc,2,&local_8,(LPOVERLAPPED)0x0);
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = &local_8;
    nNumberOfBytesToWrite = FUN_0042a144(param_1);
    WriteFile(hFile,param_1,(DWORD)nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    WriteFile(hFile,&DAT_0043c8df,2,&local_8,(LPOVERLAPPED)0x0);
    return;
  }
  if (DAT_0043c8d8 == (LPCSTR)0xffffffff) {
    return;
  }
  if (DAT_0043c8d8 == (LPCSTR)0x0) {
    return;
  }
  if (*DAT_0043c8d8 == '\0') {
    return;
  }
  FUN_004364f4(DAT_0043c8d8,param_1);
  return;
}

