/* Ghidra address: 004152fc; FUN_004152fc */

void FUN_004152fc(void)

{
  int iVar1;
  bool bVar2;
  int3 extraout_var;
  
  bVar2 = FUN_00420838();
  iVar1 = DAT_0044f640;
  if (CONCAT31(extraout_var,bVar2) != 0 && -1 < extraout_var) {
    *(undefined2 *)(DAT_0044f640 + 0x20) = 0x28;
    *(undefined2 *)(iVar1 + 0x22) = 0xd8;
    return;
  }
  *(undefined2 *)(DAT_0044f640 + 0x20) = 0x2c;
  *(undefined2 *)(iVar1 + 0x22) = 0xd8;
  return;
}

