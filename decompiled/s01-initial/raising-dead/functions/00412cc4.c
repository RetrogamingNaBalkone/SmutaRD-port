/* Ghidra address: 00412cc4; FUN_00412cc4 */

void __cdecl FUN_00412cc4(int *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((param_1[0x4d] == 2) &&
     (*(short *)((int)param_1 + 0x1f) = *(short *)((int)param_1 + 0x1f) + 0x10,
     *(short *)((int)param_1 + 0x127) < *(short *)((int)param_1 + 0x1f))) {
    *(short *)((int)param_1 + 0x1f) = (short)param_1[0x4e];
    param_1[0x4d] = 0;
  }
  if (param_1[0x4d] < 0) {
    *(short *)((int)param_1 + 0x1f) = *(short *)((int)param_1 + 0x1f) + -0x10;
    if (*(short *)((int)param_1 + 0x1f) < *(short *)((int)param_1 + 0x127)) {
      *(short *)((int)param_1 + 0x1f) = *(short *)((int)param_1 + 0x127);
      *(short *)((int)param_1 + 0x127) = *(short *)((int)param_1 + 0x127) << 2;
      param_1[0x4d] = 1;
    }
  }
  iVar4 = FUN_00411b40((int)param_1,1);
  iVar1 = *(int *)((int)param_1 + 0x35);
  sVar3 = *(short *)((int)param_1 + 0x1f);
  if (*(short *)(iVar4 + 0x18) == 3) {
    uVar5 = FUN_004124f8(param_1,*(short *)(iVar4 + 0x75),*(ushort *)(iVar4 + 0x77));
    if ((short)uVar5 != 0) {
      sVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x24))();
      if (sVar2 != 0) {
        FUN_0040ffb4((int)param_1,0x20,1);
      }
    }
  }
  else if (*(short *)(iVar4 + 0x18) == 10) {
    sVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x24))
                      (*(int *)(iVar4 + 0x14),-*(int *)(iVar4 + 0x35),(int)sVar3,iVar4);
    if (sVar2 != 0) {
      FUN_0040ffb4((int)param_1,0x20,1);
    }
    FUN_00412b64(param_1,iVar4);
    FUN_00404ae4(DAT_004385a0,*(short *)(iVar4 + 0xac));
    FUN_004124f8(param_1,*(short *)(iVar4 + 0x75),*(ushort *)(iVar4 + 0x77));
  }
  iVar4 = FUN_00411b40((int)param_1,2);
  sVar2 = *(short *)(iVar4 + 0x18);
  if (sVar2 == 0xc) {
    *(uint *)((int)param_1 + 0x23) = *(uint *)((int)param_1 + 0x23) | 0x4000000;
    if (-(int)sVar3 - iVar1 < (int)*(short *)(iVar4 + 0x1f)) {
      FUN_004124f8(param_1,*(short *)(iVar4 + 0x90),(ushort)((int)*(short *)(iVar4 + 0x92) / 0x18));
    }
    sVar3 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x3c))();
    if (sVar3 != 0) {
      FUN_0040ffb4((int)param_1,0x20,2);
    }
  }
  if ((sVar2 == 0xd) && (*(int *)(iVar4 + 0x91) == -3)) {
    (**(code **)(*(int *)(iVar4 + 0x14) + 0x3c))();
  }
  else if (((sVar2 == 0xd) && (iVar4 != *(int *)((int)param_1 + 0x129))) || (param_1[0x4d] == 1)) {
    if (param_1[0x4d] == 1) {
      param_1[0x4d] = 2;
      (**(code **)(*(int *)(param_1[0x4c] + 0x14) + 0x3c))();
    }
    else if (*(char *)(iVar4 + 0x1a) != *(char *)((int)param_1 + 0x12f)) {
      if (*(int *)(iVar4 + 0x91) < 0) {
        *(char *)((int)param_1 + 0x12f) = *(char *)(iVar4 + 0x1a);
        param_1[0x4d] = -1;
        *(short *)((int)param_1 + 0x127) = *(short *)((int)param_1 + 0x1f) >> 2;
        param_1[0x4e] = (int)*(short *)((int)param_1 + 0x1f);
        param_1[0x4c] = iVar4;
      }
      else {
        (**(code **)(*(int *)(iVar4 + 0x14) + 0x3c))();
      }
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x12f) = *(undefined1 *)(iVar4 + 0x1a);
  }
  *(int *)((int)param_1 + 0x129) = iVar4;
  FUN_00410808((int)param_1);
  return;
}

