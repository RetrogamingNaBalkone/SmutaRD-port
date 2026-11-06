/* Ghidra address: 0042cb40; FUN_0042cb40 */

uint FUN_0042cb40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  code *in_stack_00000004;
  code *in_stack_00000008;
  uint in_stack_00000010;
  int in_stack_00000014;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  
  iVar5 = 0;
  bVar6 = false;
  local_c = 0;
  local_10 = 1;
  local_14 = 0;
  local_18 = 0;
  iVar1 = local_c;
LAB_0042cb68:
  do {
    local_c = iVar1;
    iVar1 = local_c + 1;
    iVar3 = (*in_stack_00000004)();
    if (iVar5 == 0) {
      if (((-1 < iVar3) && (iVar3 < 0x80)) && (((&DAT_00438815)[iVar3] & 1) != 0))
      goto LAB_0042cb68;
      iVar5 = 1;
    }
    iVar2 = in_stack_00000014 + -1;
    if (iVar2 < 0) goto LAB_0042ccaf;
    if ((iVar5 != 1) || ((iVar5 = 2, iVar3 != 0x2b && (iVar3 != 0x2d)))) {
      if (iVar5 == 2) {
        iVar5 = 3;
        if ((iVar3 == 0x30) &&
           ((local_18 = 1, in_stack_00000010 == 0 || (in_stack_00000010 == 0x10)))) {
          iVar1 = local_c + 2;
          iVar3 = (*in_stack_00000004)();
          in_stack_00000014 = in_stack_00000014 + -2;
          if (in_stack_00000014 < 0) goto LAB_0042ccaf;
          if ((iVar3 == 0x78) || (iVar3 == 0x58)) {
            in_stack_00000010 = 0x10;
            goto LAB_0042cb68;
          }
          iVar2 = in_stack_00000014;
          if (in_stack_00000010 == 0) {
            in_stack_00000010 = 8;
          }
        }
        local_c = iVar1;
        in_stack_00000014 = iVar2;
        iVar2 = in_stack_00000014;
        iVar1 = local_c;
        if (in_stack_00000010 == 0) {
          in_stack_00000010 = 10;
        }
        else if (((int)in_stack_00000010 < 1) || (0x24 < (int)in_stack_00000010)) goto LAB_0042ccaf;
      }
      local_c = iVar1;
      in_stack_00000014 = iVar2;
      iVar1 = local_c;
      if (iVar5 == 3) {
        if ((iVar3 < 0x30) || (0x39 < iVar3)) {
          if ((iVar3 < 0x61) || (0x7a < iVar3)) {
            if ((iVar3 < 0x41) || (0x5a < iVar3)) goto LAB_0042ccaf;
            local_1c = iVar3 + -0x37;
          }
          else {
            local_1c = iVar3 + -0x57;
          }
        }
        else {
          local_1c = iVar3 + -0x30;
        }
        if ((int)in_stack_00000010 <= local_1c) goto LAB_0042ccaf;
        local_18 = local_18 + 1;
        uVar4 = local_14 * in_stack_00000010 + local_1c;
        bVar7 = local_14 != (uVar4 - local_1c) / in_stack_00000010;
        local_14 = uVar4;
        if (bVar7) {
          local_10 = 2;
          local_14 = 0x80000000;
          if (!bVar6) {
            local_14 = 0x7fffffff;
          }
LAB_0042ccaf:
          local_c = iVar1;
          if (local_10 != 2) {
            (*in_stack_00000008)();
            local_c = local_c + -1;
            if (bVar6) {
              local_14 = -local_14;
            }
          }
          if ((local_18 == 0) && (local_10 = -1, iVar3 != -1)) {
            local_10 = 0;
          }
          *in_stack_0000001c = local_10;
          *in_stack_00000018 = *in_stack_00000018 + local_c;
          return local_14;
        }
      }
      goto LAB_0042cb68;
    }
    bVar6 = iVar3 == 0x2d;
    in_stack_00000014 = iVar2;
  } while( true );
}

