/* Ghidra address: 004233dc; FUN_004233dc */

undefined4 FUN_004233dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 local_6;
  
  FUN_00423210();
  FUN_0041da94();
  local_6 = (short)((uint)param_3 >> 0x10);
  if ((local_6 < 0x2e) || (0x13a < local_6)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

