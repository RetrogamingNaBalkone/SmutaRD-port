/* Ghidra address: 00431b48; FUN_00431b48 */

undefined4 __cdecl FUN_00431b48(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00435154(0x400);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = iVar1 + 0x400;
  *(undefined2 *)(param_1 + 4) = 1;
  return 1;
}

