/* Ghidra address: 0042ad35; FUN_0042ad35 */

void __cdecl FUN_0042ad35(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004010f9();
  if (param_1 == *(int *)(iVar1 + 0x28)) {
    iVar1 = FUN_004010f9();
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    return;
  }
  FUN_00435b40(param_1);
  return;
}

