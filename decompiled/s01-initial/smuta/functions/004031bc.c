/* Ghidra address: 004031bc; FUN_004031bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004031bc(void)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_stack_00000008;
  short *in_stack_0000000c;
  short in_stack_00000014;
  
  DAT_00439cf8 = in_stack_00000014;
  DAT_00439d04 = in_stack_00000008;
  if ((uint)((uint)(in_stack_00000008[1] == in_stack_00000008[4]) == in_stack_00000008[7]) !=
      in_stack_00000008[10]) {
    DAT_004435b0 = in_stack_00000008[2];
    DAT_00439cf6 = 0;
    DAT_00439cf4 = 0;
    piVar1 = in_stack_00000008 + 5;
    DAT_004435b4 = DAT_004435b0;
    for (sVar3 = 1; sVar3 < in_stack_00000014; sVar3 = sVar3 + 1) {
      if (*piVar1 < DAT_004435b0) {
        DAT_004435b0 = in_stack_00000008[sVar3 * 3 + 2];
        DAT_00439cf6 = sVar3;
      }
      if (DAT_004435b4 < *piVar1) {
        DAT_004435b4 = in_stack_00000008[sVar3 * 3 + 2];
        DAT_00439cf4 = sVar3;
      }
      piVar1 = piVar1 + 3;
    }
    DAT_004435e0 = in_stack_00000008[1] * (DAT_0044f6cc >> 0xf);
    DAT_00439da4 = (ushort)((in_stack_0000000c[2] & 1U) != 0);
    DAT_00439da6 = (ushort)((in_stack_0000000c[2] & 8U) != 0);
    DAT_00439cfa = *in_stack_0000000c;
    DAT_00439d00 = FUN_00409f70();
    iVar2 = DAT_00439d04[1];
    iVar5 = DAT_00439d04[3] - *DAT_00439d04;
    iVar6 = DAT_00439d04[5] - DAT_00439d04[2];
    iVar4 = DAT_00439d04[9] - *DAT_00439d04;
    iVar7 = DAT_00439d04[0xb] - DAT_00439d04[2];
    DAT_004435dc = (iVar5 * iVar7 - iVar6 * iVar4) / (DAT_00439cfa + -1);
    DAT_004435bc = (-iVar4 * iVar2 * DAT_0044f6d0) / DAT_004435dc;
    DAT_004435c0 = (iVar7 * iVar2) / DAT_004435dc;
    DAT_004435c4 = (iVar4 * DAT_00439d04[2] - iVar7 * *DAT_00439d04) / DAT_004435dc;
    DAT_004435c8 = (iVar5 * iVar2 * DAT_0044f6d0) / DAT_004435dc;
    DAT_004435cc = (-iVar6 * iVar2) / DAT_004435dc;
    DAT_004435d0 = (iVar6 * *DAT_00439d04 - iVar5 * DAT_00439d04[2]) / DAT_004435dc;
    if (DAT_004435e0 < 0) {
      iVar2 = (int)DAT_0043409c - (int)DAT_0044ebd2;
      DAT_004435ec = -1;
    }
    else {
      iVar2 = (int)DAT_0043409e - (int)DAT_0044ebd2;
      DAT_004435ec = 1;
    }
    DAT_004435b8 = DAT_004435e0 / iVar2;
    if ((DAT_004435b8 < DAT_004435b4) && (DAT_004435b8 != 0)) {
      FUN_00402d64();
      if (0 < DAT_004435e8) {
        FUN_00402d64();
        FUN_00402fc8();
        if (DAT_004435ec < 1) {
          if ((int)DAT_004435ea - (int)DAT_004435e8 < 0) {
            DAT_004435e8 = DAT_004435e8 + (short)((int)DAT_004435ea - (int)DAT_004435e8);
          }
        }
        else if (_DAT_00443c38 <= (int)DAT_004435ea + (int)DAT_004435e8) {
          DAT_004435e8 = (DAT_00443c38 + -1) - DAT_004435ea;
        }
        FUN_00406c1c();
      }
    }
  }
  return;
}

