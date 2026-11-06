/* Ghidra address: 00437710; FUN_00437710 */

void __cdecl FUN_00437710(int param_1,uint param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43cccc);
  iVar3 = (*(int *)(param_1 + 6) + param_5) - param_3;
  uVar1 = FUN_004376d4(iVar3);
  if (*(uint *)(param_1 + 10) < uVar1) {
    FUN_00437684(param_1,uVar1);
    puVar2 = *(uint **)(param_1 + 2);
  }
  else if ((DAT_0043cce8 < *(int *)(param_1 + 10) - uVar1) && ((*(byte *)(param_1 + 0xe) & 1) == 0))
  {
    puVar2 = FUN_00435c48(uVar1 + 1);
    if (*(int *)(param_1 + 2) == 0) {
      FUN_0042a4f0((undefined4 *)&DAT_0043c6fc);
    }
    if (param_2 != 0) {
      FUN_00429f54(puVar2,*(undefined4 **)(param_1 + 2),param_2);
    }
    *(uint *)(param_1 + 10) = uVar1;
  }
  else {
    puVar2 = *(uint **)(param_1 + 2);
  }
  if ((puVar2 != *(uint **)(param_1 + 2)) || (param_5 != param_3)) {
    FUN_00429f78((undefined4 *)((int)puVar2 + param_5 + param_2),
                 (undefined4 *)((int)*(uint **)(param_1 + 2) + param_3 + param_2),
                 (*(int *)(param_1 + 6) - param_2) - param_3);
  }
  if (param_5 != 0) {
    if (param_4 == (undefined4 *)0x0) {
      FUN_00429fc4((undefined4 *)(param_2 + (int)puVar2),0x20,param_5);
    }
    else {
      FUN_00429f78((undefined4 *)(param_2 + (int)puVar2),param_4,param_5);
    }
  }
  *(int *)(param_1 + 6) = iVar3;
  *(undefined1 *)((int)puVar2 + iVar3) = 0;
  if (puVar2 != *(uint **)(param_1 + 2)) {
    FUN_00435b40((int)*(uint **)(param_1 + 2));
    *(uint **)(param_1 + 2) = puVar2;
  }
  *in_FS_OFFSET = local_28;
  return;
}

