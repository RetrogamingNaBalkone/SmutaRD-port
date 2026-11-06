/* Ghidra address: 0042339c; FUN_0042339c */

void FUN_0042339c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined2 local_6;
  
  puVar1 = FUN_00423210();
  local_6 = (undefined2)((uint)param_3 >> 0x10);
  FUN_00423354(CONCAT22((short)((uint)puVar1 >> 0x10),local_6),extraout_EDX,extraout_ECX,param_4,
               local_6);
  FUN_0041ebec();
  return;
}

