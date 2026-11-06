/* Ghidra address: 004045d8; FUN_004045d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004045d8(void)

{
  int iVar1;
  int in_stack_00000004;
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  if ((DAT_0044362c == 0) || (*(int *)(in_stack_00000004 + 0x4c) <= DAT_0044362c)) {
    SetCursorPos(DAT_00434230,DAT_00443630);
  }
  else {
    iVar1 = DAT_0044362c - local_c.x;
    *(int *)(in_stack_00000004 + 0x86) = iVar1;
    if (iVar1 < 0) {
      _DAT_004346b4 = FUN_0042fc2c();
    }
    else if (iVar1 < 1) {
      _DAT_004346b4 = 0;
    }
    else {
      _DAT_004346b4 = FUN_0042fc2c();
    }
  }
  if ((DAT_00443630 == 0) || (*(int *)(in_stack_00000004 + 0x50) <= DAT_00443630)) {
    SetCursorPos(DAT_0044362c,DAT_00434234);
  }
  else {
    iVar1 = DAT_00443630 - local_c.y;
    *(int *)(in_stack_00000004 + 0x8a) = iVar1;
    if (iVar1 < 0) {
      _DAT_004346b8 = FUN_004a3250();
    }
    else if (iVar1 < 1) {
      _DAT_004346b8 = 0;
    }
    else {
      _DAT_004346b8 = FUN_004a3250();
    }
  }
  GetCursorPos(&local_c);
  DAT_0044362c = local_c.x;
  DAT_00443630 = local_c.y;
  return;
}

