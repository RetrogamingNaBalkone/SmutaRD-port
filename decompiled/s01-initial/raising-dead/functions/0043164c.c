/* Ghidra address: 0043164c; FUN_0043164c */

void __cdecl FUN_0043164c(int param_1,uint *param_2,char *param_3,char *param_4)

{
  *(undefined2 *)(param_1 + 0x30) = 0;
  if (param_3 == (char *)0x0) {
    param_3 = FUN_0042a144(param_2);
  }
  else if ((int)param_3 < 0) {
    *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) | 4;
    param_3 = (char *)0x7fffffff;
  }
  FUN_00431d8c(param_1,(uint)param_2,(uint)(param_3 + (int)param_2),0);
  if (param_4 == (char *)0x0) {
    FUN_00431df4(param_1,(uint)param_2,(uint)param_2,*(uint *)(param_1 + 0xc));
  }
  else {
    FUN_00431e28(param_1,(uint)param_4,*(uint *)(param_1 + 0xc));
    if (param_3 + (int)param_2 < param_4) {
      param_4 = param_3 + (int)param_2;
    }
    FUN_00431df4(param_1,(uint)param_2,(uint)param_2,(uint)param_4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

