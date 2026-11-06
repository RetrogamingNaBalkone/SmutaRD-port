/* Ghidra address: 0042e074; FUN_0042e074 */

undefined4
FUN_0042e074(undefined4 param_1,undefined4 param_2,DWORD param_3,uint param_4,LPVOID param_5,
            DWORD param_6)

{
  undefined4 uVar1;
  BOOL BVar2;
  DWORD local_8;
  
  local_8 = param_3;
  if (DAT_00437f24 <= param_4) {
    uVar1 = FUN_0042dfc8();
    return uVar1;
  }
  BVar2 = ReadFile(*(HANDLE *)(&DAT_0049ab1c + param_4 * 4),param_5,param_6,&local_8,
                   (LPOVERLAPPED)0x0);
  if (BVar2 != 1) {
    uVar1 = FUN_0042e02c();
    return uVar1;
  }
  return local_8;
}

