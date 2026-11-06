/* Ghidra address: 0042adbe; FUN_0042adbe */

undefined4 FUN_0042adbe(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_14;
  int local_c;
  
  bVar2 = false;
  if (in_stack_00000004 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar7 = (*DAT_0049aa2c - *(int *)(in_stack_0000000c + 0x1c)) - in_stack_00000008;
    if ((*(byte *)(in_stack_00000004 + 1) & 0x20) != 0) {
      uVar7 = *(uint *)(*(int *)(*in_stack_00000004 + 8) + 0x20);
    }
    if ((*(byte *)((int)in_stack_00000004 + 5) & 1) == 0) {
      piVar4 = in_stack_00000004;
      if ((int)uVar7 < 1) {
        if ((in_stack_00000004[1] & 3U) != 3) {
          return 0;
        }
        bVar2 = true;
      }
      else {
        for (; *piVar4 != 0; piVar4 = piVar4 + 3) {
          local_c = *piVar4;
          iVar5 = 1;
          if (((((*(byte *)(local_c + 4) & 0x10) != 0) &&
               (local_c = *(int *)(local_c + 8), (*(byte *)(local_c + 4) & 2) != 0)) &&
              ((*(byte *)(local_c + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar4 + 1) & 8) != 0)) {
            FUN_0042ad80();
          }
          if ((*(byte *)(local_c + 5) & 4) != 0) {
            iVar5 = *(int *)(local_c + 0xc);
            local_c = *(int *)(local_c + 8);
          }
          uVar6 = iVar5 * *(int *)(local_c + 0x20);
          if (uVar7 <= uVar6) goto LAB_0042aedd;
          uVar7 = uVar7 - uVar6;
        }
        piVar4 = piVar4 + -3;
      }
LAB_0042aedd:
      do {
        local_14 = *piVar4;
        uVar7 = piVar4[1];
        if ((((uVar7 & 0x11) != 0) &&
            (local_14 = *(int *)(local_14 + 8), (*(byte *)(local_14 + 4) & 2) != 0)) &&
           (((*(byte *)(local_14 + 0xc) & 0x20) != 0 && ((uVar7 & 8) != 0)))) {
          FUN_0042ad80();
        }
        if (!bVar2) {
          if ((*(byte *)(local_14 + 5) & 4) == 0) {
            FUN_0042ab67();
          }
          else {
            FUN_0042ad0d();
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((*(byte *)(local_14 + 5) & 4) == 0) {
            if (*(int *)(local_14 + 0x14) == 0) {
              FUN_00431954();
            }
            else {
              FUN_00429d0e();
            }
          }
          else if (*(int *)(*(int *)(local_14 + 8) + 0x1c) == 0) {
            FUN_00431964();
          }
          else {
            FUN_00429d0e();
          }
        }
        bVar1 = in_stack_00000004 < piVar4;
        piVar4 = piVar4 + -3;
      } while (bVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*in_stack_00000004 + 0x24);
    }
  }
  return uVar3;
}

