/* Ghidra address: 004374dc; FUN_004374dc */

undefined2 * __cdecl
FUN_004374dc(undefined2 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5,
            int param_6)

{
  int iVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_0042c8f0(0x43cc60);
  *param_1 = 1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(uint *)(param_1 + 3) = param_5 + param_3;
  iVar1 = FUN_004376d4(param_5 + param_3 + param_6);
  *(int *)(param_1 + 5) = iVar1;
  puVar2 = FUN_00435c48(*(int *)(param_1 + 5) + 1);
  *(uint **)(param_1 + 1) = puVar2;
  if (puVar2 == (uint *)0x0) {
    FUN_0042a4f0((undefined4 *)&DAT_0043c6fc);
  }
  FUN_00429f54(*(undefined4 **)(param_1 + 1),param_2,param_3);
  FUN_00429f54((undefined4 *)(*(int *)(param_1 + 1) + param_3),param_4,param_5);
  *(undefined1 *)(*(int *)(param_1 + 1) + param_5 + param_3) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

