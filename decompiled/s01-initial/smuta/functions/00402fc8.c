/* Ghidra address: 00402fc8; FUN_00402fc8 */

void FUN_00402fc8(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int in_stack_00000004;
  short local_10;
  short local_c;
  
  iVar1 = (DAT_004435b0 << 0x10) / DAT_00434090;
  iVar2 = (((DAT_004435b4 - DAT_004435b0) * 0x10000) / (int)DAT_004435e8) / DAT_00434090;
  if (DAT_0043408c < DAT_004435b4) {
    if (DAT_004435b0 < DAT_0043408c) {
      iVar4 = DAT_0043408c / DAT_00434090;
      sVar5 = DAT_004435e8 + -1;
      piVar3 = (int *)(in_stack_00000004 + sVar5 * 4);
      for (; -1 < sVar5; sVar5 = sVar5 + -1) {
        local_10 = (short)iVar4;
        uVar7 = (short)((uint)iVar1 >> 0x10) - local_10;
        if ((short)uVar7 < 0) {
          if (DAT_00435924 == 0) {
            *piVar3 = *(int *)(DAT_00434094 + 4);
          }
          else {
            *piVar3 = DAT_00434094 + 8;
          }
        }
        else if (DAT_00435924 == 0) {
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = *(int *)(DAT_00434094 + 4) + uVar8 * 0x100;
        }
        else {
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = uVar8 * 0x200 + DAT_00434094 + 8;
        }
        iVar1 = iVar1 + iVar2;
        piVar3 = piVar3 + -1;
      }
    }
    else {
      iVar4 = DAT_0043408c / DAT_00434090;
      sVar5 = DAT_004435e8 + -1;
      piVar3 = (int *)(in_stack_00000004 + sVar5 * 4);
      for (; -1 < sVar5; sVar5 = sVar5 + -1) {
        sVar6 = (short)((uint)iVar1 >> 0x10);
        local_c = (short)iVar4;
        if (DAT_00435924 == 0) {
          uVar7 = sVar6 - local_c;
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = *(int *)(DAT_00434094 + 4) + uVar8 * 0x100;
        }
        else {
          uVar7 = sVar6 - local_c;
          if (uVar7 < 0x20) {
            uVar8 = (uint)uVar7;
          }
          else {
            uVar8 = 0x1f;
          }
          *piVar3 = uVar8 * 0x200 + DAT_00434094 + 8;
        }
        iVar1 = iVar1 + iVar2;
        piVar3 = piVar3 + -1;
      }
    }
  }
  else {
    sVar5 = DAT_004435e8 + -1;
    piVar3 = (int *)(in_stack_00000004 + sVar5 * 4);
    for (; -1 < sVar5; sVar5 = sVar5 + -1) {
      if (DAT_00435924 == 0) {
        *piVar3 = *(int *)(DAT_00434094 + 4);
      }
      else {
        *piVar3 = DAT_00434094 + 8;
      }
      piVar3 = piVar3 + -1;
    }
  }
  return;
}

