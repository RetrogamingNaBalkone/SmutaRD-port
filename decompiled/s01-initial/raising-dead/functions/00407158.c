/* Ghidra address: 00407158; FUN_00407158 */

void __cdecl FUN_00407158(undefined2 *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  sbyte sVar4;
  undefined2 local_e;
  int local_8;
  
  sVar4 = 6;
  local_8 = 0;
  if (0 < param_3) {
    do {
      if (DAT_00439f58 != 2) {
        sVar4 = 5;
      }
      uVar3 = *param_2;
      uVar1 = *param_2;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      local_e = CONCAT11((char)(((int)(uint)uVar1 >> sVar4 & 0xffffff1fU) << 3),(char)uVar3 << 3);
      *param_1 = local_e;
      *(char *)(param_1 + 1) = (char)(((int)(uint)uVar2 >> sVar4 + 5) << 3);
      param_1 = (undefined2 *)((int)param_1 + 3);
      local_8 = local_8 + 1;
    } while (local_8 < param_3);
  }
  return;
}

