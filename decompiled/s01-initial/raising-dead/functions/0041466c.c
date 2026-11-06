/* Ghidra address: 0041466c; FUN_0041466c */

void __cdecl FUN_0041466c(int *param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  char *pcVar2;
  ushort uVar3;
  
  if ((((*param_2 & 0x40000) != 0) &&
      ((((*(byte *)((int)param_1 + 0x1b) & 8) == 0 ||
        ((*(short *)((int)param_1 + 0x82) == 10 && (*(char *)((int)param_1 + 0x75) != '\x03')))) &&
       (*param_2 = *param_2 & 0xfffbffff, *(short *)((int)param_1 + 0x82) == 10)))) &&
     (*(char *)((int)param_1 + 0x75) != '\x03')) {
    *(undefined1 *)((int)param_1 + 0x75) = 3;
    FUN_00406c38(*(int *)((int)param_1 + 0x65),0,0x14,0x14);
    *(ushort *)((int)param_1 + 0x1b) = *(ushort *)((int)param_1 + 0x1b) | 0x10;
  }
  if (*(short *)((int)param_1 + 0x82) != 10) {
    if (((*param_2 & 0x800) != 0) && (*(int *)((int)param_1 + 0x76) == 0)) {
      *param_2 = *param_2 & 0xfffff7ff;
      *(undefined2 *)(param_1 + 0x21) = 0xc;
      if (*(short *)(param_3 + 0x18) == 0xd) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *(ushort *)(param_3 + 0x93);
      }
      uVar1 = *(ushort *)(param_1 + 0x20);
      if (((uVar1 != 0) && ((uVar1 & uVar3) == 0)) && (*(char *)((int)param_1 + 0x75) == '\x02')) {
        if (*(short *)(param_3 + 0x18) != 1) {
          return;
        }
        if (uVar1 == 1) {
          pcVar2 = FUN_00404d88(0x2c);
          *(char **)((int)param_1 + 0x86) = pcVar2;
        }
        else if (uVar1 == 2) {
          pcVar2 = FUN_00404d88(0x2d);
          *(char **)((int)param_1 + 0x86) = pcVar2;
        }
        else if (uVar1 == 4) {
          pcVar2 = FUN_00404d88(0x2e);
          *(char **)((int)param_1 + 0x86) = pcVar2;
        }
        else if (uVar1 == 8) {
          pcVar2 = FUN_00404d88(0x2f);
          *(char **)((int)param_1 + 0x86) = pcVar2;
        }
        else {
          pcVar2 = FUN_00404d88(0x30);
          *(char **)((int)param_1 + 0x86) = pcVar2;
        }
        FUN_00404940(DAT_004385a0,*(char **)((int)param_1 + 0x86));
        return;
      }
      if ((*(char *)((int)param_1 + 0x75) == '\x02') && (*(int *)((int)param_1 + 0x76) == 0)) {
        *(int *)((int)param_1 + 0x76) = *(int *)((int)param_1 + 0x76) + 1;
        FUN_0040e2bc(param_1,PTR_FUN_00439be8,DAT_00439bec,DAT_00439bf0,0x29);
        if (*(short *)((int)param_1 + 0x82) == 1) {
          *(int *)((int)param_1 + 0x76) = *(int *)((int)param_1 + 0x76) + 1;
          FUN_0040e2bc(param_1,PTR_FUN_00439bf4,DAT_00439bf8,DAT_00439bfc,
                       *(int *)((int)param_1 + 0x8a));
        }
      }
    }
    *param_2 = *param_2 & 0xfffff7ff;
  }
  return;
}

