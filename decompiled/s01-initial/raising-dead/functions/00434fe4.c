/* Ghidra address: 00434fe4; FUN_00434fe4 */

int __cdecl FUN_00434fe4(char *param_1,int param_2)

{
  int iVar1;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  
  iVar1 = -1;
  while( true ) {
    if (*param_1 == '\0') {
      return -1;
    }
    iVar1 = FUN_00434e60(CONCAT31((int3)((uint)in_EDX >> 8),*param_1),iVar1);
    if (param_2 == 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
    in_EDX = extraout_EDX;
  }
  return iVar1;
}

