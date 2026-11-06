/* Ghidra address: 0042ae24; FUN_0042ae24 */

void __cdecl FUN_0042ae24(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_004362c4(s__ctorMask___0x0100_____0_____cto_0043a58c,s_XX_CPP_0043a5c1,0x1e1);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_004362c4(s__ctorMask___0x0080_____0_0043a5c8,s_XX_CPP_0043a5e1,0x1e3);
  }
  if ((param_4 & 0x1000) == 0) {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_004362c4(s___what___0043a604,s_XX_CPP_0043a60d,0x23a);
    }
  }
  else {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,0,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_004362c4(s___what___0043a5ee,s_XX_CPP_0043a5f7,0x20e);
    }
  }
  return;
}

