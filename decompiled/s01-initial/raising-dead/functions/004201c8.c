/* Ghidra address: 004201c8; FUN_004201c8 */

void __stdcall FUN_004201c8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00420218(DAT_004f92c4);
  FUN_0042015c(0x4fa730,DAT_004fa72c);
  puVar1 = &DAT_004fa730;
  for (iVar2 = 0; iVar2 < DAT_004fa72c; iVar2 = iVar2 + 1) {
    (**(code **)(*(int *)*puVar1 + 8))();
    puVar1 = puVar1 + 1;
  }
  return;
}

