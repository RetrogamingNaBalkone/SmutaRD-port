/* Ghidra address: 00407ee8; FUN_00407ee8 */

short FUN_00407ee8(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined2 local_6;
  
  local_6 = 0;
  iVar1 = FUN_00407a68();
  sVar3 = 1;
  do {
    iVar2 = FUN_00407a68();
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
      local_6 = sVar3;
    }
    sVar3 = sVar3 + 1;
  } while (sVar3 < 0x100);
  return local_6;
}

