/* Ghidra address: 0040dd5c; FUN_0040dd5c */

void __cdecl FUN_0040dd5c(int param_1)

{
  uint uVar1;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (DAT_00439904 != 0) {
    FUN_00429fc4(&local_18,0,0x14);
    local_18 = 0x14;
    local_14 = 1;
    local_10 = 0;
    local_8 = 0;
    (**(code **)(**(int **)(DAT_00439904 + 10) + 0x18))();
    (**(code **)(**(int **)(DAT_00439904 + 10) + 0xc))();
    FUN_00429fc4((undefined4 *)&local_2c,0,0x12);
    local_2c = 1;
    local_2a = 1;
    local_28 = 0x5622;
    local_1e = 0x10;
    local_20 = 2;
    local_24 = 0xac44;
    local_1c = 0;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x38))();
    if ((uVar1 & 0xfff) == 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))();
      (**(code **)(**(int **)(param_1 + 0x18) + 0x30))();
    }
  }
  return;
}

