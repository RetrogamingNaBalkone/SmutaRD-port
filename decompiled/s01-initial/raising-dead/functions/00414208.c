/* Ghidra address: 00414208; FUN_00414208 */

undefined4 __cdecl FUN_00414208(int param_1)

{
  undefined4 uVar1;
  
  FUN_00404940(DAT_004385a0,(char *)(param_1 + 0x79));
  uVar1 = (**(code **)(**(int **)(param_1 + 0x6d) + 0x1c))();
  if ((short)uVar1 == 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x6d) + 0xc))();
  }
  if (*(short *)(param_1 + 0x75) == 1000) {
    return 0;
  }
  return CONCAT22((short)((uint)uVar1 >> 0x10),1);
}

