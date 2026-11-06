/* Ghidra address: 0042aceb; FUN_0042aceb */

uint * __cdecl FUN_0042aceb(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = FUN_00435c48(param_1);
  if (puVar1 != (uint *)0x0) {
    return puVar1;
  }
  if (param_1 < 0x81) {
    iVar2 = FUN_004010f9();
    if ((*(byte *)(iVar2 + 4) & 1) == 0) goto LAB_0042ad18;
  }
  FUN_004365f0();
LAB_0042ad18:
  iVar2 = FUN_004010f9();
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
  iVar2 = FUN_004010f9();
  return *(uint **)(iVar2 + 0x28);
}

