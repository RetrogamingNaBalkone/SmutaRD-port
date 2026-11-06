/* Ghidra address: 00410b64; FUN_00410b64 */

void FUN_00410b64(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  byte *in_stack_00000008;
  ushort *local_1c;
  ushort *local_18;
  ushort *local_14;
  ushort *local_10;
  int local_c;
  int local_8;
  
  if (DAT_00435924 == 2) {
    iVar3 = 0;
    local_14 = (ushort *)(in_stack_00000004 + 8);
    do {
      local_8 = 0;
      local_10 = local_14;
      pbVar1 = in_stack_00000008;
      do {
        iVar2 = 0x20 - iVar3;
        iVar4 = (uint)*pbVar1 * iVar2;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x1f;
        }
        iVar5 = (uint)pbVar1[1] * iVar2;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x1f;
        }
        iVar2 = (uint)pbVar1[2] * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x1f;
        }
        *local_10 = (ushort)((iVar4 >> 6) << 0xb) | (ushort)((iVar5 >> 5) << 5) |
                    (ushort)(iVar2 >> 6);
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
        pbVar1 = pbVar1 + 3;
      } while (local_8 < 0x100);
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x100;
    } while (iVar3 < 0x20);
  }
  else {
    iVar3 = 0;
    local_1c = (ushort *)(in_stack_00000004 + 8);
    do {
      local_c = 0;
      local_18 = local_1c;
      pbVar1 = in_stack_00000008;
      do {
        iVar2 = 0x20 - iVar3;
        iVar4 = (uint)*pbVar1 * iVar2;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0x1f;
        }
        iVar5 = (uint)pbVar1[1] * iVar2;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0x1f;
        }
        iVar2 = (uint)pbVar1[2] * iVar2;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x1f;
        }
        *local_18 = (ushort)((iVar4 >> 6) << 10) | (ushort)((iVar5 >> 6) << 5) |
                    (ushort)(iVar2 >> 6);
        local_c = local_c + 1;
        local_18 = local_18 + 1;
        pbVar1 = pbVar1 + 3;
      } while (local_c < 0x100);
      iVar3 = iVar3 + 1;
      local_1c = local_1c + 0x100;
    } while (iVar3 < 0x20);
  }
  return;
}

