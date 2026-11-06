/* Ghidra address: 004376d4; FUN_004376d4 */

int __cdecl FUN_004376d4(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43ccb8);
  iVar1 = ((((param_1 - DAT_0043cce0) + DAT_0043cce4) - 1) / DAT_0043cce4) * DAT_0043cce4 +
          DAT_0043cce0;
  *in_FS_OFFSET = local_28;
  return iVar1;
}

