/* Ghidra address: 0042d3bc; FUN_0042d3bc */

undefined4 __cdecl FUN_0042d3bc(int *param_1,uint *param_2,int param_3,uint param_4)

{
  if ((*(byte *)((int)param_1 + 0x12) & 4) != 0) {
    FUN_00435b40(param_1[1]);
  }
  *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) & 0xfff3;
  param_1[3] = 0;
  param_1[1] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  if ((param_3 != 2) && (param_4 != 0)) {
    PTR_FUN_0043c954 = &LAB_0042f8fc;
    if (param_2 == (uint *)0x0) {
      param_2 = FUN_00435c48(param_4);
      if (param_2 == (uint *)0x0) {
        return 0xffffffff;
      }
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 4;
    }
    *param_1 = (int)param_2;
    param_1[1] = (int)param_2;
    param_1[3] = param_4;
    if (param_3 == 1) {
      *(ushort *)((int)param_1 + 0x12) = *(ushort *)((int)param_1 + 0x12) | 8;
    }
  }
  return 0;
}

