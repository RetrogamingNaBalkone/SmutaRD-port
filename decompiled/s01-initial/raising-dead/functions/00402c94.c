/* Ghidra address: 00402c94; FUN_00402c94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00402c94(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43825e);
  _DAT_0043da0c = 0;
  FUN_0040dab4();
  FUN_004043b8(DAT_004385a0,3);
  if (DAT_00438218 != 0) {
    FUN_004162a4(DAT_00438218,3);
  }
  DAT_00438218 = 0;
  if (DAT_00438228 == 2) {
    FUN_00426e58(DAT_00438224,0x80000000);
    FUN_00401500();
    FUN_00426f04(DAT_00438224);
  }
  if (DAT_00438224 != (int *)0x0) {
    FUN_00426e34(DAT_00438224,3);
  }
  DAT_00438224 = (int *)0x0;
  FUN_00426ff4(DAT_0053d630);
  FUN_00416284();
  FUN_0040dab4();
  *in_FS_OFFSET = local_28;
  return;
}

