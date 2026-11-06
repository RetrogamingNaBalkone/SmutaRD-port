/* Ghidra address: 0042b47f; FUN_0042b47f */

void __cdecl FUN_0042b47f(undefined4 param_1,int param_2,undefined *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43a518);
  if (param_3 == (undefined *)0x0) {
    FUN_004362c4(s_dtorAddr_0043a68f,s_XX_CPP_0043a698,0x567);
  }
  FUN_0042af32(param_1,param_2,0,param_3,param_4,1);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

