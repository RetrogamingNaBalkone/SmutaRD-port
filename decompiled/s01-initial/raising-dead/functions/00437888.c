/* Ghidra address: 00437888; FUN_00437888 */

undefined4 __cdecl FUN_00437888(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0043cce4;
  DAT_0043cce4 = param_1;
  if (param_1 == 0) {
    DAT_0043cce4 = 1;
  }
  return uVar1;
}

