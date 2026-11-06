/* Ghidra address: 004078c8; FUN_004078c8 */

short __cdecl FUN_004078c8(uint param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)(param_1 >> 0x10 & 0xff) >> 3;
  if (DAT_00439f58 == 2) {
    sVar1 = (short)(iVar2 << 6) + (short)((int)(uint)param_1._1_1_ >> 2);
  }
  else {
    sVar1 = (short)(iVar2 << 5) + (short)((int)(uint)param_1._1_1_ >> 3);
  }
  return sVar1 * 0x20 + (short)((int)(param_1 & 0xff) >> 3);
}

