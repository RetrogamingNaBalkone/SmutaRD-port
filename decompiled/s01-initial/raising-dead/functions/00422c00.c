/* Ghidra address: 00422c00; FUN_00422c00 */

void __cdecl FUN_00422c00(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  ushort local_624 [768];
  undefined1 *local_24;
  undefined1 *local_20;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c [3];
  ushort local_6;
  
  FUN_00435394((int *)local_624,6,0x100,1,FUN_00422de4);
  FUN_0042650c((int)local_624,param_2);
  local_6 = 0;
  local_24 = (undefined1 *)(param_1 + 0xa008);
  do {
    uVar3 = 0;
    local_20 = local_24;
    do {
      if (uVar3 < 0x100) {
        uVar2 = (uint)uVar3;
      }
      else {
        uVar2 = 0xff;
      }
      local_1c = local_624[uVar2 * 3];
      local_1a = local_624[uVar2 * 3 + 1];
      local_18 = local_624[uVar2 * 3 + 2];
      local_e = local_6;
      if (local_6 < 0x100) {
        uVar2 = (uint)local_6;
      }
      else {
        uVar2 = 0xff;
      }
      local_14 = local_624[uVar2 * 3];
      local_12 = local_624[uVar2 * 3 + 1];
      local_10 = local_624[uVar2 * 3 + 2];
      local_16 = uVar3;
      FUN_0040d6c8(local_c,&local_14,0x1e,&local_1c,0x46);
      sVar1 = FUN_00426548(local_624,local_c);
      *local_20 = (char)sVar1;
      uVar3 = uVar3 + 1;
      local_20 = local_20 + 1;
    } while ((short)uVar3 < 0x100);
    local_6 = local_6 + 1;
    local_24 = local_24 + 0x100;
  } while ((short)local_6 < 0x100);
  FUN_0043526c((int)local_624,6,0x100,1,FUN_00422dfc);
  return;
}

