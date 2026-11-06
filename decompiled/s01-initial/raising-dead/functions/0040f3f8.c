/* Ghidra address: 0040f3f8; FUN_0040f3f8 */

undefined4 __cdecl
FUN_0040f3f8(short *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
            short *param_5,short param_6)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  char *local_8;
  
  *param_5 = *param_5 + 1;
  if (*param_5 < param_1[1]) {
    sVar1 = *param_1;
    iVar4 = 0;
    if (sVar1 != 0) {
      iVar4 = ((((int)param_6 + ((int)sVar1 >> 1)) % 0x168) / (int)sVar1) * (int)param_1[1];
    }
    sVar1 = *param_5;
    if ((int)param_1[2] <= iVar4 + sVar1) {
      local_8 = s_Flic__j_>__fl_>count_00439ae8;
      FUN_0042b3bd((uint *)&DAT_00402f2c,&local_8,0,(undefined *)0x0,0,0,0,0);
    }
    puVar3 = (undefined2 *)((iVar4 + sVar1) * 10 + *(int *)(param_1 + 4));
    *param_2 = puVar3[1];
    *param_3 = puVar3[2];
    *param_4 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 3);
  }
  else {
    *param_5 = -1;
    uVar2 = 0;
  }
  return uVar2;
}

