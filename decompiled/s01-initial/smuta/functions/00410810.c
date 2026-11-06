/* Ghidra address: 00410810; FUN_00410810 */

void FUN_00410810(void)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  byte *in_stack_00000008;
  undefined1 *local_648;
  ushort *local_644;
  ushort *local_640;
  undefined4 local_634;
  
  FUN_0042b4b4(0x435954);
  FUN_00431b68();
  *DAT_0049aa2c = *DAT_0049aa2c + 1;
  FUN_00407eac();
  DAT_00450aa0 = in_stack_00000004;
  sVar5 = 0;
  do {
    iVar2 = (int)sVar5;
    sVar5 = sVar5 + 1;
    *(undefined1 *)(*(int *)(in_stack_00000004 + 4) + iVar2) = 0;
  } while (sVar5 < 10);
  sVar5 = 10;
  do {
    *(char *)(*(int *)(in_stack_00000004 + 4) + (int)sVar5) = (char)sVar5;
    sVar5 = sVar5 + 1;
  } while (sVar5 < 0x100);
  sVar5 = 0xf6;
  do {
    iVar2 = (int)sVar5;
    sVar5 = sVar5 + 1;
    *(undefined1 *)(*(int *)(in_stack_00000004 + 4) + iVar2) = 0;
  } while (sVar5 < 0xff);
  sVar5 = 0;
  do {
    sVar6 = 1;
    do {
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      FUN_00407abc();
      sVar1 = FUN_00407ee8();
      *(char *)(*(int *)(in_stack_00000004 + 4) + sVar6 * 0x100 + (int)sVar5) = (char)sVar1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
      sVar6 = sVar6 + 1;
    } while (sVar6 < 0x20);
    sVar5 = sVar5 + 1;
  } while (sVar5 < 0x100);
  sVar5 = 0;
  local_644 = (ushort *)(in_stack_00000004 + 8);
  do {
    sVar6 = 0;
    local_640 = local_644;
    pbVar3 = in_stack_00000008;
    do {
      iVar2 = (0x20 - sVar5) * (uint)*pbVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      iVar7 = (0x20 - sVar5) * (uint)pbVar3[1];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
      }
      iVar8 = (0x20 - sVar5) * (uint)pbVar3[2];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1f;
      }
      sVar6 = sVar6 + 1;
      pbVar3 = pbVar3 + 3;
      *local_640 = (ushort)((iVar2 >> 6) << 10) | (ushort)((iVar7 >> 6) << 5) | (ushort)(iVar8 >> 6)
      ;
      local_640 = local_640 + 1;
    } while (sVar6 < 0x100);
    sVar5 = sVar5 + 1;
    local_644 = local_644 + 0x100;
  } while (sVar5 < 0x20);
  sVar5 = 0;
  local_648 = (undefined1 *)(in_stack_00000004 + 0x4008);
  do {
    sVar6 = 0;
    pbVar3 = in_stack_00000008;
    puVar4 = local_648;
    do {
      iVar2 = (0x20 - sVar5) * (uint)*pbVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      *puVar4 = (char)((iVar2 >> 5) << 2);
      iVar2 = (0x20 - sVar5) * (uint)pbVar3[1];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      puVar4[1] = (char)((iVar2 >> 5) << 2);
      iVar2 = (0x20 - sVar5) * (uint)pbVar3[2];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      sVar6 = sVar6 + 1;
      pbVar3 = pbVar3 + 3;
      puVar4[2] = (char)((iVar2 >> 5) << 2);
      puVar4 = puVar4 + 3;
    } while (sVar6 < 0x100);
    sVar5 = sVar5 + 1;
    local_648 = local_648 + 0x300;
  } while (sVar5 < 0x20);
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  FUN_00431aa4();
  *in_FS_OFFSET = local_634;
  return;
}

