/* Ghidra address: 0042cdc4; FUN_0042cdc4 */

int __cdecl FUN_0042cdc4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0042b3bd((uint *)&DAT_0042d2ec,(undefined4 *)&DAT_0053e160,0,(undefined *)0x0,0,0,0,0);
  }
  iVar1 = param_2 - *(int *)(param_2 + -4);
  if (*(int *)(iVar1 + -4) != 0) {
    FUN_004362c4(s___unsigned___far___vtablePtr___1_0043add4,s_XXTYPE_CPP_0043adfb,0x27f);
  }
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(iVar1 + -0xc);
  return param_4;
}

