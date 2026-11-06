/* Ghidra address: 00406514; FUN_00406514 */

void FUN_00406514(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,short *param_5,
                 int param_6,int param_7,byte *param_8)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_6;
  while( true ) {
    bVar1 = *param_8;
    param_1 = CONCAT31((int3)(param_1 >> 8),bVar1);
    if ((bVar1 == 0) || (bVar1 == 0x24)) break;
    if (*(int *)(DAT_0043faf4 + 0x1c + (uint)bVar1 * 0x14) != 0) {
      if (bVar1 == 10) {
        param_1 = (uint)*(ushort *)(param_4 + 0x26);
        param_7 = param_7 + param_1;
        iVar2 = param_6;
      }
      else if (bVar1 != 0xd) {
        FUN_00406430(param_4,param_5,iVar2,param_7,param_1);
        param_1 = *(uint *)(DAT_0043faf4 + 0x10);
        iVar2 = iVar2 + *(int *)(DAT_0043faf4 + 0x1c + (uint)*param_8 * 0x14) + param_1;
      }
    }
    param_8 = param_8 + 1;
  }
  return;
}

