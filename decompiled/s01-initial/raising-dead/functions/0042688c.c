/* Ghidra address: 0042688c; FUN_0042688c */

undefined4 __cdecl
FUN_0042688c(short param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return CONCAT22((short)((uint)param_2 >> 0x10),1);
    }
    if ((param_3 <= *param_2) && (iVar1 = *param_2, param_2 = param_2 + 1, iVar1 <= param_5)) break;
    if ((param_4 <= *param_2) && (iVar1 = *param_2, param_2 = param_2 + 1, iVar1 <= param_6)) {
      return 0;
    }
    param_1 = param_1 + -1;
  }
  return 0;
}

