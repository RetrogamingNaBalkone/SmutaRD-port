/* Ghidra address: 0043201c; FUN_0043201c */

void __cdecl FUN_0043201c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | param_2 & 0xff;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2 & 0xfffffcff;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2 & 0xfffffdff;
  return;
}

