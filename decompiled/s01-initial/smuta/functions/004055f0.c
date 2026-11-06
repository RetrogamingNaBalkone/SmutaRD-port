/* Ghidra address: 004055f0; FUN_004055f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004055f0(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 local_40;
  
  FUN_0042b4b4(0x43499c);
  if (*(int *)(in_stack_00000004 + 0xc) == 0) {
    uVar1 = FUN_00427f4c();
    if ((((uVar1 & 0x800) == 0) && ((uVar1 & 0x200) == 0)) && ((uVar1 & 0x4000) == 0)) {
      uVar1 = FUN_00409a58();
      if (5000 < uVar1) {
        FUN_00409a8c();
        puVar2 = FUN_00431988();
        if (puVar2 != (uint *)0x0) {
          FUN_004050b8();
          FUN_004051d4();
          *DAT_0049aa2c = *DAT_0049aa2c + -2;
        }
        *in_FS_OFFSET = local_40;
        return;
      }
    }
    else {
      *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
      FUN_0040ff18();
    }
    goto switchD_0040575e_caseD_0;
  }
  FUN_00424b00();
  if (*(int *)(in_stack_00000004 + 0xc) == 2) {
    iVar3 = FUN_00410054();
    if (0 < iVar3) {
      _DAT_00443d4c = 1;
      _DAT_00443d50 = iVar3;
      puVar2 = FUN_00431988();
      if (puVar2 != (uint *)0x0) {
        FUN_00405090();
        FUN_004051d4();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
      }
    }
    if (iVar3 < 0) {
      *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
      FUN_0040ff18();
    }
    *in_FS_OFFSET = local_40;
    return;
  }
  iVar3 = FUN_00410054();
  switch(iVar3) {
  case 1:
    uVar1 = FUN_00427f4c();
    if ((uVar1 & 0x2000) == 0) {
      *(undefined4 *)(in_stack_00000004 + 0xc) = 2;
      FUN_00424b00();
      FUN_0040ff18();
    }
    else {
      puVar2 = FUN_00431988();
      if (puVar2 != (uint *)0x0) {
        FUN_004050b8();
        FUN_004051d4();
        *DAT_0049aa2c = *DAT_0049aa2c + -2;
      }
    }
    *in_FS_OFFSET = local_40;
    break;
  case 2:
    iVar3 = FUN_00426100();
    if ((iVar3 != 0) && (puVar2 = FUN_00431988(), puVar2 != (uint *)0x0)) {
      FUN_00405090();
      FUN_004051d4();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 3:
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_004050b8();
      FUN_004051d4();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 4:
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_0040599c();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 5:
    puVar2 = FUN_00431988();
    if (puVar2 != (uint *)0x0) {
      FUN_00405474();
      *DAT_0049aa2c = *DAT_0049aa2c + -2;
    }
    *in_FS_OFFSET = local_40;
    break;
  case 6:
    PostMessageA(*(HWND *)(*(int *)(in_stack_00000004 + 4) + 4),0x111,1,0);
  default:
switchD_0040575e_caseD_0:
    *in_FS_OFFSET = local_40;
  }
  return;
}

