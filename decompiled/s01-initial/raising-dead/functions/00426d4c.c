/* Ghidra address: 00426d4c; FUN_00426d4c */

undefined4 __cdecl
FUN_00426d4c(ushort param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort local_8;
  ushort local_6;
  
  local_8 = 0;
  local_6 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar4 = 0;
  uVar1 = 0;
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      uVar6 = uVar2;
      uVar5 = uVar1;
      if (*param_2 < param_3) {
        uVar5 = uVar5 + 1;
      }
      if (param_5 < *param_2) {
        uVar6 = uVar6 + 1;
      }
      if (param_2[1] < param_4) {
        local_6 = local_6 + 1;
      }
      if (param_6 < param_2[1]) {
        local_8 = local_8 + 1;
      }
      param_2 = param_2 + 3;
      uVar4 = uVar4 + 1;
      uVar1 = uVar5;
      uVar2 = uVar6;
    } while (uVar4 < param_1);
  }
  if ((((param_1 == uVar5) || (param_1 == uVar6)) || (param_1 == local_6)) || (param_1 == local_8))
  {
    uVar3 = CONCAT22((short)((uint)param_2 >> 0x10),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

