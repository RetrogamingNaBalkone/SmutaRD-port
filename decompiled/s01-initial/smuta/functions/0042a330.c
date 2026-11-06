/* Ghidra address: 0042a330; FUN_0042a330 */

void FUN_0042a330(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  int in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *local_8;
  
  iVar5 = *(int *)(in_stack_00000004 + 4);
  *(int *)(in_stack_0000000c + 0x3c) = iVar5;
  if ((iVar5 != 0) && ((*(byte *)(in_stack_00000004 + 8) & 0x80) == 0)) {
    bVar6 = (*(byte *)(in_stack_00000004 + 8) & 1) == 0;
    local_8 = (undefined4 *)(in_stack_0000000c + 0x46);
    *(undefined1 *)(in_stack_0000000c + 0x45) = 1;
    *(int *)(in_stack_0000000c + 0x40) = *in_stack_00000010 + in_stack_00000014;
    uVar1 = *(ushort *)(iVar5 + 4);
    uVar4 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      uVar4 = *(ushort *)(iVar5 + 4);
    }
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(in_stack_0000000c + 0xc) & 1) == 0)) {
      if (((uVar4 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(in_stack_0000000c + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            FUN_00428fe4();
          }
          else {
            FUN_00428fe4();
            bVar6 = true;
          }
        }
        else {
          iVar2 = FUN_004297d6();
          if (iVar2 == 0) {
            FUN_0042a2d6();
          }
          bVar6 = iVar2 == 0 || bVar6;
          if ((*(byte *)(iVar5 + 0xc) & 1) == 0) {
            FUN_00428fe4();
          }
          else {
            FUN_00429b83();
            bVar6 = true;
          }
        }
      }
      else {
        bVar7 = (uVar1 & 0x20) == 0;
        if (bVar7) {
          local_8 = (undefined4 *)*local_8;
        }
        bVar6 = !bVar7 || bVar6;
        iVar2 = FUN_004297d6();
        if ((iVar2 == 0) && (puVar3 = (undefined4 *)FUN_0042a2d6(), puVar3 != local_8)) {
          bVar6 = true;
        }
        FUN_00428fe4();
      }
    }
    else {
      FUN_00429054();
      bVar6 = true;
    }
    if (!bVar6) {
      if ((*(byte *)(iVar5 + 0xc) & 2) != 0) {
        FUN_0042a125();
      }
      *(undefined1 *)(in_stack_0000000c + 0x44) = 0;
    }
    if (**(int **)(*(int *)(*(int *)(in_FS_OFFSET + 4) + -8) + 0xc) != 0) {
      FUN_00429684();
    }
  }
  return;
}

