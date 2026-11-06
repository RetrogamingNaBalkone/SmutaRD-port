/* Ghidra address: 0042df80; thunk_FUN_004302c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl thunk_FUN_004302c8(LPCSTR param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  HANDLE hObject;
  undefined3 extraout_var;
  uint uVar3;
  DWORD dwFlagsAndAttributes;
  DWORD DVar4;
  _SECURITY_ATTRIBUTES _Stack_18;
  DWORD DStack_c;
  DWORD DStack_8;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | *(uint *)PTR_DAT_0043b590 & 0xc000;
  }
  if ((param_2 & 0x8000) == 0) {
    param_2 = param_2 | 0x4000;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x501) {
    if (uVar3 == 0x500) {
LAB_00430333:
      DVar4 = 1;
      goto LAB_00430354;
    }
    if (uVar3 == 0x100) {
      DVar4 = 4;
      goto LAB_00430354;
    }
    if (uVar3 != 0x200) {
      if (uVar3 == 0x300) {
        DVar4 = 2;
        goto LAB_00430354;
      }
      goto LAB_0043034f;
    }
  }
  else if (uVar3 != 0x600) {
    if (uVar3 != 0x700) {
LAB_0043034f:
      DVar4 = 3;
      goto LAB_00430354;
    }
    goto LAB_00430333;
  }
  DVar4 = 5;
LAB_00430354:
  if ((param_2 & 0x100) == 0) {
    dwFlagsAndAttributes = GetFileAttributesA(param_1);
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
    DStack_8 = 0x80000000;
  }
  else if (uVar3 == 1) {
    DStack_8 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      iVar2 = FUN_0043000c(1);
      return iVar2;
    }
    DStack_8 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if (uVar3 == 0x10) {
    DStack_c = 0;
  }
  else if (uVar3 == 0x20) {
    DStack_c = 1;
  }
  else if (uVar3 == 0x30) {
    DStack_c = 2;
  }
  else {
    DStack_c = 3;
  }
  _Stack_18.nLength = 0xc;
  _Stack_18.lpSecurityDescriptor = (LPVOID)0x0;
  _Stack_18.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  hObject = CreateFileA(param_1,DStack_8,DStack_c,&_Stack_18,DVar4,dwFlagsAndAttributes,(HANDLE)0x0)
  ;
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

