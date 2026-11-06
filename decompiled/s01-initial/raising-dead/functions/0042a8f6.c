/* Ghidra address: 0042a8f6; FUN_0042a8f6 */

void __stdcall FUN_0042a8f6(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43a41c);
  iVar2 = FUN_004010f9();
  if ((**(int **)(iVar2 + 0xc) != 0) && (DAT_0043a4c0 == 0)) {
    ___lockDebuggerData_qv();
    iVar2 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x14) = 5;
    iVar2 = FUN_004010f9();
    uVar1 = *(undefined4 *)(iVar2 + 0x14);
    iVar2 = FUN_004010f9();
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x18) = uVar1;
    iVar2 = FUN_004010f9();
    (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))();
    ___unlockDebuggerData_qv();
    DAT_0043a4c0 = 0;
  }
  FUN_0042fcf4();
  iVar2 = FUN_004010f9();
  (**(code **)(iVar2 + 0x14))();
  FUN_004365f0();
  *in_FS_OFFSET = local_28;
  return;
}

