/* Ghidra address: 0042661c; FUN_0042661c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0042661c(undefined4 param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *local_c;
  int local_8;
  
  local_c = &DAT_0053cfc0;
  iVar6 = 0;
  puVar8 = &DAT_0053ca1c;
  do {
    dVar1 = (double)(_DAT_0042676c * (longdouble)iVar6 * (longdouble)_DAT_0043a0c0);
    FUN_004332cc(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    uVar2 = FUN_00433130();
    *puVar8 = uVar2;
    dVar1 = (double)(_DAT_0042676c * (longdouble)iVar6 * (longdouble)_DAT_0043a0c0);
    FUN_00432fa0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    uVar2 = FUN_00433130();
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
    *local_c = uVar2;
    local_c = local_c + 1;
  } while (iVar6 < 0x169);
  _DAT_0053d62c = 0x2d;
  iVar6 = 0;
  local_8 = 0;
  iVar7 = 0;
  do {
    dVar1 = (double)(_DAT_0042676c * (longdouble)local_8 * (longdouble)_DAT_0043a0c0);
    FUN_004332cc(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    FUN_00433108();
    iVar3 = FUN_00433130();
    dVar1 = (double)(_DAT_0042676c * (longdouble)local_8 * (longdouble)_DAT_0043a0c0);
    FUN_00432fa0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    FUN_00433108();
    iVar4 = FUN_00433130();
    puVar5 = &DAT_0053d564 + iVar6;
    for (; iVar6 < (iVar3 * 100) / iVar4; iVar6 = iVar6 + 1) {
      *puVar5 = (short)iVar7;
      puVar5 = puVar5 + 1;
    }
    iVar3 = local_8 + 1;
    iVar7 = local_8;
    local_8 = iVar3;
  } while (iVar3 < 0x2e);
  return param_1;
}

