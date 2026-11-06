/* Ghidra address: 004375d8; FUN_004375d8 */

void __cdecl FUN_004375d8(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43cc8c);
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) | 1;
  iVar1 = FUN_004376d4(param_2 + 1);
  if (DAT_0043cce8 < (uint)(*(int *)(param_1 + 10) - iVar1)) {
    puVar2 = FUN_004360dc(*(uint **)(param_1 + 2),iVar1 + 1);
    *(uint **)(param_1 + 2) = puVar2;
    *(int *)(param_1 + 10) = iVar1;
  }
  *in_FS_OFFSET = local_28;
  return;
}

