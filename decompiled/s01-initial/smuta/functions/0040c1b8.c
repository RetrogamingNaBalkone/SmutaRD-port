/* Ghidra address: 0040c1b8; FUN_0040c1b8 */

void FUN_0040c1b8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_28 [9];
  
  puVar2 = &DAT_00435588;
  puVar3 = local_28;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0040bd98();
  return;
}

