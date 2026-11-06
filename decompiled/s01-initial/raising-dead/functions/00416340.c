/* Ghidra address: 00416340; FUN_00416340 */

void __cdecl FUN_00416340(short *param_1,char *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x439f14);
  DAT_00439b84 = 0;
  DAT_00439b88 = 0;
  DAT_004f142c = 0x40;
  DAT_00438e98 = 0x200;
  DAT_00438e9c = 0x180;
  DAT_004f4e94 = 0;
  DAT_004f1434 = param_1;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[6] = 0;
  param_1[0x25b9] = 0;
  param_1[0x388] = 0;
  FUN_00429fc4((undefined4 *)&DAT_004f1438,0,0x3a5c);
  FUN_00429fc4((undefined4 *)(param_1 + 0x3ac),0,0x4410);
  puVar1 = FUN_00435120(0x10);
  if (puVar1 == (uint *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0040e6ac((int *)puVar1,param_2,&DAT_004f1438);
  }
  *param_1 = DAT_004f1438;
  param_1[1] = DAT_004f143a;
  param_1[2] = DAT_004f143c;
  param_1[0x3a7] = DAT_004f143e;
  param_1[0x3a8] = DAT_004f1440;
  param_1[5] = DAT_004f1446;
  param_1[3] = DAT_004f1442;
  param_1[4] = DAT_004f1444;
  FUN_00426418(param_1 + 7,(undefined2 *)&DAT_004f1448);
  FUN_00429f54((undefined4 *)&DAT_004f5f9c,(undefined4 *)&DAT_004f2c8c,0x1104);
  FUN_00429f54((undefined4 *)&DAT_004f4e98,(undefined4 *)&DAT_004f1b88,0x1104);
  FUN_00429f54((undefined4 *)&DAT_004f70a0,(undefined4 *)&DAT_004f3d90,0x1104);
  param_1[0x25b4] = 1;
  param_1[0x25b5] = 0;
  *(int *)(param_1 + 0x25b6) = (int)*param_1;
  param_1[0x387] = *param_1 * param_1[2];
  FUN_00429f54((undefined4 *)(param_1 + 0x187),(undefined4 *)&DAT_004f1788,0x400);
  param_1[0x3a9] = 0;
  FUN_00417d38(param_1);
  if (piVar2 != (int *)0x0) {
    FUN_0040e570((int)piVar2,3);
  }
  *in_FS_OFFSET = local_28;
  return;
}

