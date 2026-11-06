/* Ghidra address: 004066e0; FUN_004066e0 */

void FUN_004066e0(void)

{
  BOOL BVar1;
  MCIERROR in_stack_00000004;
  LPCSTR in_stack_00000008;
  CHAR local_104 [256];
  
  if (DAT_00443d90 != 0) {
    BVar1 = mciGetErrorStringA(in_stack_00000004,local_104,0x100);
    if (BVar1 == 0) {
      MessageBoxA((HWND)0x0,&DAT_00434e5a,s_MCI_ERROR_00434e6d,0x30);
    }
    else {
      MessageBoxA((HWND)0x0,local_104,in_stack_00000008,0x30);
    }
  }
  return;
}

