/* Ghidra address: 0041b0b4; FUN_0041b0b4 */

void FUN_0041b0b4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0041b104();
  FUN_0041b048();
  puVar1 = &DAT_00493db0;
  for (iVar2 = 0; iVar2 < DAT_00493dac; iVar2 = iVar2 + 1) {
    (**(code **)(*(int *)*puVar1 + 8))();
    puVar1 = puVar1 + 1;
  }
  return;
}

