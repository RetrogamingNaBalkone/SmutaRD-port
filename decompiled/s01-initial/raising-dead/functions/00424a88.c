/* Ghidra address: 00424a88; FUN_00424a88 */

undefined4 * __cdecl
FUN_00424a88(undefined4 *param_1,int *param_2,short param_3,short param_4,undefined1 param_5,
            undefined4 param_6,undefined2 param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_0043a0ac;
  *param_1 = &PTR_FUN_0043a070;
  FUN_00435394((int *)((int)param_1 + 0x19),0xc,4,1,FUN_004096bc);
  iVar3 = *param_2;
  iVar2 = param_2[1];
  iVar5 = param_2[2];
  *(int *)((int)param_1 + 6) = iVar3;
  *(int *)((int)param_1 + 10) = iVar2 - ((int)param_3 >> 1);
  *(int *)((int)param_1 + 0xe) = iVar5;
  *(undefined4 *)((int)param_1 + 0x12) = 3;
  iVar5 = iVar5 - DAT_0053d6fc;
  iVar3 = iVar3 - DAT_0053d6f4;
  iVar6 = iVar5 * DAT_0053d6f0 - iVar3 * DAT_0053d6ec >> 0xf;
  if (DAT_0053d6c4 < iVar6) {
    iVar5 = iVar3 * DAT_0053d6f0 + iVar5 * DAT_0053d6ec >> 0xf;
    iVar3 = DAT_0053c914 / iVar6;
    iVar4 = ((iVar5 - ((int)param_4 >> 1)) * iVar3 >> 0xf) + (int)DAT_0053d6cc;
    iVar5 = ((((int)param_4 >> 1) + iVar5) * iVar3 >> 0xf) + (int)DAT_0053d6cc;
    if (iVar4 < iVar5) {
      if ((DAT_0053d6d8 < iVar4) || (iVar5 < DAT_0053d6d0)) {
        *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) & 0xfe;
        *(undefined2 *)((int)param_1 + 0x17) = 0;
        return param_1;
      }
    }
    else if ((DAT_0053d6d8 < iVar5) || (iVar4 < DAT_0053d6d0)) {
      *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) & 0xfe;
      *(undefined2 *)((int)param_1 + 0x17) = 0;
      return param_1;
    }
    *(int *)((int)param_1 + 0x3d) = iVar4;
    *(int *)((int)param_1 + 0x19) = iVar4;
    *(int *)((int)param_1 + 0x31) = iVar5;
    *(int *)((int)param_1 + 0x25) = iVar5;
    iVar2 = iVar2 - DAT_0053d6f8;
    iVar5 = ((iVar2 - param_3) * iVar3 >> 0xf) + (int)DAT_0053d6ce;
    *(int *)((int)param_1 + 0x29) = iVar5;
    *(int *)((int)param_1 + 0x1d) = iVar5;
    iVar5 = iVar6 + -0x32;
    iVar2 = (iVar3 * iVar2 >> 0xf) + (int)DAT_0053d6ce;
    *(int *)((int)param_1 + 0x41) = iVar2;
    *(int *)((int)param_1 + 0x35) = iVar2;
    *(int *)((int)param_1 + 0x45) = iVar5;
    *(int *)((int)param_1 + 0x39) = iVar5;
    *(int *)((int)param_1 + 0x2d) = iVar5;
    *(int *)((int)param_1 + 0x21) = iVar5;
    if ((DAT_0053d6d4 < *(int *)((int)param_1 + 0x35)) &&
       (*(int *)((int)param_1 + 0x1d) < DAT_0053d6dc)) {
      *(undefined1 *)((int)param_1 + 0x16) = param_5;
      *(undefined4 *)((int)param_1 + 0x49) = param_6;
      *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) | 1;
      sVar1 = (short)iVar6 - (param_4 >> 2);
      *(short *)((int)param_1 + 0x17) = sVar1;
      if (sVar1 < 0) {
        *(undefined2 *)((int)param_1 + 0x17) = 0;
      }
      *(undefined2 *)(param_1 + 1) = param_7;
    }
    else {
      *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) & 0xfe;
      *(undefined2 *)((int)param_1 + 0x17) = 0;
    }
  }
  else {
    *(byte *)((int)param_1 + 0x16) = *(byte *)((int)param_1 + 0x16) & 0xfe;
    *(undefined2 *)((int)param_1 + 0x17) = 0;
  }
  return param_1;
}

