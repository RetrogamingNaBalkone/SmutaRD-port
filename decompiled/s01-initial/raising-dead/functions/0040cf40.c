/* Ghidra address: 0040cf40; FUN_0040cf40 */

undefined4 __cdecl FUN_0040cf40(undefined4 param_1,LPCSTR param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = thunk_FUN_004302c8(param_2,0,0x100);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  uVar2 = thunk_FUN_004301bc(uVar1);
  return CONCAT22((short)((uint)uVar2 >> 0x10),1);
}

