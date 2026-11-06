/* Ghidra address: 0041430c; FUN_0041430c */

int * __cdecl FUN_0041430c(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_0040fee0(param_1,param_2);
  param_1[5] = (int)&PTR_FUN_00439cb0;
  piVar2 = *(int **)((int)param_1 + 0x65);
  piVar3 = param_1 + 0x24;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  *(short *)piVar3 = (short)*piVar2;
  *(int **)((int)param_1 + 0x65) = param_1 + 0x24;
  *(undefined1 *)((int)param_1 + 0x75) = 2;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x73) = 0;
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined2 *)((int)param_1 + 0x7a) = 0;
  *(undefined2 *)((int)param_1 + 0x8e) = *(undefined2 *)((int)param_1 + 0x1b);
  *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) & 0xffef;
  *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) & 0xfff7;
  if ((*(byte *)((int)param_1 + 0x8e) & 8) == 0) {
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 2;
  }
  return param_1;
}

