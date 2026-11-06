/* Ghidra address: 0042a9d6; FUN_0042a9d6 */

void __stdcall FUN_0042a9d6(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_004010f9();
  if (**(int **)(iVar2 + 0xc) != 0) {
    ___lockDebuggerData_qv();
    iVar2 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x14) = 4;
    iVar2 = FUN_004010f9();
    uVar1 = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18) = uVar1;
    DAT_0043a4c0 = 1;
    iVar2 = FUN_004010f9();
    (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))();
    ___unlockDebuggerData_qv();
  }
  iVar2 = FUN_004010f9();
  (**(code **)(iVar2 + 0x18))();
  FUN_004365f0();
  return;
}

