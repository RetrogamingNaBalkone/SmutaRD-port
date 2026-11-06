/* Ghidra address: 00435578; FUN_00435578 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00435578(uint *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_2 < 0x1000) {
    uVar1 = 0xffffffff;
  }
  else {
    param_1[2] = 1;
    param_1[3] = (uint)param_1;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[0x23] = (uint)DAT_0043c864;
    param_1[0x24] = 0;
    if (DAT_0043c864 == (uint *)0x0) {
      _DAT_0043c868 = param_1;
    }
    else {
      DAT_0043c864[0x24] = (uint)param_1;
    }
    DAT_0043c864 = param_1;
    param_1[0x25] = 0;
    puVar3 = param_1 + 0x26;
    if (DAT_0043c86c == (uint *)0x0) {
      uVar5 = DAT_0043c858 * 2 + 3 & 0xfffffffc;
      DAT_0043c86c = param_1 + 0x27;
      *puVar3 = uVar5;
      puVar3 = (uint *)((int)puVar3 + uVar5 + 4);
      FUN_00435538();
      iVar4 = uVar5 + 4;
    }
    uVar5 = (param_2 - 0xa0) - iVar4;
    *puVar3 = uVar5 + 1;
    *(undefined4 *)((int)puVar3 + (uVar5 + 1 & 0xfffffffc) + 4) = 2;
    puVar2 = PTR_DAT_0043c87c;
    if (uVar5 < DAT_0043c858) {
      puVar2 = (undefined *)((int)DAT_0043c86c + uVar5 * 2 + -0xc);
    }
    puVar3[1] = *(uint *)(puVar2 + 4);
    puVar3[2] = (uint)puVar2;
    *(uint **)(puVar3[1] + 8) = puVar3;
    *(uint **)(puVar2 + 4) = puVar3;
    *(uint *)((int)puVar3 + uVar5) = uVar5 + 4;
    uVar1 = 0;
  }
  return uVar1;
}

