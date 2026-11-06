/* Ghidra address: 00434c3c; FUN_00434c3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00434c3c(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint local_74 [20];
  int local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_24 = param_1;
  local_20 = param_2;
  local_1c = _DAT_00434ce0;
  if (param_3 != (undefined8 *)0x0) {
    local_1c = *param_3;
  }
  local_14 = _DAT_00434ce0;
  if (param_4 != (undefined8 *)0x0) {
    local_14 = *param_4;
  }
  local_c = param_5;
  uStack_8 = param_6;
  iVar1 = (*(code *)PTR_FUN_0043c50c)();
  if (iVar1 == 0) {
    FUN_0042ed78((undefined1 *)local_74,(byte *)s__s___s_error_0043c5e4);
    if (param_1 - 2U < 3) {
      DAT_0043c8b4 = 0x22;
    }
    else {
      DAT_0043c8b4 = 0x21;
    }
    FUN_0043638c(local_74);
  }
  return;
}

