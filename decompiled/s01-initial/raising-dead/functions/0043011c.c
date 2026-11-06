/* Ghidra address: 0043011c; FUN_0043011c */

undefined4 __cdecl FUN_0043011c(uint param_1,LPCVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  if (DAT_0043b4c0 <= param_1) {
    uVar1 = FUN_0043000c(6);
    return uVar1;
  }
  BVar2 = WriteFile(*(HANDLE *)(&DAT_0053e22c + param_1 * 4),param_2,param_3,&local_8,
                    (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_00430070();
    return uVar1;
  }
  return local_8;
}

