/* Ghidra address: 0040bac8; FUN_0040bac8 */

undefined4 __cdecl FUN_0040bac8(int param_1)

{
  undefined4 uVar1;
  undefined *local_8;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == -0x7789fde4) {
    return 1;
  }
  FUN_0042ed78(&DAT_004cf7f0,(byte *)s_DDraw_error_code___d_00439379);
  local_8 = &DAT_004cf7f0;
  uVar1 = FUN_0042b3bd((uint *)&DAT_00402f2c,&local_8,0,(undefined *)0x0,0,0,0,0);
  return uVar1;
}

