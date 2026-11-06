/* Ghidra address: 0040fbe0; FUN_0040fbe0 */

uint * __cdecl FUN_0040fbe0(undefined2 *param_1,undefined4 param_2,undefined1 param_3)

{
  uint *puVar1;
  
  switch(*param_1) {
  case 0:
    puVar1 = FUN_00435120(0x90);
    if (puVar1 != (uint *)0x0) {
      FUN_0040fee0((int *)puVar1,param_1);
      puVar1[5] = (uint)&PTR_FUN_00439ea8;
      *(undefined1 *)((int)puVar1 + 0x8f) = 1;
    }
    break;
  case 1:
    puVar1 = FUN_00435120(0x13c);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_00411c80((int *)puVar1,param_1,param_3);
    }
    break;
  case 2:
    puVar1 = FUN_00435120(0x75);
    if (puVar1 != (uint *)0x0) {
      FUN_0040fee0((int *)puVar1,param_1);
      puVar1[5] = (uint)&PTR_FUN_00439e84;
    }
    break;
  case 3:
    puVar1 = FUN_00435120(0xac);
    if (puVar1 != (uint *)0x0) {
      FUN_0040fee0((int *)puVar1,param_1);
      puVar1[5] = (uint)&PTR_FUN_00439e5c;
    }
    break;
  case 4:
    puVar1 = FUN_00435120(0x75);
    if (puVar1 != (uint *)0x0) {
      FUN_0040fee0((int *)puVar1,param_1);
      puVar1[5] = (uint)&PTR_FUN_00439e38;
    }
    break;
  case 5:
    puVar1 = FUN_00435120(0xc1);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_00410768((int *)puVar1,param_1,param_3);
    }
    break;
  case 6:
    puVar1 = FUN_00435120(0x7b);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_004142d8((int *)puVar1,param_1);
    }
    break;
  case 7:
    puVar1 = FUN_00435120(0xa2);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_0041430c((int *)puVar1,param_1);
    }
    break;
  case 8:
    puVar1 = FUN_00435120(0x9e);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_00412f10((int *)puVar1,param_1);
    }
    break;
  case 9:
    puVar1 = FUN_00435120(0x16f);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_00414d80((int *)puVar1,param_1,param_3);
    }
    break;
  case 10:
    puVar1 = FUN_00435120(0xb8);
    if (puVar1 != (uint *)0x0) {
      FUN_0040fee0((int *)puVar1,param_1);
      puVar1[5] = (uint)&PTR_FUN_00439e5c;
      puVar1[5] = (uint)&PTR_FUN_00439e10;
      *(undefined2 *)(puVar1 + 0x2c) = 0;
    }
    break;
  default:
    return (uint *)0x0;
  case 0xc:
    puVar1 = FUN_00435120(0x94);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_00410404((int *)puVar1,param_1);
    }
    break;
  case 0xd:
    puVar1 = FUN_00435120(0x195);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)FUN_0041054c((int *)puVar1,param_1);
    }
  }
  (**(code **)(puVar1[5] + 4))();
  return puVar1;
}

