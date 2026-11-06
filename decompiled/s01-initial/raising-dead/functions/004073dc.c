/* Ghidra address: 004073dc; FUN_004073dc */

int __cdecl FUN_004073dc(short *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004065e0(*param_1,param_1[2],0);
  FUN_00429f78(*(undefined4 **)(iVar1 + 0xe),*(undefined4 **)(param_1 + 6),*(uint *)(param_1 + 4));
  *(undefined4 *)(iVar1 + 10) = *(undefined4 *)(param_1 + 4);
  FUN_0042361c(param_1);
  return iVar1;
}

