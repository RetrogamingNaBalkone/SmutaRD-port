/* Ghidra address: 0042b086; FUN_0042b086 */

void __cdecl FUN_0042b086(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_004362c4(s__mfnMask___0x0080_____0_0043a64a,s_XX_CPP_0043a662,0x2da);
  }
  uVar1 = param_3 & 7;
  if (uVar1 == 1) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 2) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 3) {
    (*(code *)param_2)(param_1);
    return;
  }
  if (uVar1 == 5) {
    (*(code *)param_2)();
    return;
  }
  FUN_004362c4(s___what___0043a66f,s_XX_CPP_0043a678,0x301);
  return;
}

