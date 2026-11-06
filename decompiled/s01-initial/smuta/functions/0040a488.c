/* Ghidra address: 0040a488; FUN_0040a488 */

/* WARNING: Removing unreachable block (ram,0x0040a5df) */

void FUN_0040a488(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 *in_stack_00000008;
  undefined4 local_464;
  int local_460;
  int local_45c;
  undefined2 local_3c;
  int local_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2c;
  undefined2 local_1c;
  
  bVar3 = 0;
  FUN_0042b4b4(0x435440);
  puVar2 = &local_464;
  for (iVar1 = 0x10a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  if (local_45c < 0) {
    local_45c = -local_45c;
  }
  local_3c = 0x4d42;
  local_36 = 0;
  local_34 = 0;
  local_32 = 0x436;
  local_3a = local_460 * local_45c + 0x436;
  thunk_FUN_0042cddc();
  local_1c = 8;
  FUN_0042bcf8();
  FUN_004096a4();
  FUN_00409828();
  FUN_00409828();
  for (iVar1 = 0; iVar1 < local_45c; iVar1 = iVar1 + 1) {
    FUN_00409828();
  }
  thunk_FUN_0042e178();
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *DAT_0049aa2c = *DAT_0049aa2c + -1;
  *in_FS_OFFSET = local_2c;
  return;
}

