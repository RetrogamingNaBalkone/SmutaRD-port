/* Ghidra address: 0042b9a8; thunk_FUN_0042e284 */

int thunk_FUN_0042e284(void)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  DWORD dwFlagsAndAttributes;
  DWORD dwCreationDisposition;
  LPCSTR in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  _SECURITY_ATTRIBUTES _Stack_18;
  DWORD DStack_c;
  DWORD DStack_8;
  
  uVar2 = in_stack_00000008 & 0x700;
  if (uVar2 < 0x501) {
    if (uVar2 == 0x500) {
LAB_0042e2ef:
      dwCreationDisposition = 1;
      goto LAB_0042e310;
    }
    if (uVar2 == 0x100) {
      dwCreationDisposition = 4;
      goto LAB_0042e310;
    }
    if (uVar2 != 0x200) {
      if (uVar2 == 0x300) {
        dwCreationDisposition = 2;
        goto LAB_0042e310;
      }
      goto LAB_0042e30b;
    }
  }
  else if (uVar2 != 0x600) {
    if (uVar2 != 0x700) {
LAB_0042e30b:
      dwCreationDisposition = 3;
      goto LAB_0042e310;
    }
    goto LAB_0042e2ef;
  }
  dwCreationDisposition = 5;
LAB_0042e310:
  if ((in_stack_00000008 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(in_stack_00000004);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((in_stack_0000000c & DAT_00438570 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar2 = in_stack_00000008 & 3;
  if (uVar2 == 0) {
    DStack_8 = 0x80000000;
  }
  else if (uVar2 == 1) {
    DStack_8 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      iVar1 = FUN_0042dfc8();
      return iVar1;
    }
    DStack_8 = 0xc0000000;
  }
  uVar2 = in_stack_00000008 & 0x70;
  if (uVar2 == 0x10) {
    DStack_c = 0;
  }
  else if (uVar2 == 0x20) {
    DStack_c = 1;
  }
  else if (uVar2 == 0x30) {
    DStack_c = 2;
  }
  else {
    DStack_c = 3;
  }
  _Stack_18.nLength = 0xc;
  _Stack_18.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_18.bInheritHandle = (BOOL)((in_stack_00000008 & 0x80) == 0);
  hObject = CreateFileA(in_stack_00000004,DStack_8,DStack_c,&_Stack_18,dwCreationDisposition,
                        dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    GetLastError();
    iVar1 = FUN_0042dfc8();
  }
  else {
    FUN_0042e1f4();
    iVar1 = FUN_0042dd24();
    if (iVar1 == -1) {
      FUN_0042dfc8();
      CloseHandle(hObject);
    }
  }
  return iVar1;
}

