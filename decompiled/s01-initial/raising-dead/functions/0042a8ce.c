/* Ghidra address: 0042a8ce; FUN_0042a8ce */

undefined4 __cdecl FUN_0042a8ce(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_004010f9();
  uVar1 = *(undefined4 *)(iVar2 + 0x14);
  if (param_1 != 0) {
    iVar2 = FUN_004010f9();
    *(int *)(iVar2 + 0x14) = param_1;
  }
  return uVar1;
}

