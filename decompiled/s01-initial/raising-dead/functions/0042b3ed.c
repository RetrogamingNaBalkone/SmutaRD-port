/* Ghidra address: 0042b3ed; FUN_0042b3ed */

void __cdecl FUN_0042b3ed(uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000000;
  
  piVar2 = (int *)FUN_004010f9();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    FUN_0042a8f6();
  }
  if (*(char *)(iVar1 + 0x44) == '\0') {
    puVar3 = *(undefined4 **)(iVar1 + 0x40);
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 0x46);
  }
  FUN_0042b104(*(uint **)(iVar1 + 4),puVar3,*(uint *)(iVar1 + 8),*(undefined **)(iVar1 + 0x20),
               *(uint *)(iVar1 + 0x24),*(uint *)(iVar1 + 0xc),param_1,param_2,in_stack_00000000,1);
  return;
}

