/* Ghidra address: 00414478; FUN_00414478 */

void __cdecl FUN_00414478(int *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if ((*(char *)((int)param_1 + 0x75) == '\x02') &&
     (*(short *)((int)param_1 + 0x71) <= (short)param_1[0x21])) {
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 8;
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) & 0xfffd;
    FUN_0040e3b8(param_1,(int)*(short *)((int)param_1 + 0x73));
    (**(code **)(**(int **)((int)param_1 + 0x6d) + 0x10))();
    *(short *)((int)param_1 + 0x71) = *(short *)((int)param_1 + 0x71) + 1;
    iVar2 = (int)(short)param_1[0x21];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if (iVar2 >> 2 < (int)*(short *)((int)param_1 + 0x71)) {
      *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 0x10;
      return;
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x75) = 1;
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 0x10;
    (**(code **)(**(int **)((int)param_1 + 0x6d) + 0x14))();
    *(ushort *)((int)param_1 + 0x21) = ~*(ushort *)((int)param_1 + 0x21);
    pcVar1 = FUN_00404d88(0x2a);
    FUN_00404940(DAT_004385a0,pcVar1);
    *(int *)((int)param_1 + 0x76) = *(int *)((int)param_1 + 0x76) + -1;
    FUN_0040e374(param_1);
  }
  return;
}

