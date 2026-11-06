/* Ghidra address: 0042dde8; FUN_0042dde8 */

int FUN_0042dde8(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  int *in_stack_00000004;
  uint *local_c;
  int local_8;
  
  iVar2 = DAT_00437f24;
  for (piVar4 = &DAT_00437f24 + DAT_00437f24; (iVar2 != 0 && (*piVar4 == 0)); piVar4 = piVar4 + -1)
  {
    iVar2 = iVar2 + -1;
  }
  if (in_stack_00000004 == (int *)0x0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 * 5 + 4;
    }
  }
  else {
    *in_stack_00000004 = iVar2;
    local_8 = 0;
    pbVar5 = (byte *)(in_stack_00000004 + 1);
    local_c = &DAT_00437f28;
    if (0 < iVar2) {
      do {
        bVar3 = 1;
        uVar1 = *local_c;
        if ((uVar1 & 0x800) != 0) {
          bVar3 = 0x21;
        }
        if ((uVar1 & 0x8000) == 0) {
          bVar3 = bVar3 | 0x80;
        }
        if ((uVar1 & 0x2000) != 0) {
          bVar3 = bVar3 | 0x40;
        }
        *pbVar5 = bVar3;
        pbVar5 = pbVar5 + 1;
        local_8 = local_8 + 1;
        local_c = local_c + 1;
      } while (local_8 < iVar2);
    }
    FUN_00428fe4();
    iVar2 = 0;
  }
  return iVar2;
}

