/* Ghidra address: 00408064; FUN_00408064 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00408064(int *param_1,int param_2,int param_3,short *param_4,short param_5,short param_6)

{
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  FUN_0040b700();
  FUN_00435394(&local_34,0xc,4,1,FUN_004096bc);
  if (param_5 == 0) {
    param_5 = *param_4;
  }
  local_28 = param_5 + -1 + param_2;
  if (param_6 == 0) {
    param_6 = param_4[1];
  }
  local_34 = param_2;
  local_30 = param_3;
  local_24 = param_3;
  local_18 = param_6 + -1 + param_3;
  local_10 = param_2;
  local_8 = 0;
  local_14 = 0;
  local_20 = 0;
  local_2c = 0;
  _DAT_004c337c = 1;
  local_1c = local_28;
  local_c = local_18;
  (**(code **)(*param_1 + 0x50))();
  FUN_0040b7b4();
  return;
}

