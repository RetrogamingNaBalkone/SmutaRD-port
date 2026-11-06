/* Ghidra address: 00415160; FUN_00415160 */

undefined2 * __cdecl FUN_00415160(undefined2 *param_1,int param_2,int param_3)

{
  short sVar1;
  ushort in_CX;
  undefined4 uStack_8;
  
  uStack_8 = (uint)in_CX;
  sVar1 = FUN_00426780(*(int *)(param_3 + 0x39) - *(int *)(param_2 + 0x39),
                       *(int *)(param_3 + 0x31) - *(int *)(param_2 + 0x31));
  FUN_0040f8c4((short *)((int)&uStack_8 + 2),0x168 - sVar1);
  *param_1 = uStack_8._2_2_;
  return param_1;
}

