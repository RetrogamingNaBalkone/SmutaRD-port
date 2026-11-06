/* Ghidra address: 0041a104; FUN_0041a104 */

void __cdecl FUN_0041a104(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x716);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x74a) + 0x31);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

