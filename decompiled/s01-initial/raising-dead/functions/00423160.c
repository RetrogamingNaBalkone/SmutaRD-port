/* Ghidra address: 00423160; FUN_00423160 */

void __cdecl FUN_00423160(MCIERROR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  char *lpText;
  char *lpCaption;
  UINT uType;
  CHAR local_104 [256];
  
  if (DAT_0043f788 != 0) {
    BVar1 = mciGetErrorStringA(param_1,local_104,0x100);
    if (BVar1 == 0) {
      uType = 0x30;
      lpCaption = s_MCI_ERROR_00439f86;
      lpText = FUN_00404d88(0x40);
      MessageBoxA((HWND)0x0,lpText,lpCaption,uType);
    }
    else {
      MessageBoxA((HWND)0x0,local_104,param_2,0x30);
    }
  }
  return;
}

