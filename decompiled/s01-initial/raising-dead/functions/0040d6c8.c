/* Ghidra address: 0040d6c8; FUN_0040d6c8 */

undefined2 * __cdecl
FUN_0040d6c8(undefined2 *param_1,ushort *param_2,ushort param_3,ushort *param_4,ushort param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 local_c;
  undefined2 local_8;
  
  FUN_0040d3c0((short *)&local_c,0,0,0);
  FUN_0040d3c0((short *)&local_14,0,0,0);
  if (param_3 < 0x65) {
    uVar1 = (uint)param_3;
  }
  else {
    uVar1 = 100;
  }
  local_8 = (&DAT_004d0028)[uVar1];
  if (param_3 < 0x65) {
    uVar1 = (uint)param_3;
  }
  else {
    uVar1 = 100;
  }
  if (param_3 < 0x65) {
    uVar2 = (uint)param_3;
  }
  else {
    uVar2 = 100;
  }
  local_c = CONCAT22((&DAT_004d0028)[uVar1],(&DAT_004d0028)[uVar2]);
  if (param_5 < 0x65) {
    uVar1 = (uint)param_5;
  }
  else {
    uVar1 = 100;
  }
  local_10 = (&DAT_004d0028)[uVar1];
  if (param_5 < 0x65) {
    uVar1 = (uint)param_5;
  }
  else {
    uVar1 = 100;
  }
  if (param_5 < 0x65) {
    uVar2 = (uint)param_5;
  }
  else {
    uVar2 = 100;
  }
  local_14 = CONCAT22((&DAT_004d0028)[uVar1],(&DAT_004d0028)[uVar2]);
  FUN_0040d268((undefined2 *)&local_1c,param_2,(ushort *)&local_c);
  local_c = local_1c;
  local_8 = local_18;
  FUN_0040d268((undefined2 *)&local_24,param_4,(ushort *)&local_14);
  local_14 = local_24;
  local_10 = local_20;
  FUN_0040d144(param_1,(ushort *)&local_c,(ushort *)&local_14);
  return param_1;
}

