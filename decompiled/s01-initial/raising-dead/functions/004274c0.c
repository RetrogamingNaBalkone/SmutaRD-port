/* Ghidra address: 004274c0; FUN_004274c0 */

undefined4 __cdecl FUN_004274c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_4;
  iVar2 = param_5;
  if (param_4 < param_2) {
    iVar1 = (int)(short)param_2;
    iVar2 = (int)(short)param_3;
    param_2 = param_4;
    param_3 = param_5;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x32) <= param_2)) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x3a) = param_2;
  if ((iVar1 < 2) || (*(int *)(param_1 + 0x32) <= iVar1)) {
    iVar1 = *(int *)(param_1 + 0x32) + -1;
  }
  *(int *)(param_1 + 0x42) = iVar1;
  if ((param_3 < 0) || (*(int *)(param_1 + 0x36) <= param_3)) {
    param_3 = 0;
  }
  *(int *)(param_1 + 0x3e) = param_3;
  if ((iVar2 < 2) || (*(int *)(param_1 + 0x36) <= iVar2)) {
    iVar2 = *(int *)(param_1 + 0x36) + -1;
  }
  *(int *)(param_1 + 0x46) = iVar2;
  DAT_00438ea4 = *(undefined2 *)(param_1 + 0x3a);
  DAT_00438ea6 = *(undefined2 *)(param_1 + 0x42);
  DAT_00438ea8 = *(undefined2 *)(param_1 + 0x3e);
  DAT_00438eaa = *(undefined2 *)(param_1 + 0x46);
  return CONCAT22((short)((uint)param_1 >> 0x10),1);
}

