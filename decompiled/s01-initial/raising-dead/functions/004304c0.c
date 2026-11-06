/* Ghidra address: 004304c0; FUN_004304c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_004304c0(LPCWSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES local_18;
  DWORD local_c;
  DWORD local_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_0043b590 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_0043052b:
      DVar4 = 1;
      goto LAB_0043054c;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_0043054c;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_0043054c;
      }
      goto LAB_00430547;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_00430547:
      DVar4 = 3;
      goto LAB_0043054c;
    }
    goto LAB_0043052b;
  }
  DVar4 = 5;
LAB_0043054c:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesW(param_1);
    if (dwFlagsAndAttributes == 0xffffffff) {
      dwFlagsAndAttributes = 0;
    }
  }
  else if ((param_3 & _DAT_0043bb18 & 0x80) == 0) {
    dwFlagsAndAttributes = 1;
  }
  else {
    dwFlagsAndAttributes = 0x80;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_0043000c(1);
      return iVar2;
    }
    local_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    local_c = 0;
  }
  else if (uVar3 == 0x20) {
    local_c = 1;
  }
  else if (uVar3 == 0x30) {
    local_c = 2;
  }
  else {
    local_c = 3;
  }
  local_18.nLength = 0xc;
  local_18.lpSecurityDescriptor = (LPVOID)0x0;
  local_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileW(param_1,local_8,local_c,&local_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    uVar3 = DVar4 & 0xffff;
    if ((uVar3 == 0x6e) && (uVar3 = 0x50, (param_2 & 0x100) == 0)) {
      uVar3 = 2;
    }
    iVar2 = FUN_0043000c(uVar3);
  }
  else {
    bVar1 = FUN_00430238(hObject);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      param_2 = param_2 | 0x2000;
    }
    iVar2 = FUN_0042fd68(hObject,param_2 & 0xfffff8ff);
    if (iVar2 == -1) {
      FUN_0043000c(4);
      CloseHandle(hObject);
    }
  }
  return iVar2;
}

