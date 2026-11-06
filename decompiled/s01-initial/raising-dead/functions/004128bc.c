/* Ghidra address: 004128bc; FUN_004128bc */

void __cdecl FUN_004128bc(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *local_c;
  undefined4 *local_8;
  
  *(undefined2 *)((int)param_1 + 0x7f) = 100;
  FUN_00404a24(DAT_004385a0,100);
  *(undefined2 *)((int)param_1 + 0x83) = *(undefined2 *)(param_2 + 0xc);
  local_c = (undefined4 *)((int)param_1 + 0xc9);
  iVar2 = 0;
  puVar3 = (undefined2 *)((int)param_1 + 0xf1);
  local_8 = &DAT_004d0c04;
  piVar1 = (int *)(param_2 + 0x10);
  do {
    if (*piVar1 != 0) {
      *local_c = *local_8;
      *puVar3 = (short)piVar1[10];
      puVar3[10] = (short)piVar1[0x14];
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 10);
  FUN_00412a7c(param_1,*(short *)(param_2 + 0x88));
  FUN_00404a48(DAT_004385a0,*(undefined2 *)((int)param_1 + *(int *)(param_2 + 0x88) * 2 + 0x105));
  return;
}

