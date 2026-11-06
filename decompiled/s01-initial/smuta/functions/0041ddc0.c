/* Ghidra address: 0041ddc0; FUN_0041ddc0 */

uint * FUN_0041ddc0(void)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined2 *in_stack_00000004;
  undefined4 local_58;
  
  FUN_0042b4b4(0x4361d4);
  switch(*in_stack_00000004) {
  case 0:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_FUN_00436b28;
      *(undefined1 *)((int)puVar1 + 0x8e) = 1;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 1:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041ffc0();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  case 2:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436af8;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 3:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436ac4;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 4:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436a94;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 5:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041eb44();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 6:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_004220dc();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 7:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_00422118();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 8:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_004212a4();
      *DAT_0049aa2c = *DAT_0049aa2c + -3;
    }
    break;
  case 9:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_00422b74();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  case 10:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e2c4();
      puVar1[5] = (uint)&PTR_LAB_00436ac4;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      puVar1[5] = (uint)&PTR_LAB_00436a60;
      *(undefined2 *)((int)puVar1 + 0xaf) = 0;
      *DAT_0049aa2c = *DAT_0049aa2c + 1;
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  default:
    *in_FS_OFFSET = local_58;
    return (uint *)0x0;
  case 0xc:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e7ec();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
    break;
  case 0xd:
    puVar1 = FUN_00431988();
    if (puVar1 != (uint *)0x0) {
      FUN_0041e944();
      *DAT_0049aa2c = *DAT_0049aa2c + -4;
    }
  }
  (**(code **)(puVar1[5] + 4))();
  *in_FS_OFFSET = local_58;
  return puVar1;
}

