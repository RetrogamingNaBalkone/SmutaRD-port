/* Ghidra address: 00414d80; FUN_00414d80 */

int * __cdecl FUN_00414d80(int *param_1,undefined2 *param_2,undefined1 param_3)

{
  uint *puVar1;
  
  FUN_00410768(param_1,param_2,param_3);
  param_1[5] = (int)&PTR_FUN_00439c88;
  *(undefined2 *)((int)param_1 + 0x93) = 0;
  *(undefined2 *)((int)param_1 + 0xfd) = 0;
  *(undefined2 *)((int)param_1 + 0xfb) = 0;
  *(undefined4 *)((int)param_1 + 0x16b) = 1;
  *(undefined4 *)((int)param_1 + 0xf5) = 0;
  puVar1 = FUN_00435120(0x38);
  if (puVar1 != (uint *)0x0) {
    FUN_0040f910(puVar1);
    puVar1[5] = (uint)&PTR_FUN_00439c68;
    puVar1[0xd] = (uint)param_1;
    puVar1[5] = (uint)&PTR_FUN_00439c78;
  }
  *(uint **)((int)param_1 + 0x115) = puVar1;
  puVar1 = FUN_00435120(0x46);
  if (puVar1 != (uint *)0x0) {
    FUN_0040f910(puVar1);
    puVar1[5] = (uint)&PTR_FUN_00439c68;
    puVar1[0xd] = (uint)param_1;
    puVar1[5] = (uint)&PTR_FUN_00439c58;
    puVar1[0xf] = 0;
    *(undefined2 *)(puVar1 + 0x11) = 0;
  }
  *(uint **)((int)param_1 + 0x119) = puVar1;
  puVar1 = FUN_00435120(0x3c);
  if (puVar1 != (uint *)0x0) {
    FUN_0040f910(puVar1);
    puVar1[5] = (uint)&PTR_FUN_00439c68;
    puVar1[0xd] = (uint)param_1;
    puVar1[5] = (uint)&PTR_FUN_00439c48;
  }
  *(uint **)((int)param_1 + 0x11d) = puVar1;
  puVar1 = FUN_00435120(0x3c);
  if (puVar1 != (uint *)0x0) {
    FUN_0040f910(puVar1);
    puVar1[5] = (uint)&PTR_FUN_00439c68;
    puVar1[0xd] = (uint)param_1;
    puVar1[5] = (uint)&PTR_FUN_00439c38;
    puVar1[0xe] = 0;
  }
  *(uint **)((int)param_1 + 0x121) = puVar1;
  puVar1 = FUN_00435120(0x40);
  if (puVar1 != (uint *)0x0) {
    FUN_0040f910(puVar1);
    puVar1[5] = (uint)&PTR_FUN_00439c68;
    puVar1[0xd] = (uint)param_1;
    puVar1[5] = (uint)&PTR_FUN_00439c28;
  }
  *(uint **)((int)param_1 + 0x125) = puVar1;
  puVar1 = FUN_00435120(0x3c);
  if (puVar1 != (uint *)0x0) {
    FUN_0040f910(puVar1);
    puVar1[5] = (uint)&PTR_FUN_00439c68;
    puVar1[0xd] = (uint)param_1;
    puVar1[5] = (uint)&PTR_FUN_00439c18;
    puVar1[0xe] = 1;
  }
  *(uint **)((int)param_1 + 0x129) = puVar1;
  *(undefined4 *)((int)param_1 + 0x2d) = *(undefined4 *)((int)param_1 + 0x115);
  *(undefined4 *)((int)param_1 + 0x51) = 0xee;
  DAT_00439c02 = 0;
  *(undefined1 *)((int)param_1 + 0xff) = 0;
  DAT_00439b88 = 0;
  DAT_00439b84 = 0;
  return param_1;
}

