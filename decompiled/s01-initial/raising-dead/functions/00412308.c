/* Ghidra address: 00412308; FUN_00412308 */

void __cdecl FUN_00412308(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_3c [6];
  int local_24;
  int local_8;
  
  if (DAT_00438210 == 1) {
    *param_2 = 0;
  }
  else if (*(char *)((int)param_1 + 0x12e) == '\x01') {
    if ((*param_2 & 0x800) != 0) {
      *(undefined1 *)((int)param_1 + 0x12e) = 2;
    }
    *param_2 = 0;
  }
  else if (param_1[0x4d] == 0) {
    *param_2 = *param_2 | 0x800;
    if ((*param_2 & 0x800) != 0) {
      piVar2 = (int *)((int)param_1 + 0x31);
      piVar3 = local_3c;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      local_24 = -(int)*(short *)(DAT_004f1434 + 0x74e);
      iVar1 = FUN_00416644(DAT_004f1434,local_3c,1,0);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x14) + 0x20))();
      }
      *param_2 = *param_2 & 0xfffff7ff;
    }
    if ((*param_2 & 0x200) != 0) {
      *param_2 = *param_2 & 0xfffffdff;
      if ((*(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9) != 0) &&
         (*(short *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 2 + 0x105) != 0)) {
        iVar1 = FUN_00413e80(*(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9));
        if (iVar1 != 0) {
          local_8 = *(int *)((int)param_1 + *(short *)((int)param_1 + 0x119) * 4 + 0xc9);
          (**(code **)(**(int **)(local_8 + 0x6d) + 0x14))();
          (**(code **)(**(int **)(local_8 + 0x6d) + 0xc))();
        }
      }
    }
    if (((*param_2 & 0x40000) != 0) &&
       (*param_2 = *param_2 & 0xfffbffff, *(short *)((int)param_1 + 0x7f) != 0)) {
      (**(code **)(**(int **)((int)param_1 + 0xc5) + 0xc))();
      if (*(short *)(param_3 + 0x18) == 8) {
        FUN_004124f8(param_1,0,-*(short *)(param_3 + 0x7d));
      }
      else {
        FUN_004124f8(param_1,0,0xfffe);
      }
    }
    *(uint *)((int)param_1 + 0x23) = *(uint *)((int)param_1 + 0x23) | *param_2;
  }
  else {
    *param_2 = 0;
  }
  return;
}

