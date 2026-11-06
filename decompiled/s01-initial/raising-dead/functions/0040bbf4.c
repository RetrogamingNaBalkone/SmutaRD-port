/* Ghidra address: 0040bbf4; FUN_0040bbf4 */

void __cdecl FUN_0040bbf4(undefined2 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 local_80 [2];
  uint local_78;
  uint local_74;
  int local_70;
  int local_5c;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  if ((DAT_00438f28 != 0) && (DAT_00438f44 != 0)) {
    FUN_00429fc4(local_80,0,0x6c);
    local_80[0] = 0x6c;
    FUN_0040ba10(DAT_00438f34);
    do {
      iVar1 = (**(code **)(*DAT_00438f34 + 100))();
      iVar1 = FUN_0040bac8(iVar1);
    } while (iVar1 != 0);
    local_8 = local_5c;
    local_c = local_70 * param_2;
    local_10 = 0;
    for (local_14 = 0; local_14 < local_78; local_14 = local_14 + param_2) {
      local_10 = local_10 ^ 1;
      puVar3 = (undefined2 *)(local_10 * 2 + local_8);
      for (uVar2 = local_10; uVar2 < local_74; uVar2 = uVar2 + param_2) {
        *puVar3 = param_1;
        puVar3 = puVar3 + param_2;
      }
      local_8 = local_8 + local_c;
    }
    FUN_0040ba10(DAT_00438f34);
    do {
      iVar1 = (**(code **)(*DAT_00438f34 + 0x80))();
      iVar1 = FUN_0040bac8(iVar1);
    } while (iVar1 != 0);
  }
  return;
}

