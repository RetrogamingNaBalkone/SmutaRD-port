/* Ghidra address: 00408aa0; FUN_00408aa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00408aa0(void)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short local_20;
  short local_1e;
  
  if (DAT_004351f0 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_00427f4c();
    FUN_004281c6();
    if ((((uVar3 == 0x200) || (uVar3 == 0x800)) || (uVar3 == 0x4000)) || ((uVar3 & 0x400000) != 0))
    {
      FUN_004267f4();
      _DAT_004351f4 = 0;
      DAT_004351f0 = 0;
      FUN_004281c6();
      DAT_0049a178 = 1;
      uVar4 = 0;
      if ((uVar3 & 0x400000) != 0) {
        uVar4 = uVar3 & 0xf;
      }
      if ((uVar3 == 0x800) || (uVar4 != 0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      FUN_00408a28();
      psVar1 = *(short **)(DAT_0043518c + 0x99);
      *psVar1 = (local_20 + 1) * (short)DAT_0044f640[9];
      psVar1[1] = (local_1e + 1) * *(short *)((int)DAT_0044f640 + 0x26);
      FUN_004267f4();
      FUN_0042fc2c();
      FUN_0042fc2c();
      FUN_0042fc2c();
      FUN_0042fc2c();
      (**(code **)(*DAT_0044f640 + 0x44))();
      _DAT_004351f4 = _DAT_004351f4 + 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

