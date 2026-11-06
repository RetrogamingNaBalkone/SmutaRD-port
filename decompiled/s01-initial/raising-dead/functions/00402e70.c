/* Ghidra address: 00402e70; FUN_00402e70 */

void __cdecl FUN_00402e70(undefined4 param_1,undefined4 param_2)

{
  CHAR local_110 [256];
  undefined **local_10;
  short local_c;
  
  DAT_0043f2c0 = param_1;
  DAT_0043f2c4 = param_2;
  FUN_00402d54(local_110);
  if (DAT_004d09fc != 0) {
    FUN_0041297c(DAT_004d09fc,0x43f2c0);
  }
  FUN_0040cf10((int *)&local_10);
  FUN_0040d084((int)&local_10,(char *)&DAT_0043f2c0,0x8c);
  local_10 = &PTR_FUN_004382f8;
  if (local_c != 0) {
    (*(code *)PTR_FUN_00438300)();
  }
  return;
}

