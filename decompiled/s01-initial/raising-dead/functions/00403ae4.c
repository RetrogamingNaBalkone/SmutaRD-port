/* Ghidra address: 00403ae4; FUN_00403ae4 */

void __cdecl FUN_00403ae4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  UINT UVar1;
  UINT UVar2;
  
  UVar1 = GetPrivateProfileIntA(PTR_DAT_00438320,s_Video_00438489,0,(LPCSTR)&DAT_0043f350);
  UVar2 = GetPrivateProfileIntA(PTR_DAT_00438320,&DAT_0043848f,6,(LPCSTR)&DAT_0043f350);
  DAT_004381bc = (undefined2)UVar2;
  if ((int)UVar1 < 0xb) {
    *param_1 = 1;
  }
  else {
    UVar1 = UVar1 - 10;
    *param_1 = 2;
  }
  switch(UVar1) {
  case 0:
    *param_2 = 0x140;
    *param_3 = 200;
    break;
  case 1:
    *param_2 = 0x140;
    *param_3 = 0xf0;
    break;
  case 2:
    *param_2 = 0x280;
    *param_3 = 400;
    break;
  case 3:
    *param_2 = 0x280;
    *param_3 = 0x1e0;
    break;
  case 4:
    *param_2 = 800;
    *param_3 = 600;
    break;
  case 5:
    *param_2 = 0x400;
    *param_3 = 0x300;
    break;
  default:
    *param_1 = 1;
    *param_2 = 0x140;
    *param_3 = 0xf0;
  }
  return;
}

