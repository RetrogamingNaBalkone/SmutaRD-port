/* Ghidra address: 00437684; FUN_00437684 */

void __cdecl FUN_00437684(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43ccac);
  *(int *)(param_1 + 10) = param_2;
  puVar1 = FUN_004360dc(*(uint **)(param_1 + 2),param_2 + 1);
  *(uint **)(param_1 + 2) = puVar1;
  if (puVar1 == (uint *)0x0) {
    FUN_0042a4f0((undefined4 *)&DAT_0043c6fc);
  }
  *in_FS_OFFSET = local_28;
  return;
}

