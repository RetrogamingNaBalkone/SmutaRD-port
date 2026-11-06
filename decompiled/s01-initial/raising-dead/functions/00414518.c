/* Ghidra address: 00414518; FUN_00414518 */

void __cdecl FUN_00414518(int *param_1)

{
  char *pcVar1;
  
  if (*(short *)((int)param_1 + 0x7a) < 1) {
    if ((*(char *)((int)param_1 + 0x75) == '\x01') && (0 < *(short *)((int)param_1 + 0x71))) {
      *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) & 0xffef;
      *(short *)((int)param_1 + 0x71) = *(short *)((int)param_1 + 0x71) + -1;
      FUN_0040e3b8(param_1,(int)*(short *)((int)param_1 + 0x73));
      (**(code **)(**(int **)((int)param_1 + 0x6d) + 0x10))();
      return;
    }
    *(undefined1 *)((int)param_1 + 0x75) = 2;
    *(undefined2 *)((int)param_1 + 0x71) = 0;
    *(undefined2 *)((int)param_1 + 0x1b) = *(undefined2 *)((int)param_1 + 0x8e);
    (**(code **)(**(int **)((int)param_1 + 0x6d) + 0x14))();
    *(ushort *)((int)param_1 + 0x21) = ~*(ushort *)((int)param_1 + 0x21);
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) & 0xfff7;
    if ((*(byte *)((int)param_1 + 0x8e) & 8) == 0) {
      *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 2;
    }
    pcVar1 = FUN_00404d88(0x2b);
    FUN_00404940(DAT_004385a0,pcVar1);
    *(int *)((int)param_1 + 0x76) = *(int *)((int)param_1 + 0x76) + -1;
    FUN_0040e374(param_1);
  }
  return;
}

