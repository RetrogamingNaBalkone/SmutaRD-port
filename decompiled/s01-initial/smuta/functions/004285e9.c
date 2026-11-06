/* Ghidra address: 004285e9; FUN_004285e9 */

void FUN_004285e9(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_stack_00000004;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_0049aa18) {
    DAT_0049aa18 = DAT_0049aa18 + -1;
  }
  for (; DAT_0049aa18 < 2; DAT_0049aa18 = DAT_0049aa18 + 1) {
    iVar6 = in_stack_00000004 + 0x10;
    iVar7 = *(int *)(in_stack_00000004 + 8) * 0x30 + in_stack_00000004;
    piVar8 = (int *)(iVar7 + 0x60);
    iVar1 = *piVar8;
    iVar2 = *(int *)(iVar7 + 100);
    *(undefined4 *)(iVar7 + 0x68) = 0;
    FUN_00429054();
    for (; iVar6 != in_stack_00000004 + 0x60; iVar6 = iVar6 + 0x14) {
      if ((*(byte *)(iVar6 + 4) & 1) == 0) {
        pbVar4 = *(byte **)(iVar6 + 0xc);
        pbVar3 = *(byte **)(iVar6 + 0x10);
        for (pcVar5 = (char *)*piVar8; pcVar5 != (char *)(iVar1 + iVar2); pcVar5 = pcVar5 + 1) {
          if (pbVar4 == pbVar3) {
            if ((*(byte *)(iVar6 + 4) & 2) == 0) {
              *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 1;
              break;
            }
            pbVar4 = *(byte **)(iVar6 + 8);
          }
          *pcVar5 = *pcVar5 + (char)((int)(*pbVar4 - 0x80) >> 2);
          pbVar4 = pbVar4 + 1;
        }
        if (*(int *)(iVar7 + 0x68) < (int)pcVar5 - *piVar8) {
          *(int *)(iVar7 + 0x68) = (int)pcVar5 - *piVar8;
        }
        *(byte **)(iVar6 + 0xc) = pbVar4;
      }
    }
    if (*(int *)(in_stack_00000004 + 0x68 + *(int *)(in_stack_00000004 + 8) * 0x30) == 0) break;
    *(uint *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1U & 1;
    local_8 = local_8 + 1;
  }
  for (; 0 < local_8; local_8 = local_8 + -1) {
    FUN_00428d71();
    *(uint *)(in_stack_00000004 + 0xc) = *(int *)(in_stack_00000004 + 0xc) + 1U & 1;
  }
  if (DAT_0049aa18 == 0) {
    FUN_0042836a();
  }
  return;
}

