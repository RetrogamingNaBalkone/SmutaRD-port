/* Ghidra address: 0040a7a4; FUN_0040a7a4 */

undefined4
FUN_0040a7a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            short param_5)

{
  undefined4 uVar1;
  
  if (DAT_0043547c != (int *)0x0) {
    if (param_5 != 0) {
      param_3 = param_4;
      FUN_0040a7fc();
    }
    uVar1 = (**(code **)(*DAT_0043547c + 0x10))
                      (DAT_0043547c,*DAT_0043547c,param_3,DAT_0043547c,param_4);
    return uVar1;
  }
  return 0;
}

