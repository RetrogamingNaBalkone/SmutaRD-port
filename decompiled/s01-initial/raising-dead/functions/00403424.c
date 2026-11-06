/* Ghidra address: 00403424; FUN_00403424 */

void __cdecl FUN_00403424(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_00402974();
  if (iVar1 == 10) {
    puVar2 = FUN_00435120(0x1a);
    if (puVar2 != (uint *)0x0) {
      FUN_00403458(puVar2,*(undefined4 *)(param_1 + 4),1);
    }
  }
  return;
}

