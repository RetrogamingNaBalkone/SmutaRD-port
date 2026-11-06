/* Ghidra address: 004096e4; FUN_004096e4 */

undefined4 FUN_004096e4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_0042e284();
  if ((short)iVar1 == -1) {
    return 0;
  }
  uVar2 = thunk_FUN_0042e178();
  return CONCAT22((short)((uint)uVar2 >> 0x10),1);
}

