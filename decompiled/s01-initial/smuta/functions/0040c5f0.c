/* Ghidra address: 0040c5f0; FUN_0040c5f0 */

void FUN_0040c5f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_20 [7];
  
  puVar2 = &DAT_004355ac;
  puVar3 = local_20;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0040bd98();
  return;
}

