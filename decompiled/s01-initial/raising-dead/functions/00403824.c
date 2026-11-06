/* Ghidra address: 00403824; FUN_00403824 */

void __cdecl FUN_00403824(undefined4 *param_1,byte param_2)

{
  CHAR local_104 [256];
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00438524;
    FUN_0042ed78(local_104,&DAT_00438423);
    WritePrivateProfileStringA(PTR_DAT_00438320,&DAT_00438426,local_104,(LPCSTR)&DAT_0043f350);
    FUN_00402c40();
    FUN_0040c3d8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004350ec((int)param_1);
    }
  }
  return;
}

