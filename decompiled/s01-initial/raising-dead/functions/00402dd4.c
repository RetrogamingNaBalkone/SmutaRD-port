/* Ghidra address: 00402dd4; FUN_00402dd4 */

undefined4 __cdecl FUN_00402dd4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CHAR local_110 [256];
  undefined **local_10;
  short local_c;
  
  iVar1 = FUN_00402d54(local_110);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0040cf10((int *)&local_10);
    FUN_0040cfe4((int)&local_10,(char *)&DAT_0043f2c0,0x8c);
    if (DAT_004d09fc != (int *)0x0) {
      FUN_004128bc(DAT_004d09fc,0x43f2c0);
    }
    *param_1 = DAT_0043f2c0;
    *param_2 = DAT_0043f2c4;
    uVar2 = 1;
    local_10 = &PTR_FUN_004382f8;
    if (local_c != 0) {
      (*(code *)PTR_FUN_00438300)();
    }
  }
  return uVar2;
}

