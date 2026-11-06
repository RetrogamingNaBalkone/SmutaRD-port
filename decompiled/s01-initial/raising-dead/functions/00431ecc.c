/* Ghidra address: 00431ecc; FUN_00431ecc */

void __cdecl FUN_00431ecc(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | *(uint *)(param_1 + 0xc) & 0x80;
  *(uint *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff00 | uVar1;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffff00 | *(uint *)(param_1 + 0xc);
  return;
}

