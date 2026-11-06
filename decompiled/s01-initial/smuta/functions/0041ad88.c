/* Ghidra address: 0041ad88; FUN_0041ad88 */

void FUN_0041ad88(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  int in_stack_00000004;
  undefined4 local_2c;
  
  FUN_0042b4b4(0x435dc8);
  iVar3 = (int)DAT_0049292c;
  puVar2 = DAT_00492944;
  if (DAT_00492944 == (undefined4 *)0x0) {
    DAT_0049292c = (undefined4 *)((int)DAT_0049292c + 0x10);
    DAT_00492944 = DAT_0049292c;
    if (DAT_0049292c != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(int *)(iVar3 + 0x1c) = in_stack_00000004;
      *DAT_00492944 = 0;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
    *in_FS_OFFSET = local_2c;
  }
  else {
    while (puVar2 != (undefined4 *)0x0) {
      iVar1 = puVar2[3];
      if (*(int *)(iVar1 + 0x12) == 0) {
        bVar4 = *(int *)(in_stack_00000004 + 6) < *(int *)(iVar1 + 6);
      }
      else if (*(int *)(iVar1 + 0x12) == 1) {
        bVar4 = *(int *)(in_stack_00000004 + 0xe) < *(int *)(iVar1 + 0xe);
      }
      else if (*(int *)(iVar1 + 0x12) == 2) {
        bVar4 = *(int *)(in_stack_00000004 + 10) < *(int *)(iVar1 + 10);
      }
      else {
        bVar4 = *(short *)(in_stack_00000004 + 0x17) <= *(short *)(iVar1 + 0x17);
      }
      if (bVar4) {
        iVar1 = puVar2[3];
        if (*(int *)(iVar1 + 0x12) == 0) {
          bVar4 = DAT_00492938 < *(int *)(iVar1 + 6);
        }
        else if (*(int *)(iVar1 + 0x12) == 1) {
          bVar4 = DAT_00492940 < *(int *)(iVar1 + 0xe);
        }
        else if (*(int *)(iVar1 + 0x12) == 2) {
          bVar4 = DAT_0049293c < *(int *)(iVar1 + 10);
        }
        else {
          bVar4 = -1 < *(short *)(iVar1 + 0x17);
        }
        if (bVar4) {
          unaff_EBX = puVar2 + 1;
          puVar2 = (undefined4 *)puVar2[1];
        }
        else {
          unaff_EBX = puVar2 + 2;
          puVar2 = (undefined4 *)puVar2[2];
        }
      }
      else {
        iVar1 = puVar2[3];
        if (*(int *)(iVar1 + 0x12) == 0) {
          bVar4 = DAT_00492938 < *(int *)(iVar1 + 6);
        }
        else if (*(int *)(iVar1 + 0x12) == 1) {
          bVar4 = DAT_00492940 < *(int *)(iVar1 + 0xe);
        }
        else if (*(int *)(iVar1 + 0x12) == 2) {
          bVar4 = DAT_0049293c < *(int *)(iVar1 + 10);
        }
        else {
          bVar4 = -1 < *(short *)(iVar1 + 0x17);
        }
        if (bVar4) {
          unaff_EBX = puVar2 + 2;
          puVar2 = (undefined4 *)puVar2[2];
        }
        else {
          unaff_EBX = puVar2 + 1;
          puVar2 = (undefined4 *)puVar2[1];
        }
      }
    }
    DAT_0049292c = (undefined4 *)((int)DAT_0049292c + 0x10);
    puVar2 = DAT_0049292c;
    if (DAT_0049292c != (undefined4 *)0x0) {
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(int *)(iVar3 + 0x1c) = in_stack_00000004;
      *puVar2 = 0;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -1;
    }
    *unaff_EBX = puVar2;
    *in_FS_OFFSET = local_2c;
  }
  return;
}

